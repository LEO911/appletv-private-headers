/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {
	NSString *_subcommandName;	// 4 = 0x4
	NSMutableArray *_optionArray;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x35418471; converted property
@property(readonly, retain) NSString *subcommandName;	// G=0x35418461; converted property
+ (id)subcommandWithName:(id)name;	// 0x35418285
- (id)initWithName:(id)name;	// 0x354182d1
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x35418489
- (void)addOptions;	// 0x3541836d
- (int)compare:(id)compare;	// 0x35418421
- (void)dealloc;	// 0x354146ed
- (id)description;	// 0x354185b9
- (id)formattedHelpFooter;	// 0x35418485
- (id)formattedHelpHeader;	// 0x35418481
- (unsigned)hash;	// 0x35418401
- (BOOL)isEqual:(id)equal;	// 0x35418371
// converted property getter: - (id)optionArray;	// 0x35418471
- (int)run;	// 0x354185b1
- (void)showHelp;	// 0x354185b5
- (void)stop;	// 0x35414e81
// converted property getter: - (id)subcommandName;	// 0x35418461
@end

