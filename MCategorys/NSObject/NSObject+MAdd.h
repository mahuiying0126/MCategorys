//
//  NSObject+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
@interface NSObject (MAdd)

/**
 自动移除 KVO 监听

 @param observer  要监听的对象
 @param keyPath  监听的属性
 */
- (void)m_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;

/**
 判断当前类是否可以替换 拦截方法与被拦截方法
 拦截当前类中的SEL方法,替换成自己想要的方法

 @param originalSelector  被拦截的方法
 @param swizzledSelector  替换的方法
 */
- (BOOL)m_addMethonWithOriginalSelector:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
