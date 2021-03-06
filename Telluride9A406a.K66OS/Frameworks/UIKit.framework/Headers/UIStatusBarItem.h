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
@private
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x357e110d; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x35687fcd; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x3569a32d; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x35688011; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x35698fa5; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x35699031; @dynamic
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x356878d1
+ (id)itemWithType:(int)type;	// 0x35687ec9
+ (BOOL)typeIsValid:(int)valid;	// 0x35687f35
- (id)initWithType:(int)type;	// 0x35698e45
- (BOOL)appearsInRegion:(int)region;	// 0x35687f41
- (BOOL)appearsOnLeft;	// 0x35687fad
- (BOOL)appearsOnRight;	// 0x35687ff1
- (int)compareLeftOrder:(id)order;	// 0x35689cb9
- (int)comparePriority:(id)priority;	// 0x3569a2f5
- (int)compareRightOrder:(id)order;	// 0x357beae5
- (id)description;	// 0x3597db4d
// declared property getter: - (id)indicatorName;	// 0x357e110d
// declared property getter: - (int)leftOrder;	// 0x35687fcd
// declared property getter: - (int)priority;	// 0x3569a32d
// declared property getter: - (int)rightOrder;	// 0x35688011
// declared property getter: - (int)type;	// 0x35698fa5
// declared property getter: - (Class)viewClass;	// 0x35699031
@end

