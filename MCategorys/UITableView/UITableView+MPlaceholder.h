//
//  UITableView+MPlaceholder.h
//  MCategorysExample
//
//  Created by magic on 2018/3/16.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MTableViewDelegate <NSObject>

@optional
//完全自定义占位图
- (UIView *)m_noDataView;
 //使用默认占位图, 提供一张图片,可不提供, 默认不显示
- (UIImage *)m_noDataViewImage;
//使用默认占位图, 提供显示文字,可不提供, 默认为暂无数据
- (NSString *)m_noDataViewMessage;
//使用默认占位图, 提供显示文字颜色, 可不提供, 默认为灰色
- (UIColor *)m_noDataViewMessageColor;
//占位图CenterY的偏移量,正数为向下偏移,负数为向上偏移
- (NSNumber *)m_noDataViewCenterYOffset;
@end

@interface UITableView (MPlaceholder)



@end
