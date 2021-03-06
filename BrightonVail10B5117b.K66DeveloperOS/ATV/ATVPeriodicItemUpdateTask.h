/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class BRMerchant, ATVURLDocument, NSOperationQueue, NSURL;
@protocol ATVUpdatable;

__attribute__((visibility("hidden")))
@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	ATVURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x186411; S=0x186425; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x185fc5; S=0x185fb5; 
@property(retain) NSURL *url;	// G=0x1863ed; S=0x186401; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x185e95
- (void)_urlDocReady:(id)ready;	// 0x18616d
- (void)dealloc;	// 0x185f11
// declared property getter: - (id)merchant;	// 0x186411
- (BOOL)perform:(id)perform;	// 0x185fd5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x186425
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x185fb5
// declared property setter: - (void)setUrl:(id)url;	// 0x186401
// declared property getter: - (id)updatableItem;	// 0x185fc5
// declared property getter: - (id)url;	// 0x1863ed
@end

