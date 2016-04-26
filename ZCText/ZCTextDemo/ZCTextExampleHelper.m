//
//  ZCTextExampleHelper.m
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import "ZCTextExampleHelper.h"
#import "ZCText.h"
#import "UIControl+ZCAdd.h"
#import "UIView+ZCAdd.h"

static BOOL DebugEnabled = NO;

@implementation ZCTextExampleHelper

+ (void)addDebugOptionToViewController:(UIViewController *)vc {
    UISwitch *switcher = [UISwitch new];
    [switcher.layer setValue:@(0.8) forKeyPath:@"transform.scale"];
    
    [switcher setOn:DebugEnabled];
    [switcher addBlockForControlEvents:UIControlEventValueChanged block:^(UISwitch *sender) {
        [self setDebug:sender.isOn];
    }];
    
    UIView *view = [UIView new];
    view.size = CGSizeMake(40, 44);
    [view addSubview:switcher];
    switcher.centerX = view.width / 2;
    switcher.centerY = view.height / 2;
    
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithCustomView:view];
    vc.navigationItem.rightBarButtonItem = item;
}

+ (void)setDebug:(BOOL)debug {
    ZCTextDebugOption *debugOptions = [ZCTextDebugOption new];
    if (debug) {
        debugOptions.baselineColor = [UIColor redColor];
        debugOptions.CTFrameBorderColor = [UIColor redColor];
        debugOptions.CTLineFillColor = [UIColor colorWithRed:0.000 green:0.463 blue:1.000 alpha:0.180];
        debugOptions.CGGlyphBorderColor = [UIColor colorWithRed:1.000 green:0.524 blue:0.000 alpha:0.200];
    } else {
        [debugOptions clear];
    }
    [ZCTextDebugOption setSharedDebugOption:debugOptions];
    DebugEnabled = debug;
}

+ (BOOL)isDebug {
    return DebugEnabled;
}


@end
