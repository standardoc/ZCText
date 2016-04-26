//
//  ZCTextDebugOption.h
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//


#import <UIKit/UIKit.h>

@class ZCTextDebugOption;

NS_ASSUME_NONNULL_BEGIN

@protocol ZCTextDebugTarget <NSObject>

@required

- (void)setDebugOption:(nullable ZCTextDebugOption *)option;
@end

@interface ZCTextDebugOption : NSObject <NSCopying>

@property (nullable, nonatomic, strong) UIColor *baselineColor;      ///< baseline color
@property (nullable, nonatomic, strong) UIColor *CTFrameBorderColor; ///< CTFrame path border color
@property (nullable, nonatomic, strong) UIColor *CTFrameFillColor;   ///< CTFrame path fill color
@property (nullable, nonatomic, strong) UIColor *CTLineBorderColor;  ///< CTLine bounds border color
@property (nullable, nonatomic, strong) UIColor *CTLineFillColor;    ///< CTLine bounds fill color
@property (nullable, nonatomic, strong) UIColor *CTLineNumberColor;  ///< CTLine line number color
@property (nullable, nonatomic, strong) UIColor *CTRunBorderColor;   ///< CTRun bounds border color
@property (nullable, nonatomic, strong) UIColor *CTRunFillColor;     ///< CTRun bounds fill color
@property (nullable, nonatomic, strong) UIColor *CTRunNumberColor;   ///< CTRun number color
@property (nullable, nonatomic, strong) UIColor *CGGlyphBorderColor; ///< CGGlyph bounds border color
@property (nullable, nonatomic, strong) UIColor *CGGlyphFillColor;   ///< CGGlyph bounds fill color

- (BOOL)needDrawDebug; ///< `YES`: at least one debug color is visible. `NO`: all debug color is invisible/nil.
- (void)clear; ///< Set all debug color to nil.

/**
 Add a debug target.
 
 @discussion When `setSharedDebugOption:` is called, all added debug target will
 receive `setDebugOption:` in main thread. It maintains an unsafe_unretained
 reference to this target. The target must to removed before dealloc.
 
 @param target A debug target.
 */
+ (void)addDebugTarget:(id<ZCTextDebugTarget>)target;

/**
 Remove a debug target which is added by `addDebugTarget:`.
 
 @param target A debug target.
 */
+ (void)removeDebugTarget:(id<ZCTextDebugTarget>)target;

/**
 Returns the shared debug option.
 
 @return The shared debug option, default is nil.
 */
+ (nullable ZCTextDebugOption *)sharedDebugOption;

/**
 Set a debug option as shared debug option.
 This method must be called on main thread.
 
 @discussion When call this method, the new option will set to all debug target
 which is added by `addDebugTarget:`.
 
 @param option  A new debug option (nil is valid).
 */
+ (void)setSharedDebugOption:(nullable ZCTextDebugOption *)option;

@end

NS_ASSUME_NONNULL_END
