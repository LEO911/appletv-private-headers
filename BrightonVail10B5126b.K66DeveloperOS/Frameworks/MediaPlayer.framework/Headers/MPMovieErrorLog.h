/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying> {
	MPMovieErrorLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;	// G=0x31cba4e1; S=0x31cba4f5; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x31cba355; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x31cba315; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x31cba335; 
- (id)_initWithAVItemErrorLog:(id)avitemErrorLog;	// 0x31cba24d
// declared property getter: - (MPMovieErrorLogInternal)_internal;	// 0x31cba4e1
- (id)copyWithZone:(NSZone *)zone;	// 0x31cba305
- (void)dealloc;	// 0x31cba2b9
// declared property getter: - (id)events;	// 0x31cba355
// declared property getter: - (id)extendedLogData;	// 0x31cba315
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x31cba335
// declared property setter: - (void)set_internal:(MPMovieErrorLogInternal)internal;	// 0x31cba4f5
@end
