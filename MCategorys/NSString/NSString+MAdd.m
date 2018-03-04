//
//  NSString+MAdd.m
//  PodCatesDemo
//
//  Created by magic on 2018/3/3.
//  Copyright © 2018年 magic. All rights reserved.
//

#import "NSString+MAdd.h"

@implementation NSString (MAdd)

- (BOOL)m_stringIsNullOrEmpty{
    NSString *string = self;
    if (string == nil || string == NULL || [string isKindOfClass:[NSNull class]] || [string length] == 0 || [string isEqualToString: @"(null)"]) {
        
        return YES;
    }
    return NO;
}

- (NSRange)m_rangeOfAll{
    return NSMakeRange(0, self.length);
}

- (BOOL)m_stringContainsEmoji{
    __block BOOL returnValue = NO;
    [self enumerateSubstringsInRange:NSMakeRange(0, [self length]) options:NSStringEnumerationByComposedCharacterSequences usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
        
        const unichar hs = [substring characterAtIndex:0];
        
        if (0xd800 <= hs && hs <= 0xdbff) {
            if (substring.length > 1) {
                const unichar ls = [substring characterAtIndex:1];
                const int uc = ((hs - 0xd800) * 0x400) + (ls - 0xdc00) + 0x10000;
                if (0x1d000 <= uc && uc <= 0x1f77f) {
                    returnValue = YES;
                }
            }
        } else if (substring.length > 1) {
            const unichar ls = [substring characterAtIndex:1];
            if (ls == 0x20e3) {
                returnValue = YES;
            }
        } else {
            if (0x2100 <= hs && hs <= 0x27ff) {
                returnValue = YES;
            } else if (0x2B05 <= hs && hs <= 0x2b07) {
                returnValue = YES;
            } else if (0x2934 <= hs && hs <= 0x2935) {
                returnValue = YES;
            } else if (0x3297 <= hs && hs <= 0x3299) {
                returnValue = YES;
            } else if (hs == 0xa9 || hs == 0xae || hs == 0x303d || hs == 0x3030 || hs == 0x2b55 || hs == 0x2b1c || hs == 0x2b1b || hs == 0x2b50) {
                returnValue = YES;
            }
        }
    }];
    return returnValue;
}

- (UIColor *)m_colorWithString{
    NSString *cString = [[self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    if ([cString length] < 6){
        return [UIColor clearColor];
    }
    if ([cString hasPrefix:@"0X"])
        cString = [cString substringFromIndex:2];
    if ([cString hasPrefix:@"#"])
        cString = [cString substringFromIndex:1];
    if ([cString length] != 6)
        return [UIColor clearColor];
    
    NSRange range;
    range.location = 0;
    range.length = 2;
    
    //r
    NSString *rString = [cString substringWithRange:range];
    
    //g
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    
    //b
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
    
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:((float) r / 255.0f) green:((float) g / 255.0f) blue:((float) b / 255.0f) alpha:1.0f];
}

- (NSURL *)m_exchangeURL{
    if (self) {
        return [NSURL URLWithString:self];
    }
    return nil;
}

- (NSString *)m_trimmedString{
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
}

- (NSString *)m_removeStringByCharacter:(NSString *)character{
    return [self stringByReplacingOccurrencesOfString:character withString:@""];
}

- (NSString *)m_removeAllSpace{
    NSString *content = [self m_trimmedString]; /// 去首尾空格
    NSString *replace = [content stringByReplacingOccurrencesOfString:@" " withString:@""];/// 去全部空格
    return replace;
}


@end
