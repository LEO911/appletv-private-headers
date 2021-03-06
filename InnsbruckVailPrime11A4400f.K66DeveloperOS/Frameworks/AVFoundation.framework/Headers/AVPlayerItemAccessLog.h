/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
	AVPlayerItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x2c2fefd9; 
- (id)init;	// 0x2c2fecb5
- (id)initWithLogArray:(id)logArray;	// 0x2c2fed4d
- (id)_accessLogArray;	// 0x2c2ff159
- (id)copyWithZone:(NSZone *)zone;	// 0x2c2fee85
- (void)dealloc;	// 0x2c2feed9
- (id)description;	// 0x2c2feda1
// declared property getter: - (id)events;	// 0x2c2fefd9
- (id)extendedLogData;	// 0x2c2fef49
- (unsigned)extendedLogDataStringEncoding;	// 0x2c2fefd5
- (void)finalize;	// 0x2c2fee95
@end

