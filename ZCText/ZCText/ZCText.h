//
//  ZCText.h
//  ZCText
//
//  Created by trustway_mac on 16/4/26.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import <UIKit/UIkit.h>

#if __has_include(<ZCText/ZCText.h>)
FOUNDATION_EXPORT double ZCTextVersionNumber;
FOUNDATION_EXPORT const unsigned char ZCTextVersionString[];
#import <ZCText/ZCTextLable.h>
#import <ZCText/ZCTextView.h>
#import <ZCText/ZCTextAttribute.h>
#import <ZCText/ZCTextArchiver.h>
#import <ZCText/ZCTextParser.h>
#import <ZCText/ZCTextRunDelegate.h>
#import <ZCText/ZCTextRubyAnnotation.h>
#import <ZCText/ZCTextLayout.h>
#import <ZCText/ZCTextLine.h>
#import <ZCText/ZCTextInput.h>
#import <ZCText/ZCTextDebugOption.h>
#import <ZCText/ZCTextKeyboardManager.h>
#import <ZCText/ZCTextUtilities.h>
#import <ZCText/NSAttributedString+ZCText.h>
#import <ZCText/NSParagraphStyle+ZCText.h>
#import <ZCText/UIPasteboard+ZCText.h>
#else
#import "ZCLabel.h"
//#import "ZCTextView.h"
//#import "ZCTextAttribute.h"
//#import "ZCTextArchiver.h"
//#import "ZCTextParser.h"
//#import "ZCTextRunDelegate.h"
//#import "ZCTextRubyAnnotation.h"
//#import "ZCTextLayout.h"
//#import "ZCTextLine.h"
//#import "ZCTextInput.h"
#import "ZCTextDebugOption.h"
//#import "ZCTextKeyboardManager.h"
//#import "ZCTextUtilities.h"
//#import "NSAttributedString+ZCText.h"
//#import "NSParagraphStyle+ZCText.h"
//#import "UIPasteboard+ZCText.h"
#endif