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

/**
 拦截原方法,替换原来方法
 想同时执行俩个方法,只需要在执行方法里调用自己
 @param originalSelector 原方法
 @param swizzledSelector 替换方法
 */
- (void)m_exchangeWithOriginalSelector:(SEL)originalSelector swizzledSelecor:(SEL)swizzledSelector;

/**
 获取当前类中的方法列表

 @return  方法列表集合
 */
- (NSArray <NSString *> *)m_getClassMethodList;

/**
 获取当前类中的属性列表

 @return  属性集合
 */
- (NSArray <NSString *> *)m_getClassPropertyList;

/**
 获取当前类中的代理方法列表

 @return 代理方法集合
 */
- (NSArray <NSString *> *)m_getClassProtocolList;

/**
 获取当前类中的实例变量方法列表

 @return 实例方法集合
 */
- (NSArray <NSString *> *)m_getClassIVarList;

/**
 判断当前类的属性中是否包含此属性

 @param key 属性
 @return  YES 存在; NO 反之
 */
- (BOOL)m_hasPropertyWithKey:(NSString *)key;

/**
 根据Key判断是否包含该成员变量
 
 @param key NSString
 @return BOOL
 */
- (BOOL)m_hasIvarWithKey:(NSString *)key;



@end
