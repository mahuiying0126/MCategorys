//
//  MCategorys.h
//  MCategorys
//
//  Created by magic on 2018/3/4.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MCategorys.
FOUNDATION_EXPORT double MCategorysVersionNumber;

//! Project version string for MCategorys.
FOUNDATION_EXPORT const unsigned char MCategorysVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MCategorys/PublicHeader.h>

#pragma mark - NSArray

#import "NSArray+MAdd.h"

#pragma mark - NSString

#import "NSString+MAdd.h"

#pragma mark - UIView

#import "UIView+MAdd.h"

#pragma mark - NSMutableArray

#import "NSMutableArray+MAdd.h"

#pragma mark - NSBundle

#import "NSBundle+MAdd.h"

#pragma mark - NSObject

#import "NSObject+MAdd.h"

#pragma mark - NSData

#import "NSData+MAdd.h"

#pragma mark - NSDate

#import "NSDate+MAdd.h"

#pragma mark - UIColor

#import "UIColor+MAdd.h"

#pragma mark - UIButton

#import "UIButton+MAdd.h"

#pragma mark - UIApplication

#import "UIApplication+MAdd.h"

#pragma mark - NSURL

#import "NSURL+MAdd.h"

#pragma mark - NSDictionary

#import "NSDictionary+MAdd.h"

#import "NSMutableDictionary+MAdd.h"

#pragma mark - UITableView

#import "UITableView+MPlaceholder.h"



#pragma mark - Utility

#import "MTimer.h"


#ifdef DEBUG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(...)
#endif

