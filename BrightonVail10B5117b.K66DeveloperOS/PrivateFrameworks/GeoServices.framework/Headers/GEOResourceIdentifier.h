/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOResourceIdentifier : NSObject {
	NSString *_name;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *name;	// G=0x341ba15d; S=0x341ba171; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x341ba181; S=0x341ba191; @synthesize=_type
- (void)dealloc;	// 0x341b9f71
- (id)description;	// 0x341ba09d
- (unsigned)hash;	// 0x341ba065
- (BOOL)isEqual:(id)equal;	// 0x341b9fbd
// declared property getter: - (id)name;	// 0x341ba15d
// declared property setter: - (void)setName:(id)name;	// 0x341ba171
// declared property setter: - (void)setType:(int)type;	// 0x341ba191
// declared property getter: - (int)type;	// 0x341ba181
@end

