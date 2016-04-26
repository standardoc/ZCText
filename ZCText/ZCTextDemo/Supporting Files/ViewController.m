//
//  ViewController.m
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import "ViewController.h"
#import "ZCTextExample.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    ZCTextExample *vc = [ZCTextExample new];
    [self pushViewController:vc animated:NO];
}
@end
