/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>
#import "ImageCapture-Structs.h"

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject {
	long long _fileSize;	// 4 = 0x4
	BOOL _hasThumbnail;	// 12 = 0xc
	BOOL _hasMetadata;	// 13 = 0xd
	BOOL _raw;	// 14 = 0xe
	int _fetchingThumbnailLock;	// 16 = 0x10
	BOOL _fetchingThumbnail;	// 20 = 0x14
	int _fetchingMetadataLock;	// 24 = 0x18
	BOOL _fetchingMetadata;	// 28 = 0x1c
	CGImageRef _originalThumbnail;	// 32 = 0x20
	CGImageRef _thumbnail;	// 36 = 0x24
	NSMutableDictionary *_metadata;	// 40 = 0x28
	NSMutableDictionary *_metadata_hidden;	// 44 = 0x2c
	unsigned _orientation;	// 48 = 0x30
	BOOL _hasOverriddenOrientation;	// 52 = 0x34
}
@property(assign) BOOL fetchingMetadata;	// G=0x31274651; S=0x31274685; 
@property(assign) BOOL fetchingThumbnail;	// G=0x312745e9; S=0x3127461d; 
@property(assign) long long fileSize;	// G=0x312746b9; S=0x312746ed; @synthesize=_fileSize
@property(assign) BOOL hasMetadata;	// G=0x31274751; S=0x31274769; @synthesize=_hasMetadata
@property(assign) BOOL hasOverriddenOrientation;	// G=0x31274865; S=0x3127487d; @synthesize=_hasOverriddenOrientation
@property(assign) BOOL hasThumbnail;	// G=0x31274721; S=0x31274739; @synthesize=_hasThumbnail
@property(retain) NSMutableDictionary *metadata;	// G=0x312747b1; S=0x312747c5; @synthesize=_metadata
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x312747f5; S=0x31274809; @synthesize=_metadata_hidden
@property(assign) unsigned orientation;	// G=0x31274839; S=0x3127484d; @synthesize=_orientation
@property(assign) CGImageRef originalThumbnail;	// G=0x312745ad; S=0x312745bd; @dynamic
@property(assign, getter=isRaw) BOOL raw;	// G=0x31274781; S=0x31274799; @synthesize=_raw
@property(assign) CGImageRef thumbnail;	// G=0x31274571; S=0x31274581; @dynamic
- (void)dealloc;	// 0x31274471
// declared property getter: - (BOOL)fetchingMetadata;	// 0x31274651
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x312745e9
// declared property getter: - (long long)fileSize;	// 0x312746b9
- (void)finalize;	// 0x312744f1
// declared property getter: - (BOOL)hasMetadata;	// 0x31274751
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x31274865
// declared property getter: - (BOOL)hasThumbnail;	// 0x31274721
// declared property getter: - (BOOL)isRaw;	// 0x31274781
// declared property getter: - (id)metadata;	// 0x312747b1
// declared property getter: - (id)metadata_hidden;	// 0x312747f5
// declared property getter: - (unsigned)orientation;	// 0x31274839
// declared property getter: - (CGImageRef)originalThumbnail;	// 0x312745ad
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x31274685
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x3127461d
// declared property setter: - (void)setFileSize:(long long)size;	// 0x312746ed
// declared property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x31274769
// declared property setter: - (void)setHasOverriddenOrientation:(BOOL)orientation;	// 0x3127487d
// declared property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x31274739
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x312747c5
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x31274809
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x3127484d
// declared property setter: - (void)setOriginalThumbnail:(CGImageRef)thumbnail;	// 0x312745bd
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x31274799
// declared property setter: - (void)setThumbnail:(CGImageRef)thumbnail;	// 0x31274581
// declared property getter: - (CGImageRef)thumbnail;	// 0x31274571
@end

