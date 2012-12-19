/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject {
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x32c5e675; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x32aef959; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x32b2c8b9; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x32aef999; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x32b2c68d; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x32b400c9; @dynamic
+ (BOOL)itemType:(int)type appearsInRegion:(int)region;	// 0x32e07c0d
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x32aef185
+ (id)itemWithType:(int)type;	// 0x32aef85d
+ (BOOL)typeIsValid:(int)valid;	// 0x32aef8c5
- (id)initWithType:(int)type;	// 0x32b3fef1
- (BOOL)appearsInRegion:(int)region;	// 0x32aef8d1
- (BOOL)appearsOnLeft;	// 0x32aef93d
- (BOOL)appearsOnRight;	// 0x32aef97d
- (int)compareLeftOrder:(id)order;	// 0x32af09f5
- (int)comparePriority:(id)priority;	// 0x32b2c881
- (int)compareRightOrder:(id)order;	// 0x32b2afd1
- (id)description;	// 0x32e07c4d
// declared property getter: - (id)indicatorName;	// 0x32c5e675
// declared property getter: - (int)leftOrder;	// 0x32aef959
// declared property getter: - (int)priority;	// 0x32b2c8b9
// declared property getter: - (int)rightOrder;	// 0x32aef999
// declared property getter: - (int)type;	// 0x32b2c68d
// declared property getter: - (Class)viewClass;	// 0x32b400c9
@end
