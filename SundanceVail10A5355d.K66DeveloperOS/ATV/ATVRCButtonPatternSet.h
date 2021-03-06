/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVRCButtonPatternSet : XXUnknownSuperclass {
	NSArray *_commandPattern;	// 4 = 0x4
	NSArray *_repeatPattern;	// 8 = 0x8
	double _maxRepeatInterval;	// 12 = 0xc
}
@property(retain) NSArray *commandPattern;	// G=0x20f411; S=0x20f399; converted property
@property(assign) double maxRepeatInterval;	// G=0x20f445; S=0x20f431; converted property
@property(retain) NSArray *repeatPattern;	// G=0x20f421; S=0x20f3d5; converted property
- (id)initWithDictionary:(id)dictionary;	// 0x20f221
- (id)_decodePatternFromDictionary:(id)dictionary;	// 0x20fa09
- (id)_encodePatternToDictionary:(id)dictionary;	// 0x20f8a1
- (void)clear;	// 0x20f4c1
// converted property getter: - (id)commandPattern;	// 0x20f411
- (void)dealloc;	// 0x20f335
- (id)description;	// 0x20f5f9
- (id)encodeToDictionary;	// 0x20f511
- (BOOL)isEqual:(id)equal;	// 0x20f759
- (BOOL)isOneShot;	// 0x20f45d
- (BOOL)isValid;	// 0x20f4a9
// converted property getter: - (double)maxRepeatInterval;	// 0x20f445
// converted property getter: - (id)repeatPattern;	// 0x20f421
// converted property setter: - (void)setCommandPattern:(id)pattern;	// 0x20f399
// converted property setter: - (void)setMaxRepeatInterval:(double)interval;	// 0x20f431
// converted property setter: - (void)setRepeatPattern:(id)pattern;	// 0x20f3d5
@end

