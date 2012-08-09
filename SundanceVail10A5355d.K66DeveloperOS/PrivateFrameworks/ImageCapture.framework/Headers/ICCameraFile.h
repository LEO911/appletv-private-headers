/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraItem.h"
#import "ImageCapture-Structs.h"

@class NSMutableDictionary;

@interface ICCameraFile : ICCameraItem {
	void *_fileProperties;	// 8 = 0x8
}
@property(assign) BOOL fetchingMetadata;	// G=0x34b0d345; S=0x34b0d369; 
@property(assign) BOOL fetchingThumbnail;	// G=0x34b0d301; S=0x34b0d325; 
@property(assign) long long fileSize;	// G=0x34b0d191; S=0x34b0d1b1; 
@property(assign) BOOL hasMetadata;	// G=0x34b0d2bd; S=0x34b0d2e1; converted property
@property(readonly, assign) BOOL hasOverriddenOrientation;	// G=0x34b0d255; 
@property(assign) BOOL hasThumbnail;	// G=0x34b0d279; S=0x34b0d29d; converted property
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x34b0df4d; S=0x34b0df6d; 
@property(assign) unsigned orientation;	// G=0x34b0d215; S=0x34b0d235; 
@property(assign, getter=isRaw) BOOL raw;	// G=0x34b0d1d1; S=0x34b0d1f5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x34b0cef5
- (void)dealloc;	// 0x34b0cfc1
- (id)description;	// 0x34b0d061
// declared property getter: - (BOOL)fetchingMetadata;	// 0x34b0d345
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x34b0d301
// declared property getter: - (long long)fileSize;	// 0x34b0d191
- (void)finalize;	// 0x34b0d011
- (void)flushMetadataCache;	// 0x34b0e2cd
- (void)flushThumbnailCache;	// 0x34b0e25d
- (void)handleCommandCompletionNotification:(id)notification;	// 0x34b0d4d1
// converted property getter: - (BOOL)hasMetadata;	// 0x34b0d2bd
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x34b0d255
// converted property getter: - (BOOL)hasThumbnail;	// 0x34b0d279
// declared property getter: - (BOOL)isRaw;	// 0x34b0d1d1
- (id)metadata;	// 0x34b0df2d
// declared property getter: - (id)metadata_hidden;	// 0x34b0df4d
// declared property getter: - (unsigned)orientation;	// 0x34b0d215
- (void)overrideOrientation:(unsigned)orientation;	// 0x34b0d389
- (void)requestMetadata;	// 0x34b0e0f5
- (void)requestThumbnail;	// 0x34b0df8d
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x34b0d369
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x34b0d325
// declared property setter: - (void)setFileSize:(long long)size;	// 0x34b0d1b1
// converted property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x34b0d2e1
// converted property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x34b0d29d
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x34b0df6d
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x34b0d235
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x34b0d1f5
- (CGImageRef)thumbnail;	// 0x34b0df0d
@end
