/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MMCSAsset.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSData, NSURL, NSError, NSDate;

@interface MSAsset : NSObject <MMCSAsset, NSCoding, NSCopying> {
	NSData *_masterAssetHash;	// 4 = 0x4
	NSDictionary *_metadata;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	NSURL *_MMCSURL;	// 16 = 0x10
	NSData *_fileData;	// 20 = 0x14
	NSError *_error;	// 24 = 0x18
	NSString *_type;	// 28 = 0x1c
	NSData *_fileHash;	// 32 = 0x20
	unsigned long long _protocolFileSize;	// 36 = 0x24
	NSString *_MMCSAccessHeader;	// 44 = 0x2c
	NSDate *_MMCSAccessHeaderTimeStamp;	// 48 = 0x30
	NSString *_MMCSReceipt;	// 52 = 0x34
	NSString *_GUID;	// 56 = 0x38
	NSString *_assetCollectionGUID;	// 60 = 0x3c
	NSDate *_batchCreationDate;	// 64 = 0x40
	NSDate *_photoCreationDate;	// 68 = 0x44
	id<NSCoding> _userInfo;	// 72 = 0x48
}
@property(retain, nonatomic) NSString *GUID;	// G=0x30744c4d; S=0x30744c5d; @synthesize=_GUID
@property(retain, nonatomic) NSString *MMCSAccessHeader;	// G=0x30744bcd; S=0x30743d45; @synthesize=_MMCSAccessHeader
@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;	// G=0x30744bdd; S=0x30744bed; @synthesize=_MMCSAccessHeaderTimeStamp
@property(retain, nonatomic) NSError *MMCSError;	// G=0x30743331; S=0x30743341; 
@property(retain, nonatomic) NSData *MMCSHash;	// G=0x30744b69; S=0x30744b79; @synthesize=_fileHash
@property(assign, nonatomic) unsigned long MMCSItemFlags;	// G=0x30743b95; S=0x30743b99; 
@property(assign, nonatomic) unsigned long long MMCSItemID;	// G=0x30743bbd; S=0x30743c05; 
@property(assign, nonatomic) unsigned long long MMCSItemSize;	// G=0x30744ba1; S=0x30744bb9; @synthesize=_protocolFileSize
@property(retain, nonatomic) NSString *MMCSReceipt;	// G=0x30744c15; S=0x30744c25; @synthesize=_MMCSReceipt
@property(retain, nonatomic) NSURL *MMCSURL;	// G=0x30744a89; S=0x30744a99; @synthesize=_MMCSURL
@property(retain, nonatomic) NSString *MMCSUTI;	// G=0x30744b31; S=0x30744b41; @synthesize=_type
@property(retain, nonatomic) NSString *assetCollectionGUID;	// G=0x30744c85; S=0x30744c95; @synthesize=_assetCollectionGUID
@property(retain, nonatomic) NSDate *batchCreationDate;	// G=0x30744cbd; S=0x30744ccd; @synthesize=_batchCreationDate
@property(retain, nonatomic) NSError *error;	// G=0x30744af9; S=0x30744b09; @synthesize=_error
@property(retain, nonatomic) NSData *fileData;	// G=0x30744ac1; S=0x30744ad1; @synthesize=_fileData
@property(retain, nonatomic) NSData *fileHash;	// G=0x307432d1; S=0x307432e1; 
@property(retain, nonatomic) NSData *masterAssetHash;	// G=0x307449e1; S=0x307449f1; @synthesize=_masterAssetHash
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x30744a19; S=0x30744a29; @synthesize=_metadata
@property(retain, nonatomic) NSString *path;	// G=0x30744a51; S=0x30744a61; @synthesize=_path
@property(retain, nonatomic) NSDate *photoCreationDate;	// G=0x30744cf5; S=0x30744d05; @synthesize=_photoCreationDate
@property(assign, nonatomic) unsigned long long protocolFileSize;	// G=0x30743311; S=0x30743321; 
@property(retain, nonatomic) NSString *type;	// G=0x307432f1; S=0x30743301; 
@property(retain, nonatomic) id<NSCoding> userInfo;	// G=0x30744d2d; S=0x30744d3d; @synthesize=_userInfo
+ (id)MSASPAssetFromProtocolDictionary:(id)protocolDictionary;	// 0x307db795
+ (id)asset;	// 0x30743351
+ (id)assetWithAsset:(id)asset;	// 0x307433e5
- (id)init;	// 0x307437bd
- (id)initWithCoder:(id)coder;	// 0x307444dd
- (id)initWithGUID:(id)guid;	// 0x3074337d
- (void).cxx_destruct;	// 0x30744d51
// declared property getter: - (id)GUID;	// 0x30744c4d
// declared property getter: - (id)MMCSAccessHeader;	// 0x30744bcd
// declared property getter: - (id)MMCSAccessHeaderTimeStamp;	// 0x30744bdd
// declared property getter: - (id)MMCSError;	// 0x30743331
// declared property getter: - (id)MMCSHash;	// 0x30744b69
// declared property getter: - (unsigned long)MMCSItemFlags;	// 0x30743b95
// declared property getter: - (unsigned long long)MMCSItemID;	// 0x30743bbd
// declared property getter: - (unsigned long long)MMCSItemSize;	// 0x30744ba1
- (int)MMCSOpenNewFileDescriptor;	// 0x30743cdd
// declared property getter: - (id)MMCSReceipt;	// 0x30744c15
// declared property getter: - (id)MMCSURL;	// 0x30744a89
// declared property getter: - (id)MMCSUTI;	// 0x30744b31
- (id)MSASPProtocolDictionary;	// 0x307db40d
- (unsigned long long)_fileSize;	// 0x30743b3d
- (unsigned long long)_fileSizeOnDisk;	// 0x30743ded
- (void)addMetadataValue:(id)value forKey:(id)key;	// 0x30744935
// declared property getter: - (id)assetCollectionGUID;	// 0x30744c85
// declared property getter: - (id)batchCreationDate;	// 0x30744cbd
- (id)copyWithZone:(NSZone *)zone;	// 0x30744985
- (id)description;	// 0x30743815
- (void)encodeWithCoder:(id)coder;	// 0x307441a9
// declared property getter: - (id)error;	// 0x30744af9
// declared property getter: - (id)fileData;	// 0x30744ac1
// declared property getter: - (id)fileHash;	// 0x307432d1
- (unsigned)hash;	// 0x30744159
- (BOOL)isEqual:(id)equal;	// 0x30743f65
// declared property getter: - (id)masterAssetHash;	// 0x307449e1
// declared property getter: - (id)metadata;	// 0x30744a19
- (id)metadataValueForKey:(id)key;	// 0x30744965
// declared property getter: - (id)path;	// 0x30744a51
// declared property getter: - (id)photoCreationDate;	// 0x30744cf5
// declared property getter: - (unsigned long long)protocolFileSize;	// 0x30743311
// declared property setter: - (void)setAssetCollectionGUID:(id)guid;	// 0x30744c95
// declared property setter: - (void)setBatchCreationDate:(id)date;	// 0x30744ccd
// declared property setter: - (void)setError:(id)error;	// 0x30744b09
// declared property setter: - (void)setFileData:(id)data;	// 0x30744ad1
// declared property setter: - (void)setFileHash:(id)hash;	// 0x307432e1
// declared property setter: - (void)setGUID:(id)guid;	// 0x30744c5d
// declared property setter: - (void)setMMCSAccessHeader:(id)header;	// 0x30743d45
- (void)setMMCSAccessHeader:(id)header andTimeStamp:(id)stamp;	// 0x30743da9
// declared property setter: - (void)setMMCSAccessHeaderTimeStamp:(id)stamp;	// 0x30744bed
// declared property setter: - (void)setMMCSError:(id)error;	// 0x30743341
// declared property setter: - (void)setMMCSHash:(id)hash;	// 0x30744b79
// declared property setter: - (void)setMMCSItemFlags:(unsigned long)flags;	// 0x30743b99
// declared property setter: - (void)setMMCSItemID:(unsigned long long)anId;	// 0x30743c05
// declared property setter: - (void)setMMCSItemSize:(unsigned long long)size;	// 0x30744bb9
// declared property setter: - (void)setMMCSReceipt:(id)receipt;	// 0x30744c25
// declared property setter: - (void)setMMCSURL:(id)mmcsurl;	// 0x30744a99
// declared property setter: - (void)setMMCSUTI:(id)mmcsuti;	// 0x30744b41
// declared property setter: - (void)setMasterAssetHash:(id)hash;	// 0x307449f1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30744a29
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x30744865
// declared property setter: - (void)setPath:(id)path;	// 0x30744a61
// declared property setter: - (void)setPhotoCreationDate:(id)date;	// 0x30744d05
// declared property setter: - (void)setProtocolFileSize:(unsigned long long)size;	// 0x30743321
// declared property setter: - (void)setType:(id)type;	// 0x30743301
// declared property setter: - (void)setUserInfo:(id)info;	// 0x30744d3d
// declared property getter: - (id)type;	// 0x307432f1
// declared property getter: - (id)userInfo;	// 0x30744d2d
@end

