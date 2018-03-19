//
//  NSURL+MAdd.m
//  MCategorysExample
//
//  Created by magic on 2018/3/12.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import "NSURL+MAdd.h"
#import "NSString+MAdd.h"
@implementation NSURL (MAdd)

+ (void)m_openBrowserWithURL:(NSString *)urlString{
    
    [[UIApplication sharedApplication] openURL:urlString.url];
}

@end
