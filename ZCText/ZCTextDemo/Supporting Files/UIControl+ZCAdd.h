//
//  UIControl+ZCAdd.h
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (ZCAdd)

- (void)removeAllTargets;
- (void)setTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;
- (void)addBlockForControlEvents:(UIControlEvents)controlEvents block:(void(^)(id sender))block;
- (void)setBlockForControlEvents:(UIControlEvents)controlEvents block:(void(^)(id sender))block;
- (void)removeAllBlcksForControlEvents:(UIControlEvents)controlEnents;
@end
