/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourceManager : NSObject {
@private
	NSMutableDictionary *mPackageMap;	// 4 = 0x4
}
+ (void)disposeInstance;	// 0x3463ac45
+ (id)instance;	// 0x3452b2d5
- (id)init;	// 0x3452b39d
- (id)dataForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x3463ab65
- (void)dealloc;	// 0x3463abfd
- (id)packageWithName:(id)name;	// 0x3452b491
- (xmlDoc *)xmlDocumentForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x3452b3f9
@end
