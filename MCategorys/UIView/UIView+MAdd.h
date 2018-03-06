//
//  UIView+MAdd.h
//  MCategorysExample
//
//  Created by yizhilu on 2018/3/4.
//  Copyright © 2018年 Magic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (MAdd)

#pragma mark - 坐标

/** frame.origin.x**/
@property (nonatomic,assign) CGFloat left;
/** frame.origin.y**/
@property (nonatomic,assign) CGFloat top;
/** frame.origin.x + frame.size.width**/
@property (nonatomic,assign) CGFloat right;
/** frame.origin.y + frame.size.height**/
@property (nonatomic,assign) CGFloat bottom;
/** frame.size.width**/
@property (nonatomic,assign) CGFloat width;
/** frame.size.height**/
@property (nonatomic,assign) CGFloat height;
/** center.x**/
@property (nonatomic,assign) CGFloat centerX;
/** center.y**/
@property (nonatomic,assign) CGFloat centerY;
/** frame.origin**/
@property (nonatomic,assign) CGPoint origin;
/** frame.size**/
@property (nonatomic,assign) CGSize  size;

#pragma mark - 截图


/**
 创建当前视图截图

 @return 截图图片
 */
- (UIImage *)m_snapshotImage;

/**
 视图截图生成 PDF 文件

 @return  PDF文件
 */
- (NSData *)m_snapshotPDF;





@end
