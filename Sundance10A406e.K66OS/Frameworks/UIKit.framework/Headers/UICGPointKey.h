/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface UICGPointKey : NSObject <NSCopying> {
	CGPoint _point;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGPoint point;	// G=0x30cdc591; @synthesize=_point
+ (id)pointKeyWithPoint:(CGPoint)point;	// 0x30cdc41d
- (id)copyWithZone:(NSZone *)zone;	// 0x30cdc46d
- (unsigned)hash;	// 0x30cdc52d
- (BOOL)isEqual:(id)equal;	// 0x30cdc4bd
// declared property getter: - (CGPoint)point;	// 0x30cdc591
@end

