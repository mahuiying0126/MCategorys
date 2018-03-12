//
//  UIApplication+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/12.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface UIApplication (MAdd)
/** 沙盒 documents 路径*/
@property (nonatomic, readonly) NSURL * _Nullable documentsURL;
@property (nonatomic, readonly) NSString * _Nullable documentsPath;

/// 沙盒 Caches 路径
@property (nonatomic, readonly) NSURL * _Nullable cachesURL;
@property (nonatomic, readonly) NSString * _Nullable cachesPath;

/// 沙盒 Library 路径
@property (nonatomic, readonly) NSURL * _Nullable libraryURL;
@property (nonatomic, readonly) NSString * _Nullable libraryPath;

/// Application's Bundle Name (show in SpringBoard).
@property (nullable, nonatomic, readonly) NSString *appBundleName;

@property (nullable, nonatomic, readonly) NSString *appDisplayName;

/// Application's Bundle ID.  e.g. "com.****.***"
@property (nullable, nonatomic, readonly) NSString *appBundleID;

/// Application's Version.  e.g. "1.2.0"
@property (nullable, nonatomic, readonly) NSString *appVersion;

/// Application's Build number. e.g. "123"
@property (nullable, nonatomic, readonly) NSString *appBuildVersion;


@end
