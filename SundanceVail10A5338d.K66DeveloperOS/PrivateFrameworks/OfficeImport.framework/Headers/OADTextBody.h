/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, NSMutableArray;

@interface OADTextBody : NSObject {
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x339bf079; S=0x33ba7cad; converted property
- (id)init;	// 0x339bc6c9
- (id)addParagraph;	// 0x339bddb9
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x33c44c91
- (void)applyTextListStyle:(id)style;	// 0x33ba7d09
- (void)dealloc;	// 0x339bea8d
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x33aab06d
- (void)flattenProperties;	// 0x33ba7e15
- (BOOL)isEmpty;	// 0x339d47b1
- (id)overrideTextListStyle;	// 0x339c6d71
- (id)paragraphAtIndex:(unsigned)index;	// 0x339d018d
- (unsigned)paragraphCount;	// 0x339d016d
- (id)plainText;	// 0x33ab8489
// converted property getter: - (id)properties;	// 0x339bf079
- (void)removeAllParagraphs;	// 0x33ba7ce9
- (void)removeTrailingNewlines;	// 0x33ba7d95
- (void)removeUnnecessaryOverrides;	// 0x339c11a9
- (void)setParentTextListStyle:(id)style;	// 0x339bfff5
// converted property setter: - (void)setProperties:(id)properties;	// 0x33ba7cad
- (id)textListStyle;	// 0x339cab65
@end

