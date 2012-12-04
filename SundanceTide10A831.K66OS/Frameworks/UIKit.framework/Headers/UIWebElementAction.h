/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIWebElementAction : NSObject {
	NSString *_title;	// 4 = 0x4
	id _actionHandler;	// 8 = 0x8
	int _type;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int type;	// G=0x31e3a7bd; @synthesize=_type
+ (id)customElementActionWithTitle:(id)title actionHandler:(id)handler;	// 0x31e3a101
+ (id)standardElementActionWithType:(int)type;	// 0x31e3a711
+ (id)standardElementActionWithType:(int)type customTitle:(id)title;	// 0x31e3a195
- (id)initWithTitle:(id)title actionHandler:(id)handler type:(int)type;	// 0x31e3a015
- (void)_runActionWithElement:(id)element targetURL:(id)url documentView:(id)view interactionLocation:(CGPoint)location;	// 0x31e3a735
- (id)_title;	// 0x31e3a725
- (void)dealloc;	// 0x31e3a09d
// declared property getter: - (int)type;	// 0x31e3a7bd
@end
