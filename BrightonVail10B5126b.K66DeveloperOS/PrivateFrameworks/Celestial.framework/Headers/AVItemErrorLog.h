/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class AVItemErrorLogInternal, NSArray;

@interface AVItemErrorLog : NSObject <NSCopying> {
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x336632a9; 
- (id)init;	// 0x33662f89
- (id)initWithLogArray:(id)logArray;	// 0x33663021
- (id)copyWithZone:(NSZone *)zone;	// 0x33663159
- (void)dealloc;	// 0x336631ad
- (id)description;	// 0x33663075
// declared property getter: - (id)events;	// 0x336632a9
- (id)extendedLogData;	// 0x33663219
- (unsigned)extendedLogDataStringEncoding;	// 0x336632a5
- (void)finalize;	// 0x33663169
@end
