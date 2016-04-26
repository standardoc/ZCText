//
//  ZCTextExample.m
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import "ZCTextExample.h"
//表示不懂
#import <time.h>
#import "ZCText.h"

@interface ZCTextExample ()
@property (nonatomic, strong) NSMutableArray *titles;
@property (nonatomic, strong) NSMutableArray *classNames;
@end

@implementation ZCTextExample

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"✎  ZCText Demo  ✎";
    self.titles = @[].mutableCopy;
    self.classNames = @[].mutableCopy;
    [self addCell:@"Text Attributes 1" class:@"ZCTextAttributeExample"];
    [self addCell:@"Text Attributes 2" class:@"ZCTextTagExample"];
    [self addCell:@"Text Attachments" class:@"ZCTextAttachmentExample"];
    [self addCell:@"Text Edit" class:@"ZCTextEditExample"];
    [self addCell:@"Text Parser (Markdown)" class:@"ZCTextMarkdownExample"];
    [self addCell:@"Text Parser (Emotion)" class:@"ZCTextEmotionExample"];
    [self addCell:@"Text Binding" class:@"ZCTextBiningExample"];
    [self addCell:@"Copy and Paste" class:@"ZCTextCopyPasteExample"];
    [self addCell:@"Undo and Redo" class:@"ZCTextUndoRedoExample"];
    [self addCell:@"Ruby Anotation" class:@"ZCTextRubyExample"];
    [self addCell:@"Async Display" class:@"ZCTextAsyncExample"];
    [self.tableView reloadData];
}

- (void)addCell:(NSString *)title class:(NSString *)className {
    [self.titles addObject:title];
    [self.classNames addObject:className];
}

#pragma mark - Table view data source

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return _titles.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *identifier = @"ZC";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier];
    }
    cell.textLabel.text = _titles[indexPath.row];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    NSString *className = self.classNames[indexPath.row];
    Class class = NSClassFromString(className);
    if (class) {
        UIViewController *ctrl = class.new;
        ctrl.title = _titles[indexPath.row];
        [self.navigationController pushViewController:ctrl animated:YES];
    }
    [self.tableView deselectRowAtIndexPath:indexPath animated:YES];
}
@end
