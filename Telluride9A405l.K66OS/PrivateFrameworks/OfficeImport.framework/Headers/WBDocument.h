/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBDocument : NSObject {
}
+ (void)addImageBullets:(id)bullets;	// 0x30e4eb6d
+ (id)imageBulletParagraph:(id)paragraph;	// 0x30e4e9d1
+ (id)readFrom:(id)from;	// 0x30cfcd69
+ (void)readNoteSeparatorFrom:(id)from type:(int)type separator:(id)separator;	// 0x30d17231
+ (void)readProperties:(id)properties document:(id)document;	// 0x30d04d75
+ (void)readSectionsFrom:(id)from document:(id)document;	// 0x30d10b89
+ (void)readTextBoxesFrom:(id)from;	// 0x30d17191
+ (void)setTimeStamp:(WrdDocumentProperties *)stamp;	// 0x30e4ea41
+ (unsigned)setupZIndices:(id)indices document:(id)document escherType:(int)type;	// 0x30d1b6f1
- (id)init;	// 0x30e4e9a5
- (id)applicationName;	// 0x30e4e999
@end
