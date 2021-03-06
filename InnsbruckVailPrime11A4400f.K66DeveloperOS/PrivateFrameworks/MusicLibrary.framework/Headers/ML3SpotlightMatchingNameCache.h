/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>

@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {
	unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > _matchingSet;	// 4 = 0x4
	NSString *_matchString;	// 24 = 0x18
	BOOL _idle;	// 28 = 0x1c
	ML3MusicLibrary *_library;	// 32 = 0x20
}
+ (void)initialize;	// 0x3158b54d
+ (void)loadFromLibrary:(id)library namesMatchingString:(id)string cancelHandler:(id)handler;	// 0x3158b5a5
- (id).cxx_construct;	// 0x3158bbe1
- (void).cxx_destruct;	// 0x3158bbcd
- (id)_initWithLibrary:(id)library matchString:(id)string cancelHandler:(id)handler;	// 0x3158b8c5
- (void)dealloc;	// 0x3158bb81
@end

