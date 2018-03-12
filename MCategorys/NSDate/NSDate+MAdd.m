//
//  NSDate+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/11.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import "NSDate+MAdd.h"

@implementation NSDate (MAdd)

- (NSInteger)year {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitYear fromDate:self] year];
}

- (NSInteger)month {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitMonth fromDate:self] month];
}

- (NSInteger)day {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitDay fromDate:self] day];
}

- (NSInteger)hour {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitHour fromDate:self] hour];
}

- (NSInteger)minute {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitMinute fromDate:self] minute];
}

- (NSInteger)second {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitSecond fromDate:self] second];
}

- (NSInteger)nanosecond {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitSecond fromDate:self] nanosecond];
}

- (NSInteger)weekday {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitWeekday fromDate:self] weekday];
}

- (NSInteger)weekdayOrdinal {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitWeekdayOrdinal fromDate:self] weekdayOrdinal];
}

- (NSInteger)weekOfMonth {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitWeekOfMonth fromDate:self] weekOfMonth];
}

- (NSInteger)weekOfYear {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitWeekOfYear fromDate:self] weekOfYear];
}

- (NSInteger)yearForWeekOfYear {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitYearForWeekOfYear fromDate:self] yearForWeekOfYear];
}

- (NSInteger)quarter {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitQuarter fromDate:self] quarter];
}

- (BOOL)isLeapMonth {
    return [[[NSCalendar currentCalendar] components:NSCalendarUnitQuarter fromDate:self] isLeapMonth];
}

- (BOOL)isLeapYear {
    NSUInteger year = self.year;
    return ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)));
}

- (BOOL)isToday {
    if (fabs(self.timeIntervalSinceNow) >= 60 * 60 * 24) return NO;
    return [NSDate new].day == self.day;
}

- (BOOL)isYesterday {
    
    NSDate *added = [self dateByAddingDays:1];
    
    return [added isToday];
}

- (NSDate *)dateByAddingDays:(NSInteger)days {
    NSTimeInterval aTimeInterval = [self timeIntervalSinceReferenceDate] + 86400 * days;
    NSDate *newDate = [NSDate dateWithTimeIntervalSinceReferenceDate:aTimeInterval];
    return newDate;
}

+ (NSString *)m_getCurrentTimeStamp{
    NSDate *currentDate = [NSDate date];
    long time = (long)[currentDate timeIntervalSince1970];
    return [NSString stringWithFormat:@"%ld",time];
}

+ (NSString *)m_changeFromTimeStamp:(NSString *)timeStap format:(NSString *)format{
    if (timeStap.length == 13) {
        timeStap = [timeStap substringFromIndex:10];
    }
    NSTimeInterval secs = [timeStap doubleValue];
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:secs];
    NSDateFormatter *dateformat = [[NSDateFormatter alloc] init];
    NSString *tempFormat = @"yyyy-MM-dd HH:mm:ss";
    if (format) {
        tempFormat = format;
    }
    [dateformat setDateFormat:tempFormat];
    return [dateformat stringFromDate: date];
}

+ (NSInteger)m_currentMonthOfDay:(NSDate *)date{
    NSRange totaldaysInMonth = [[NSCalendar currentCalendar] rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:date];
    return totaldaysInMonth.length;
}

+ (NSInteger)m_getMonthRows:(NSDate *)date{
    NSDate *firstday;
    [[NSCalendar currentCalendar] rangeOfUnit:NSCalendarUnitMonth startDate:&firstday interval:NULL forDate:date];
    NSUInteger cycle =[[NSCalendar currentCalendar] ordinalityOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitWeekOfMonth forDate:firstday];
    NSRange daysOfMonth = [[NSCalendar currentCalendar] rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:date];
    //该月的行数
    NSInteger shengyu = daysOfMonth.length - (8 - cycle);
    NSInteger row;
    row = shengyu % 7 > 0 ? shengyu/7 + 2 : shengyu/7 + 1;
    return row;
}

+ (BOOL)m_checkOneday:(NSString *)dayString anotherDate:(NSDate *)date{
    NSDateFormatter *formater = [[NSDateFormatter alloc] init];
    [formater setDateFormat:@"YYYY-MM-DD"];
    NSString *string = [formater stringFromDate:date];
    return [dayString isEqualToString:string];
}

+ (BOOL)m_checkSameDay:(NSDate *)oneDay anotherDate:(NSDate *)anotherDay{
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSCalendarUnit calendarUnit = NSCalendarUnitYear | NSCalendarUnitMonth |  NSCalendarUnitDay;
    NSDateComponents* comp1 = [calendar components:calendarUnit fromDate:oneDay];
    NSDateComponents* comp2 = [calendar components:calendarUnit fromDate:anotherDay];
    BOOL isSame = [comp1 day]   == [comp2 day] &&
    [comp1 month] == [comp2 month] &&
    [comp1 year]  == [comp2 year];
    return isSame;
}

+ (NSInteger)m_getNumberInWeek:(NSDate *)date{
    NSUInteger number =[[NSCalendar currentCalendar] ordinalityOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitWeekOfMonth forDate:date];
    return number;
}

@end
