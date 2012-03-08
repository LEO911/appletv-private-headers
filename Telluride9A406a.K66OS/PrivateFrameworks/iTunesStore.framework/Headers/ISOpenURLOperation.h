/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
@private
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x341e5475; 
- (id)init;	// 0x341e531d
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x341e5331
- (id)_newSortedTargetsArray;	// 0x341e57d1
- (BOOL)_openURL:(id)url;	// 0x341e5899
- (void)dealloc;	// 0x341e5429
// declared property getter: - (id)openURLRequest;	// 0x341e5475
- (void)run;	// 0x341e54ad
@end
