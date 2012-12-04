/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x34f1cf11
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x35091369
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x34f1cc99
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x35090f25
+ (id)readBlipFromBse:(id)bse;	// 0x34e71111
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x34e711cd
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x35091275
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x35091019
+ (EshBlip *)writeBlip:(id)blip;	// 0x35090aa9
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x35090e3d
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x3509147d
@end
