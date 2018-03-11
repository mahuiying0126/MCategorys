//
//  NSData+MAdd.h
//  MCategorysExample
//
//  Created by magic on 2018/3/11.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSData (MAdd)

#pragma mark - 图片转 data

/**
 将图片转成 data 数据,可压缩

 @param image 图片
 @param ratio 压缩比例
 @return  data 数据
 */
+ (NSData *)m_changeDataFromImage:(UIImage *)image
                 compressionRatio:(CGFloat)ratio;

@end
