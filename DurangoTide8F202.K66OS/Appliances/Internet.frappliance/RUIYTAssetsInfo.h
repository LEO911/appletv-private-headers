/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSArray;

@interface RUIYTAssetsInfo : XXUnknownSuperclass {
	int _count;	// 4 = 0x4
	NSArray *_assets;	// 8 = 0x8
	NSDate *_timeStamp;	// 12 = 0xc
	int _totalQueryResults;	// 16 = 0x10
}
@property(retain) NSArray *assets;	// G=0x5c39; S=0x5cb1; converted property
@property(assign) int count;	// G=0x5c29; S=0x5c19; converted property
@property(retain) NSDate *timeStamp;	// G=0x5c69; S=0x5c79; converted property
@property(assign) int totalQueryResults;	// G=0x5c59; S=0x5c49; converted property
+ (id)infoFromVideosDocument:(id)videosDocument timeStamp:(id)stamp;	// 0x5e09
+ (id)infoWithAssets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x5dc1
- (id)initWithAssets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x5d45
// converted property getter: - (id)assets;	// 0x5c39
// converted property getter: - (int)count;	// 0x5c29
- (void)dealloc;	// 0x5ce9
// converted property setter: - (void)setAssets:(id)assets;	// 0x5cb1
// converted property setter: - (void)setCount:(int)count;	// 0x5c19
// converted property setter: - (void)setTimeStamp:(id)stamp;	// 0x5c79
// converted property setter: - (void)setTotalQueryResults:(int)results;	// 0x5c49
// converted property getter: - (id)timeStamp;	// 0x5c69
// converted property getter: - (int)totalQueryResults;	// 0x5c59
@end
