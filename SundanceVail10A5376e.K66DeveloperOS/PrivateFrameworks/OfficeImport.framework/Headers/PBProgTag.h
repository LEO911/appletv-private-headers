/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBProgTag : NSObject {
}
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x36f13c01
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x36f13bc1
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x37175471
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x3717541d
+ (void)readBulletImagesFromContainerParent:(id)containerParent state:(id)state;	// 0x3705256d
+ (void)readBulletImagesFromDocumentList:(id)documentList state:(id)state;	// 0x36f13d6d
+ (id)readBulletStyleFromClientData:(id)clientData;	// 0x36f64899
+ (void)readBulletStylesFromDocumentList:(id)documentList state:(id)state;	// 0x36f13ae9
+ (void)readBulletStylesFromMainMaster:(id)mainMaster state:(id)state;	// 0x36f19f1d
+ (void)readClientData:(id)data state:(id)state;	// 0x36f64845
+ (void)readDocumentList:(id)list state:(id)state;	// 0x36f13a85
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)documentList state:(id)state;	// 0x36f13e8d
+ (id)readMacCharStyleFromClientData:(id)clientData;	// 0x36f648dd
+ (void)readMacCharStylesFromDocumentList:(id)documentList state:(id)state;	// 0x36f13db5
+ (const PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)progTagName;	// 0x371753e1
@end
