//
//  NSBundle+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import "NSBundle+MAdd.h"

@implementation NSBundle (MAdd)

+ (NSString *)m_getAppBundleName{
    return [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleName"];
}

+ (NSString *)m_getBundleDisplayName{
    return [[NSBundle mainBundle].infoDictionary objectForKey:@"CFBundleDisplayName"];
}

+ (NSString *)m_getBundleShortVersionString{
    return [[NSBundle mainBundle].infoDictionary objectForKey:@"CFBundleShortVersionString"];
}

+ (NSString *)m_getBundleVersion{
    return [[NSBundle mainBundle].infoDictionary objectForKey:@"CFBundleVersion"];
}

+ (NSString *)m_getBundleIdentifier{
    return [[NSBundle mainBundle] bundleIdentifier];
}

@end
