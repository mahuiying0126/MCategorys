//
//  NSDate+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/11.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MAdd)

#pragma mark - 日期扩展属性
/** 当前日期的年*/
@property (nonatomic, readonly) NSInteger year;
/** 月(1-12)*/
@property (nonatomic, readonly) NSInteger month;
/** 天(1-31)*/
@property (nonatomic, readonly) NSInteger day;
/** 小时(0-23)*/
@property (nonatomic, readonly) NSInteger hour;
/** 分钟(0-59)*/
@property (nonatomic, readonly) NSInteger minute;
/** 秒(0-59)*/
@property (nonatomic, readonly) NSInteger second;
/** 毫秒*/
@property (nonatomic, readonly) NSInteger nanosecond;
/** 第几周*/
@property (nonatomic, readonly) NSInteger weekday;

@property (nonatomic, readonly) NSInteger weekdayOrdinal;
/** 基于月第几周(1-5)*/
@property (nonatomic, readonly) NSInteger weekOfMonth;
/** 基于年第几周(1-53)*/
@property (nonatomic, readonly) NSInteger weekOfYear;
/** 一年的一个星期的组成部分*/
@property (nonatomic, readonly) NSInteger yearForWeekOfYear;
/** 第几季度*/
@property (nonatomic, readonly) NSInteger quarter;
/** 是否为闰月*/
@property (nonatomic, readonly) BOOL isLeapMonth;
/** 是否为闰年*/
@property (nonatomic, readonly) BOOL isLeapYear;
/** 是否为今天*/
@property (nonatomic, readonly) BOOL isToday;
/** 是否为昨天*/
@property (nonatomic, readonly) BOOL isYesterday;

#pragma mark - 日期\时间\时间戳 转换

/**
 获取当前时间的时间戳

 @return 时间戳
 */
+ (NSString *)m_getCurrentTimeStamp;

/**
 时间戳格式化;13位时间戳也可以转换

 @param timeStap 时间戳
 @param format 时间格式
 @return 时间. eg:2018-01-01 12:00:00
 */
+ (NSString *)m_changeFromTimeStamp:(NSString *)timeStap
                             format:(NSString *)format;

/**
 获取当前日期本月的天数

 @param date 日期
 @return 天数
 */
+ (NSInteger)m_currentMonthOfDay:(NSDate *)date;

/**
 获取当前日期所在月的行数

 @param date 日期
 @return 行数
 */
+ (NSInteger)m_getMonthRows:(NSDate *)date;

/**
 判断某一天与日期是否为同一天
 日期格式: YYYY-MM-DD
 @param dayString  某一天
 @param date 日期
 @return  YES 是同一天; NO 反之
 */
+ (BOOL)m_checkOneday:(NSString *)dayString
          anotherDate:(NSDate *)date;

/**
 判断两个日期是否为同一天

 @param oneDay  一天
 @param anotherDay 另一天
 @return  YES 同一天; NO 反之
 */
+ (BOOL)m_checkSameDay:(NSDate *)oneDay
           anotherDate:(NSDate *)anotherDay;

/**
 通过日期获取当前是周几

 @param date 日期
 @return 周数(1-7  ->  日-六)
 */
+ (NSInteger)m_getNumberInWeek:(NSDate *)date;

@end
