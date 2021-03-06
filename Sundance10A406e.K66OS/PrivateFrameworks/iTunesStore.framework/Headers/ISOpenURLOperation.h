/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x36947431; 
- (id)init;	// 0x369472d9
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x369472ed
- (id)_newSortedTargetsArray;	// 0x369477d5
- (BOOL)_openURL:(id)url;	// 0x369478a9
- (void)dealloc;	// 0x369473e5
// declared property getter: - (id)openURLRequest;	// 0x36947431
- (void)run;	// 0x36947469
@end

