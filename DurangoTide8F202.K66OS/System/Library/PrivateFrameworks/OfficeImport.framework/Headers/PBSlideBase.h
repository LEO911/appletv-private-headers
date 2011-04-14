/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBSlideBase : NSObject {
}
+ (id)createOptions:(long)options transType:(int)type;	// 0x31974565
+ (void)mapSlideNumberPlaceholder:(id)placeholder tgtSlideBase:(id)base state:(id)state;	// 0x319d41fd
+ (void)parseSlideShowInfo:(PptSSSlideInfoAtom *)info slideBase:(id)base state:(id)state;	// 0x3197430d
+ (int)parseTransType:(int)type direction:(long)direction;	// 0x319744bd
+ (void)readColorScheme:(id)scheme colorScheme:(id)scheme2 colorMap:(id)map state:(id)state;	// 0x319d1fad
+ (void)readDrawingGroup:(id)group slide:(id)slide state:(id)state;	// 0x31962545
+ (BOOL)slideFollowsMasterBackground:(id)background;	// 0x31974255
@end
