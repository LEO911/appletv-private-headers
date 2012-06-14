/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSFilePresenter.h"

@class NSOperationQueue, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
@private
	NSString *_ubiquityRootPath;	// 4 = 0x4
	NSURL *_presentedItemURL;	// 8 = 0x8
}
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x32382959; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x3238289d; 
@property(readonly, assign) NSString *ubiquityRootPath;	// G=0x323828bd; @synthesize=_ubiquityRootPath
+ (void)initialize;	// 0x32382975
+ (id)sharedPrivateOperationQueue;	// 0x3238288d
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x323828cd
- (void)dealloc;	// 0x323829d9
// declared property getter: - (id)presentedItemOperationQueue;	// 0x32382959
// declared property getter: - (id)presentedItemURL;	// 0x3238289d
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x323828ad
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x323828b5
// declared property getter: - (id)ubiquityRootPath;	// 0x323828bd
@end
