/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSPurchaseRequestDelegate.h"

@class NSMutableDictionary, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStorePurchaseRequest : NSObject <SSPurchaseRequestDelegate> {
	NSArray *_mediaEntities;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestsQueue;	// 8 = 0x8
	NSMutableDictionary *_requestsByMediaEntityPID;	// 12 = 0xc
	NSMutableArray *_waitingRequests;	// 16 = 0x10
	NSMutableArray *_servicedRequests;	// 20 = 0x14
	int _purchaseReason;	// 24 = 0x18
	BOOL _purchaseReasonIdenticalForAll;	// 28 = 0x1c
@private
	NSArray *_mediaItemsClosure;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *mediaEntities;	// G=0x348de5fd; @synthesize=_mediaEntities
@property(retain, nonatomic) NSArray *mediaItemsClosure;	// G=0x348de60d; S=0x348de61d; @synthesize=_mediaItemsClosure
@property(readonly, assign, nonatomic) int purchaseReason;	// G=0x348de62d; @synthesize=_purchaseReason
+ (id)itemsBeingPurchasedForEntities:(id)entities;	// 0x348dcdb1
- (id)initWithMediaEntities:(id)mediaEntities purchaseReason:(int)reason;	// 0x348dc9fd
- (id)_purchaseForMediaEntity:(id)mediaEntity;	// 0x348de305
- (BOOL)_shouldCancelRemainingRequestForError:(id)error;	// 0x348dcfb9
- (void)dealloc;	// 0x348dcce1
// declared property getter: - (id)mediaEntities;	// 0x348de5fd
// declared property getter: - (id)mediaItemsClosure;	// 0x348de60d
- (void)prioritizeMediaEntity:(id)entity forPlayback:(BOOL)playback purchaseCompletionHandler:(id)handler;	// 0x348ddf71
// declared property getter: - (int)purchaseReason;	// 0x348de62d
- (int)purchaseReasonForMediaEntityPersistentID:(id)mediaEntityPersistentID;	// 0x348de361
- (void)runOnQueue:(id)queue withCompletionHandler:(id)completionHandler;	// 0x348dd001
- (void)setDownloadHandler:(id)handler forMediaEntity:(id)mediaEntity;	// 0x348de499
// declared property setter: - (void)setMediaItemsClosure:(id)closure;	// 0x348de61d
@end
