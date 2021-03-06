/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject {
@private
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x32737ed9; S=0x329457e5; converted property
- (id)init;	// 0x3273e565
- (id)addParagraph;	// 0x327b3995
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x329ef09d
- (void)applyTextListStyle:(id)style;	// 0x329dc675
- (void)dealloc;	// 0x327b62ad
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x327b81b1
- (void)flattenProperties;	// 0x329dc541
- (BOOL)isEmpty;	// 0x327fdbc9
- (id)overrideTextListStyle;	// 0x327f8955
- (id)paragraphAtIndex:(unsigned)index;	// 0x32738619
- (unsigned)paragraphCount;	// 0x327385f9
- (id)plainText;	// 0x32901f8d
// converted property getter: - (id)properties;	// 0x32737ed9
- (void)removeAllParagraphs;	// 0x329dc711
- (void)removeTrailingNewlines;	// 0x329dc5f5
- (void)removeUnnecessaryOverrides;	// 0x327b8e5d
- (void)setParentTextListStyle:(id)style;	// 0x327b8901
// converted property setter: - (void)setProperties:(id)properties;	// 0x329457e5
- (id)textListStyle;	// 0x327b88cd
@end

