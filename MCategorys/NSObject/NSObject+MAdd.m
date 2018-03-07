//
//  NSObject+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//
/**
 *关于自动移除KVO 详见网址
 *https://mp.weixin.qq.com/s/NdPgtpBHL7h8sqN-rui_LA
 **/
#import "NSObject+MAdd.h"

@interface MObserverHelper : NSObject

@property (nonatomic, unsafe_unretained) id target;

@property (nonatomic, unsafe_unretained) id observer;

@property (nonatomic, strong) NSString *keyPath;

@property (nonatomic, weak) MObserverHelper *factor;

@end

@implementation MObserverHelper

- (void)dealloc {
    if ( _factor ) {
        
        [_target removeObserver:_observer forKeyPath:_keyPath];
   
    }
}

@end

@implementation NSObject (MAdd)

- (void)m_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath{
    
    [self addObserver:observer forKeyPath:keyPath options:NSKeyValueObservingOptionNew context:nil];
    
    MObserverHelper *helper = [MObserverHelper new];
    
    MObserverHelper *sub = [MObserverHelper new];
    
    sub.target = helper.target = self;
    
    sub.observer = helper.observer = observer;
    
    sub.keyPath = helper.keyPath = keyPath;
    
    helper.factor = sub;
    
    sub.factor = helper;
    
    const char *helpeKey = [NSString stringWithFormat:@"%zd", [observer hash]].UTF8String;
    
    objc_setAssociatedObject(self, helpeKey, helper, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    objc_setAssociatedObject(observer, helpeKey, sub, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (BOOL)m_addMethonWithOriginalSelector:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector{
    
    Method m_swizzledSelector = class_getInstanceMethod(self.class, swizzledSelector);
    BOOL isAddMethon = class_addMethod(self.class, originalSelector, class_getMethodImplementation(self.class, swizzledSelector), method_getTypeEncoding(m_swizzledSelector));
    return isAddMethon;
    
}



@end
