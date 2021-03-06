/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTextList : NSObject <NSCoding, NSCopying> {
	NSString *_markerFormat;	// 4 = 0x4
	unsigned _listFlags;	// 8 = 0x8
	int _startIndex;	// 12 = 0xc
	void *_listSecondary;	// 16 = 0x10
}
@property(readonly, retain) NSString *markerFormat;	// G=0x368c5be5; converted property
@property(assign) int startingItemNumber;	// G=0x368c5c29; S=0x368c5c15; converted property
+ (id)_standardMarkerAttributesForAttributes:(id)attributes;	// 0x368c75e1
+ (void)initialize;	// 0x368c5ad5
- (id)initWithCoder:(id)coder;	// 0x368c5e4d
- (id)initWithMarkerFormat:(id)markerFormat options:(unsigned)options;	// 0x368c5b15
- (BOOL)_isOrdered;	// 0x368c7031
- (id)_markerAtIndex:(unsigned)index inText:(id)text;	// 0x368c74a9
- (id)_markerForMarkerFormat:(id)markerFormat itemNumber:(int)number isNumbered:(BOOL *)numbered substitutionStart:(unsigned *)start end:(unsigned *)end specifierStart:(unsigned *)start6 end:(unsigned *)end7;	// 0x368c61d1
- (id)_markerPrefix;	// 0x368c7121
- (id)_markerSpecifier;	// 0x368c718d
- (id)_markerSuffix;	// 0x368c742d
- (id)_markerTitle;	// 0x368c7079
- (id)_unaffixedMarkerForItemNumber:(int)itemNumber;	// 0x368c7289
- (id)_unaffixedMarkerFormat;	// 0x368c720d
- (id)_unaffixedMarkerTitle;	// 0x368c7329
- (id)copyWithZone:(NSZone *)zone;	// 0x368c5c3d
- (void)dealloc;	// 0x368c5b99
- (id)description;	// 0x368c60e9
- (void)encodeWithCoder:(id)coder;	// 0x368c5cc1
- (unsigned)listOptions;	// 0x368c5bf5
- (id)markerForItemNumber:(int)itemNumber;	// 0x368c6ff9
// converted property getter: - (id)markerFormat;	// 0x368c5be5
- (unsigned)options;	// 0x368c5c05
// converted property setter: - (void)setStartingItemNumber:(int)number;	// 0x368c5c15
// converted property getter: - (int)startingItemNumber;	// 0x368c5c29
@end

