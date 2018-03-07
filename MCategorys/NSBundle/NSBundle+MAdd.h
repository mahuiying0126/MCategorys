//
//  NSBundle+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/7.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (MAdd)

/**
 获取 APP 名称

 @return  app名字
 */
+ (NSString *)m_getBundleDisplayName;

/**
 获取 APP 版本号(App Store 显示的版本号->Version)

 @return  版本号
 */
+ (NSString *)m_getBundleShortVersionString;

/**
 获取 APP Build 版本号(Build 号)

 @return Build 号
 */
+ (NSString *)m_getBundleVersion;

/**
 获取 APP Bundle Identifier

 @return Bundle Identifier
 */
+ (NSString *)m_getBundleIdentifier;

@end
