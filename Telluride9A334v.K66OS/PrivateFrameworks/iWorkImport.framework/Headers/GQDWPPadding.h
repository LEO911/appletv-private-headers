/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPPadding : NSObject <GQDNameMappable> {
@private
	float mTop;	// 4 = 0x4
	float mLeft;	// 8 = 0x8
	float mBottom;	// 12 = 0xc
	float mRight;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x32be9ec1
- (float)bottom;	// 0x32be9eed
- (float)left;	// 0x32be9edd
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32be9ff1
- (float)right;	// 0x32be9efd
- (float)top;	// 0x32be9ecd
@end

