//
//  NSMutableDictionary+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/12.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (MAdd)

/**
 安全的存储一个键值对
 
 @param object 值
 @param key 键
 */
- (void)m_setSafeObject:(id)object
                  forKey:(id)key;

/**
 安全的根据一个键获取对应的对象
 
 @param key key
 @return id
 */
- (id)m_safeObjectForKey:(id)key;

/**
 安全的根据value获取对应的key
 
 @param value id object
 @return id
 */
- (id)m_safeKeyForValue:(id)value;

@end
