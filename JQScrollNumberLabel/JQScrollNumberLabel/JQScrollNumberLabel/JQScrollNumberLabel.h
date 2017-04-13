//
//  JQScrollNumberLabel.h
//  JQScrollNumberLabelDemo
//
//  Created by HanJunqiang on 17/4/5.
//  Copyright © 2017年 HaRi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JQScrollNumberLabel : UIView

@property (nonatomic, strong)NSNumber *displayedNumber; // 当前数值

/*
 tip:
 * 通用1-4：是动态frame，无需设置frame，动态创建位数;
 * 通用5-7：是限定位数，是以位数限定数值最大值;
 * 通用8-9：是更新数值，设定动画时间等;
 */

/** 以下动态设置位数 **/

/**
 通用1

 @param originNumber 数值
 @param size 字体大小
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber fontSize:(CGFloat)size;

/**
 通用2

 @param originNumber 数值
 @param size 字体大小
 @param color 字体颜色
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber fontSize:(CGFloat)size textColor:(UIColor *)color;

/**
 通用3

 @param originNumber 数值
 @param font 字体font
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber font:(UIFont *)font;

/**
 通用4

 @param originNumber 数值
 @param font 字体font
 @param color 字体颜色
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber font:(UIFont *)font textColor:(UIColor *)color;

/** 以下限定位数 **/

/**
 通用5

 @param originNumber 数值
 @param size 字体大小
 @param rowNumber 位数
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber fontSize:(CGFloat)size rowNumber:(NSUInteger)rowNumber;

/**
 通用6

 @param originNumber 数值
 @param size 字体大小
 @param color 字体颜色
 @param rowNumber 位数
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber fontSize:(CGFloat)size textColor:(UIColor *)color rowNumber:(NSUInteger)rowNumber;

/**
 通用7

 @param originNumber 数值
 @param font 字体设置
 @param color 字体颜色
 @param rowNumber 位数
 @return return value description
 */
- (instancetype)initWithNumber:(NSNumber *)originNumber font:(UIFont *)font textColor:(UIColor *)color rowNumber:(NSUInteger)rowNumber;//rowNumber should less than or equal 8

/** 以下是更新数值 **/
/**
 通用8

 @param number 数值+、-量
 @param animated animated description
 */
- (void)changeToNumber:(NSNumber *)number animated:(BOOL)animated;

/**
 通用9

 @param number 数值+、-量
 @param interval 动画时间设置
 @param animated animated description
 */
- (void)changeToNumber:(NSNumber *)number interval:(CGFloat)interval animated:(BOOL)animated;

@end
