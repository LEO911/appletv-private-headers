/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	int _options;	// 4 = 0x4
	NSArray *_components;	// 8 = 0x8
	NSArray *_asciiComponents;	// 12 = 0xc
	NSData *_wholeSearchStringData;	// 16 = 0x10
	NSData *_context;	// 20 = 0x14
}
- (id)initWithSearchString:(id)searchString;	// 0x331d1ca9
- (id)initWithSearchString:(id)searchString andLocale:(id)locale;	// 0x331d1cc9
- (id)initWithSearchString:(id)searchString andLocale:(id)locale andOptions:(int)options;	// 0x331d1989
- (id)initWithSearchString:(id)searchString options:(int)options;	// 0x331d1ced
- (void)dealloc;	// 0x331d1d0d
- (BOOL)matches:(id)matches;	// 0x331d1925
- (BOOL)matches:(id)matches matchType:(int)type;	// 0x331d1955
- (BOOL)matchesASCIIString:(const char *)string matchType:(int)type;	// 0x331d12cd
- (BOOL)matchesUTF8String:(const char *)string;	// 0x331d1711
- (BOOL)matchesUTF8String:(const char *)string matchType:(int)type;	// 0x331d1729
@end

