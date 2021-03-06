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
@property(readonly, retain) NSMutableArray *sourceInfos;	// G=0x30bc02d5; converted property
@property(readonly, retain) NSMutableArray *symbols;	// G=0x30bc02c5; converted property
+ (id)expandSourceInfos:(id)infos usingSymbols:(id)symbols;	// 0x30bc0389
+ (id)extractLazySymbolOwnerFromHeader:(id)header;	// 0x30bc0b21
+ (unsigned)extractSymbolOwnerFlagsFromHeader:(id)header;	// 0x30bc0bd9
+ (id)extractSymbolOwnerFromHeader:(id)header;	// 0x30bc0595
- (id)init;	// 0x30bc02e5
- (void)dealloc;	// 0x30bc0c79
// converted property getter: - (id)sourceInfos;	// 0x30bc02d5
// converted property getter: - (id)symbols;	// 0x30bc02c5
@end

