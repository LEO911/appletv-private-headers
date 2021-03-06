/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSLocale;

@interface UILocalizedIndexedCollation : NSObject {
@private
	NSLocale *_locale;	// 4 = 0x4
	NSArray *_sectionTitles;	// 8 = 0x8
	NSArray *_sectionStartStrings;	// 12 = 0xc
	NSArray *_sectionIndexTitles;	// 16 = 0x10
	NSArray *_sectionIndexMapping;	// 20 = 0x14
	NSString *_transform;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x307de571; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x307de561; 
+ (id)collationWithDictionary:(id)dictionary;	// 0x307de97d
+ (id)currentCollation;	// 0x307de731
- (id)initWithDictionary:(id)dictionary;	// 0x307de7d1
- (void)dealloc;	// 0x307de68d
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x307dea1d
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x307de659
// declared property getter: - (id)sectionIndexTitles;	// 0x307de571
// declared property getter: - (id)sectionTitles;	// 0x307de561
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x307de591
- (id)transformedCollationStringForString:(id)string;	// 0x307de9b1
@end

