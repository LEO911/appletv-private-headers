/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADDashStop : NSObject <NSCopying> {
	float mDash;	// 4 = 0x4
	float mSpace;	// 8 = 0x8
}
- (id)initWithDash:(float)dash space:(float)space;	// 0x36fcb9f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3714d6ed
- (float)dash;	// 0x36fcbaad
- (unsigned)hash;	// 0x3714d749
- (BOOL)isEqual:(id)equal;	// 0x3714d781
- (float)space;	// 0x36fcbaf5
@end
