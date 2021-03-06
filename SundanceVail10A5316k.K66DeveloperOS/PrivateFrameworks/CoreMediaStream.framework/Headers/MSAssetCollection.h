/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, MSAsset, NSData;

@interface MSAssetCollection : NSObject <NSCoding> {
@private
	NSString *_assetCollectionID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
	MSAsset *_masterAsset;	// 12 = 0xc
	NSArray *_derivedAssets;	// 16 = 0x10
	NSString *_fileName;	// 20 = 0x14
	BOOL _wasDeleted;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *assetCollectionID;	// G=0x33992e2d; S=0x33992e3d; @synthesize=_assetCollectionID
@property(retain, nonatomic) NSString *ctag;	// G=0x33992e65; S=0x33992e75; @synthesize=_ctag
@property(retain, nonatomic) NSArray *derivedAssets;	// G=0x33992869; S=0x3399287d; 
@property(retain, nonatomic) NSString *fileName;	// G=0x33992ed5; S=0x33992ee5; @synthesize=_fileName
@property(retain, nonatomic) MSAsset *masterAsset;	// G=0x33992e9d; S=0x33992ead; @synthesize=_masterAsset
@property(readonly, assign, nonatomic) NSData *masterAssetHash;	// G=0x33992821; 
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x33992f0d; S=0x33992f1d; @synthesize=_wasDeleted
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name;	// 0x33992679
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x339926e1
- (id)initWithCoder:(id)coder;	// 0x33992cc1
- (id)initWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x33992759
- (void).cxx_destruct;	// 0x33992f2d
// declared property getter: - (id)assetCollectionID;	// 0x33992e2d
// declared property getter: - (id)ctag;	// 0x33992e65
// declared property getter: - (id)derivedAssets;	// 0x33992869
- (id)description;	// 0x33992995
- (void)encodeWithCoder:(id)coder;	// 0x33992b9d
// declared property getter: - (id)fileName;	// 0x33992ed5
- (BOOL)isEqual:(id)equal;	// 0x33992add
// declared property getter: - (id)masterAsset;	// 0x33992e9d
// declared property getter: - (id)masterAssetHash;	// 0x33992821
// declared property setter: - (void)setAssetCollectionID:(id)anId;	// 0x33992e3d
// declared property setter: - (void)setCtag:(id)ctag;	// 0x33992e75
// declared property setter: - (void)setDerivedAssets:(id)assets;	// 0x3399287d
// declared property setter: - (void)setFileName:(id)name;	// 0x33992ee5
// declared property setter: - (void)setMasterAsset:(id)asset;	// 0x33992ead
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x33992f1d
// declared property getter: - (BOOL)wasDeleted;	// 0x33992f0d
@end

