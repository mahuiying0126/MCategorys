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

#pragma mark - 字符串处理

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
 将 String 转为 Attribute

 @return attributeString
 */
-(NSMutableAttributedString *)m_exchangeAttribute;

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

/**
 删除 HTML 语句标签

 @return  删除完的字符串
 */
- (NSString *)m_removeHTMLMark;

/**
 获取字体的 size

 @param font 字体 font
 @param size  原始 size
 @param lineBreakMode 换行模式
 @return  size
 */
- (CGSize)m_sizeWithFont:(UIFont *)font
                    size:(CGSize)size
                   model:(NSLineBreakMode)lineBreakMode;

/**
 获取指定字符串的 size
 
 @param font 字符串字体大小
 @return size
 */
- (CGSize)m_sizeWithFont:(UIFont *)font;


/**
 获取字体宽度

 @param font 字符串字体大小
 @return  计算好的宽度
 */
- (CGFloat)m_widthWithFont:(UIFont *)font;

/**
 指定字符串宽度获取高度

 @param font  字符串字体大小
 @param width  宽度
 @return  字符串高度
 */
- (CGFloat)m_heightWithFont:(UIFont *)font
                      width:(CGFloat)width;

#pragma mark - 字符串加密以及 json 转化

/**
 将字符串以 base64方式编码

 @return  加密字符串
 */
- (NSString *)m_encodingBase64;

/**
 将加密的 base 字符串解码

 @return 字符串
 */
- (NSString *)m_decodeBase64;

/**
 字符串以 MD5方式加密

 @return  加密的字符串
 */
- (NSString *)m_encodingMD5;

/**
 将字符串转为 data 类型(UTF-8)

 @return data
 */
- (NSData *)m_dataUTF_8Value;

/**
 将 json 字符串转化为NSArray || NSDictionary

 @return NSArray || NSDictionary
 */
- (id)m_jsonValueDecode;

#pragma mark - 实用工具

/**
 检查剩余多少空间
 
 @return 检查剩余多少空间
 */
+ (double)m_freeDiskSpace;

/**
 格式化手机号,默认3-4-4样式
 eg.138 0000 0000

 @param separator 分割样式
 @return  手机号
 */
- (NSString *)m_mobileFormatWithsSeparator:(NSString *)separator;

/**
 隐藏手机号中间四位数字

 @return  eg. 138****0000
 */
- (NSString *)m_hideMiddleStringWithPhoneNumber;

/**
 隐藏银行卡中间八位数字

 @return 0000 **** **** 0000
 */
- (NSString *)m_hideMiddleStringWithBankNumber;

/**
 是否为移动手机号

 @return YES,是; NO,反之
 */
- (BOOL)m_checkChinaMobelPhoneNumber;

/**
 是否为联通号

 @return YES,是; NO,反之
 */
- (BOOL)m_checkChinaUnicomPhoneNumber;

/**
 是否为电信号

 @return YES,是; NO,反之
 */
- (BOOL)m_checkChinaTelecomPhoneNumber;

/**
 是否为手机号

 @return YES,是; NO,反之
 */
- (BOOL)m_checkPhoneNumber;

#pragma mark - 密码相关

/**
 当前字符串是否为汉字

 @return YES,是; NO,反之
 */
- (BOOL)m_isChineseCharacter;

/**
 当前字符是否为由数字或26个英文字母组成的字符串

 @return YES,是; NO,反之
 */
- (BOOL)m_isEnglishOrNumbers;

/**
 当前字符是否为 长度为location-length的所有字符
 eg.3-20 长度的字符串
 @param rang location:开始的范围 length:结束的范围
 @return YES,是; NO,反之
 */
- (BOOL)m_stringRangLength:(NSRange)rang;

/**
 是否为英文字母

 @return YES,是; NO,反之
 */
- (BOOL)m_isEnglishletter;

/**
 是否为小写字母

 @return YES,是; NO,反之
 */
- (BOOL)m_isLowercase;

/**
 是否为大写字母

 @return YES,是; NO,反之
 */
- (BOOL)m_isCapitals;

/**
 当前字符是否为由数字、26个英文字母或者下划线组成的字符串

 @return YES,是; NO,反之
 */
- (BOOL)m_isNumbersOrLettersOrLineString;

/**
 *  判断当前字符串是否是字母, 数字及下划线的强组合
 *
 *  @return YES,是; NO,反之
 */
- (BOOL)m_checkStringIsStrong;

/**
 当前字符是否以字母开头，长度在6~18之间, 只能包含字母、数字和下划线的密码

 @return YES,是; NO,反之
 */
- (BOOL)m_checkPassword;

/**
 当前字符是否为强密码(必须包含大小写字母和数字的组合，不能使用特殊字符,长度在location-length之间)：location指的是最短密码长度, length指的时最长密码长度

 @param range 密码长度
 @return YES,是; NO,反之
 */
- (BOOL)m_checkStrongPassword:(NSRange)range;

/**
 检查字符串是否为邮箱地址

 @return YES,是; NO,反之
 */
- (BOOL)m_checkEmailAddress;

/**
 检查字符串是否为 URL 链接

 @return YES,是; NO,反之
 */
- (BOOL)m_checkURL;

/**
 检查字符串是否为 QQ 号码

 @return YES,是; NO,反之
 */
-(BOOL)m_checkQQNumber;

#pragma mark - 时间戳转时间

/**
 时间戳转时间(13位时间戳也可以转换)
 
 @param format 时间格式 eg.yyyy-MM-dd HH:mm:ss
 @return  转换完成的时间默认: eg.2015-02-06 10:18:45
 */
-(NSString *)timeStampChangeDateFormat:(NSString *)format;


#pragma mark - 通过正则判断结果

- (BOOL)m_regularWithRule:(NSString *)rule;

/**
 匹配正则,替换字符串
 
 @param regExpress 正则表达式
 @param ment 要替换的文字
 @return 修改完成的字符串
 */
-(NSString *)regularExpression:(NSString *)regExpress
                   replaceMent:(NSString *)ment;

@end
