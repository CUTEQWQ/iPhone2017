//
//  Days.h
//  Cal
//
//  Created by Yif-JJ on 2017/9/27.
//  Copyright © 2017年 JJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Days : NSObject
//判断是否是闰年；
+ (BOOL)isLeapYear:(int)year;

//计算从公元0年到你输入的上一年总共有多少天；
+ (int)daysOfUntilLastYear:(int)year;

//计算公元0年到你输入上个月共有多少天；
+ (int)daysOfUntilLastMonth:(int)year yue:(int)yue;
@end
