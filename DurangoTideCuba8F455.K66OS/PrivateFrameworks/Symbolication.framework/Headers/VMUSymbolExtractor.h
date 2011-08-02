/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface VMUSymbolExtractor : NSObject {
	NSMutableArray *_symbols;	// 4 = 0x4
	NSMutableArray *_sourceInfos;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *sourceInfos;	// G=0x3412d6c1; converted property
@property(readonly, retain) NSMutableArray *symbols;	// G=0x3412d6b1; converted property
+ (id)expandSourceInfos:(id)infos usingSymbols:(id)symbols;	// 0x3412ddf9
+ (id)extractLazySymbolOwnerFromHeader:(id)header;	// 0x3412d7d9
+ (unsigned)extractSymbolOwnerFlagsFromHeader:(id)header;	// 0x3412d87d
+ (id)extractSymbolOwnerFromHeader:(id)header;	// 0x3412d915
- (id)init;	// 0x3412d745
- (void)dealloc;	// 0x3412d6d1
// converted property getter: - (id)sourceInfos;	// 0x3412d6c1
// converted property getter: - (id)symbols;	// 0x3412d6b1
@end
