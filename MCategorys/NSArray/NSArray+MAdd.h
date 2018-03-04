//
//  NSArray+MAdd.h
//  PodCatesDemo
//
//  Created by magic on 2018/3/3.
//  Copyright © 2018年 magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (MAdd)


/**
 根据下标获取数据对象,越界返回为 nil

 @param index 索引下标
 @return 对象
 */
- (id)m_safeObjectAtIndex:(NSInteger)index;

/**
 从数组中随机获取对象

 @return 对象
 */
- (id)m_randomObject;


/**
 根据对象获取下标,如果对象为 nil 则返回NotFound

 @param object  对象
 @return 下标
 */
- (NSUInteger)m_safeIndexOfObject:(id)object;


/**
 根据给的 plist 文件名字返回数组

 @param name 文件名
 @return 数据数组
 */
+ (NSArray *)m_getArrayFromPlistName:(NSString *)name;

@end
