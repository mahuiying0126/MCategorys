//
//  UIApplication+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/12.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import "UIApplication+MAdd.h"
#import "NSBundle+MAdd.h"
@implementation UIApplication (MAdd)

- (NSURL *)documentsURL {
    
    return [[[NSFileManager defaultManager]
             URLsForDirectory:NSLibraryDirectory
             inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)documentsPath {
    return [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSURL *)cachesURL {
    return [[[NSFileManager defaultManager]
             URLsForDirectory:NSCachesDirectory
             inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)cachesPath {
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSURL *)libraryURL {
    return [[[NSFileManager defaultManager]
             URLsForDirectory:NSLibraryDirectory
             inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)libraryPath {
    return [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSString *)appBundleName {
    return [NSBundle m_getAppBundleName];
}

- (NSString *)appDisplayName{
    return [NSBundle m_getBundleDisplayName];
}

- (NSString *)appBundleID {
    return [NSBundle m_getBundleIdentifier];
}

- (NSString *)appVersion {
    return [NSBundle m_getBundleShortVersionString];
}

- (NSString *)appBuildVersion {
    return [NSBundle m_getBundleVersion];
}


@end
