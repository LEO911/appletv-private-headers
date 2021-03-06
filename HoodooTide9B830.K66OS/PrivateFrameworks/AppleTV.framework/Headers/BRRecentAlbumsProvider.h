/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSSet;
@protocol BRControlFactory;

@interface BRRecentAlbumsProvider : NSObject <BRProvider> {
@private
	long _maxCount;	// 4 = 0x4
	long _dataCount;	// 8 = 0x8
	id<BRControlFactory> _controlFactory;	// 12 = 0xc
	NSArray *_data;	// 16 = 0x10
	NSSet *_musicTypes;	// 20 = 0x14
	BOOL _invalidateOnValidityCheck;	// 24 = 0x18
}
@property(readonly, assign) long dataCount;	// G=0x32a5ba81; converted property
- (id)initWithControlFactory:(id)controlFactory maxCount:(long)count;	// 0x32a5b75d
- (void)_databaseMessagesSuppressed:(id)suppressed;	// 0x32a5be29
- (void)_databaseObjectWasAdded:(id)added;	// 0x32a5be3d
- (void)_databaseObjectWasModified:(id)modified;	// 0x32a5c029
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x32a5bf7d
- (void)_downloadConvertedToAsset:(id)asset;	// 0x32a5c181
- (void)_hostAvailabilityChanged:(id)changed;	// 0x32a5c0cd
- (long)_primeData;	// 0x32a5bb5d
- (void)_updateDataIfNeeded:(id)needed;	// 0x32a5c0f1
- (id)controlFactory;	// 0x32a5ba71
- (id)dataAtIndex:(long)index;	// 0x32a5bab9
// converted property getter: - (long)dataCount;	// 0x32a5ba81
- (void)dealloc;	// 0x32a5b9cd
- (id)hashForDataAtIndex:(long)index;	// 0x32a5bb09
@end

