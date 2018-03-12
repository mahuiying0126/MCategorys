//
//  NSDictionary+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/12.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (MAdd)

/**
 plist 数据转字典

 @param plist  plist数据
 @return 字典
 */
+ (NSDictionary *)m_dictionaryWithPlistData:(NSData *)plist;

/**
 plist 字符串转字典

 @param plist  字符串
 @return  字典
 */
+ (NSDictionary *)m_dictionaryWithPlistString:(NSString *)plist;

/**
  将字典转为 plist 数据

 @return 数据
 */
- (NSData *)m_exchangePlistData;

/**
 字典转为string

 @return 字符串
 */
- (NSString *)m_exchangePlistString;

//以下摘自 YYKit

/**
 将 key 排序

 @return  排序完毕的数组
 */
- (NSArray *)allKeysSorted;

/**
 将 value 通过 key 排序

 @return  value数组
 */
- (NSArray *)allValuesSortedByKeys;

/**
 通过 key 判断 value 是否存在

 @param key  key
 @return YES 存在;NO 反之
 */
- (BOOL)containsObjectForKey:(id)key;

/**
 通过 key 数组,重新将 value 生成字典

 @param keys  数组
 @return 新字典
 */
- (NSDictionary *)entriesForKeys:(NSArray *)keys;

/**
 将字典 json 编码

 @return  json 数据
 */
- (NSString *)jsonStringEncoded;

@end
