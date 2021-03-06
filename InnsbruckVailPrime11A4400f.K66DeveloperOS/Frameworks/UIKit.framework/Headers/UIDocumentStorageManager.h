/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSMetadataQuery, _UIDocumentStorage, NSDictionary, NSURL, NSMutableSet;
@protocol OS_dispatch_queue;

@interface UIDocumentStorageManager : NSObject {
	NSObject<OS_dispatch_queue> *_ivarQueue;	// 4 = 0x4
	_UIDocumentStorage *_storage;	// 8 = 0x8
	NSMutableSet *_observers;	// 12 = 0xc
	NSMetadataQuery *_query;	// 16 = 0x10
	NSDictionary *_identifiersToURLMap;	// 20 = 0x14
	NSURL *_defaultURL;	// 24 = 0x18
}
@property(readonly, assign) NSURL *dataStorageURL;	// G=0x2f94781d; 
@property(readonly, assign) NSURL *documentStorageURL;	// G=0x2f947711; 
@property(readonly, assign) BOOL usesUbiquitousStorage;	// G=0x2f947625; 
+ (void)requestSharedManager:(id)manager;	// 0x2f946fb5
- (id)init;	// 0x2f947151
- (void)_appActivated:(id)activated;	// 0x2f947a35
- (void)_finishSetupWithDecision:(BOOL)decision completionHandler:(id)handler;	// 0x2f947d75
- (id)_identifierToURLMap;	// 0x2f947935
- (id)_initWithCompletionHandler:(id)completionHandler;	// 0x2f9471a1
- (void)_initialGatherFinished;	// 0x2f948a71
- (void)_loadUserICloudChoiceWithCompletionHandler:(id)completionHandler;	// 0x2f948079
- (id)_observeContentsOfDirectories:(id)directories sortedWithDescriptors:(id)descriptors updateHandler:(id)handler;	// 0x2f948dc9
- (id)_queryResults;	// 0x2f948b39
- (void)_queryUpdated;	// 0x2f948b29
- (void)_resetQuery;	// 0x2f948779
- (void)_setStorage:(id)storage;	// 0x2f9482e1
- (void)_storeUserICloudChoice:(BOOL)choice forIdentityToken:(id)identityToken;	// 0x2f94855d
- (void)_ubiquityIdentityTokenChanged;	// 0x2f947a21
- (void)_updateObservers;	// 0x2f948c55
- (id)_userICloudChoiceArray;	// 0x2f9483cd
- (id)_userICloudChoiceForIdentityToken:(id)identityToken;	// 0x2f94842d
// declared property getter: - (id)dataStorageURL;	// 0x2f94781d
// declared property getter: - (id)documentStorageURL;	// 0x2f947711
- (id)observeContentsOfDirectory:(id)directory sortedWithDescriptors:(id)descriptors updateHandler:(id)handler;	// 0x2f9498e9
- (id)observeContentsOfUbiquitousContainersWithIdentifiers:(id)identifiers sortedWithDescriptors:(id)descriptors updateHandler:(id)handler;	// 0x2f949935
- (void)removeObserver:(id)observer;	// 0x2f949e3d
- (void)runSetupProcessWithCompletionHandler:(id)completionHandler;	// 0x2f947a49
- (void)updateObserver:(id)observer withSortDescriptors:(id)sortDescriptors;	// 0x2f949ae1
// declared property getter: - (BOOL)usesUbiquitousStorage;	// 0x2f947625
- (void)willAddURL:(id)url;	// 0x2f9492a1
- (void)willMoveURL:(id)url toURL:(id)url2;	// 0x2f949669
- (void)willRemoveURL:(id)url;	// 0x2f949485
@end

