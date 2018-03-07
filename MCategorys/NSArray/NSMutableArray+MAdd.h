//
//  NSMutableArray+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (MAdd)

/**
 向数组里安全加入一个对象

 @param object  对象
 */
- (void)m_safeAddObject:(id)object;

/**
 向数组安全插入对象

 @param object 对象
 @param index 插入下标
 */
- (void)m_safeInserObject:(id)object index:(NSInteger)index;

/**
 根据下标安全移除对象

 @param index 下标
 */
- (void)m_safeRemoveObjectAtIndex:(NSInteger)index;

/**
 根据 range 安全移除对象

 @param range  range 范围
 */
- (void)m_safeRemoveObjectAtRange:(NSRange)range;

/**
 移除第一个元素
 */
- (void)m_safeRemoveFirstObject;

/**
 移除最后一个元素
 */
- (void)m_safeRemoveLastObject;

/**
 向数组里安全加入一个 array 对象

 @param array  数组
 */
- (void)m_safeAddArray:(NSArray *)array;

/**
 将对象插入到数组的首个元素位置

 @param object 对象
 */
- (void)m_prependObject:(id)object;

/**
 将数组元素加入到当前数组首个元素位置

 @param array  数组
 */
- (void)m_prependObjectWithArray:(NSArray *)array;

- (void)m_insterObjectWithArray:(NSArray *)array index:(NSInteger) index; 

/**
 将数组元素前后颠倒
 */
- (void)reverse;


@end
