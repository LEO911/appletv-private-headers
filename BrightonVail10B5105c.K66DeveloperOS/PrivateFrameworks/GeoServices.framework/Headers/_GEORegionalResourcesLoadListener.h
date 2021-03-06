/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesLoadListener : NSObject {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_satisfiedList;	// 20 = 0x14
	CFRunLoopRef _runLoop;	// 24 = 0x18
}
@property(copy, nonatomic) id error;	// G=0x3396b9bd; S=0x33905e41; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x33907311; S=0x33905e2d; @synthesize=_finished
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x33907081; S=0x33905e51; @synthesize=_originalList
@property(copy, nonatomic) id progress;	// G=0x339070fd; S=0x33905e19; @synthesize=_progress
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x33907111; @synthesize=_runLoop
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x3396b9d1; S=0x33905e61; @synthesize=_satisfiedList
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x33905dc9
- (void)addSatisfiedKey:(const GEOTileKey *)key;	// 0x33907091
- (void)dealloc;	// 0x3390738d
// declared property getter: - (id)error;	// 0x3396b9bd
// declared property getter: - (id)finished;	// 0x33907311
// declared property getter: - (id)originalList;	// 0x33907081
// declared property getter: - (id)progress;	// 0x339070fd
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x33907111
// declared property getter: - (id)satisfiedList;	// 0x3396b9d1
// declared property setter: - (void)setError:(id)error;	// 0x33905e41
// declared property setter: - (void)setFinished:(id)finished;	// 0x33905e2d
// declared property setter: - (void)setOriginalList:(id)list;	// 0x33905e51
// declared property setter: - (void)setProgress:(id)progress;	// 0x33905e19
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x33905e61
@end

