/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : NSObject <NSCopying> {
@private
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x32410455; 
- (id)init;	// 0x32410105
- (id)initWithLogArray:(id)logArray;	// 0x3241000d
- (id)copyWithZone:(NSZone *)zone;	// 0x3240fff9
- (void)dealloc;	// 0x3241032d
- (id)description;	// 0x324101a9
// declared property getter: - (id)events;	// 0x32410455
- (id)extendedLogData;	// 0x324103d5
- (unsigned)extendedLogDataStringEncoding;	// 0x3240ff45
- (void)finalize;	// 0x32410395
@end

