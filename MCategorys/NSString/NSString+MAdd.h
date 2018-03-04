//
//  NSString+MAdd.h
//  PodCatesDemo
//
//  Created by magic on 2018/3/3.
//  Copyright © 2018年 magic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSString (MAdd)

/**
 String 是否为空
 
 @return  YES, 是空的, NO 非空
 */
- (BOOL)m_stringIsNullOrEmpty;

/**
 字符串 Range

 @return Range
 */
- (NSRange)m_rangeOfAll;

/**
 字符串中是否包含表情
 
 @return YES 包含, NO 不包含
 */
- (BOOL)m_stringContainsEmoji;
/**
 将 String 转颜色 :@"f7f7f7" - > UIColor
 
 @return UIColor
 */
- (UIColor *)m_colorWithString;

/**
 将 String 转为 URL
 
 @return URL
 */
- (NSURL *)m_exchangeURL;

/**
 删除字符串前后空格

 @return 删除后的字符串
 */
- (NSString *)m_trimmedString;

/**
  删除字符串中指定字符

 @param character  要删除的字符
 @return 删除完成的字符串
 */
- (NSString *)m_removeStringByCharacter:(NSString *)character;

/**
 删除字符串中所以得空格

 @return  删除完成的字符串
 */
- (NSString *)m_removeAllSpace;

@end
