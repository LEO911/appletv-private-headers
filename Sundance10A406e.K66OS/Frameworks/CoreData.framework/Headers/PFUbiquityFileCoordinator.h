/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSFileCoordinator.h> // Unknown library

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
	NSString *_localPeerID;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x33de355d; @synthesize=_localPeerID
+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)ubiquitousExternalDataReferenceLocation;	// 0x33de354d
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x33de3489
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x33de34a9
- (id)initWithFilePresenter:(id)filePresenter;	// 0x33de2f05
- (void)coordinateReadingItemAtLocation:(id)location options:(unsigned)options retryOnError:(BOOL)error error:(id *)error4 byAccessor:(id)accessor;	// 0x33de2fbd
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options retryOnError:(BOOL)error error:(id *)error4 byAccessor:(id)accessor;	// 0x33de3235
- (void)dealloc;	// 0x33de2f6d
// declared property getter: - (id)localPeerID;	// 0x33de355d
- (BOOL)shouldRetryForError:(id)error;	// 0x33de3375
@end

