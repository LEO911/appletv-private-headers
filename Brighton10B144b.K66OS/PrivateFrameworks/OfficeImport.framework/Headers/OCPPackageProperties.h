/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface OCPPackageProperties : NSObject {
	NSString *mCreator;	// 4 = 0x4
	NSString *mDescription;	// 8 = 0x8
	NSString *mKeywords;	// 12 = 0xc
	NSString *mTitle;	// 16 = 0x10
}
- (id)initWithXml:(xmlDoc *)xml;	// 0x348d4959
- (id)creator;	// 0x348f7a31
- (void)dealloc;	// 0x34907489
- (id)description;	// 0x348f7a51
- (id)keywords;	// 0x348f7a41
- (void)readFromXml:(xmlDoc *)xml;	// 0x348d4a3d
- (id)title;	// 0x348f7a21
@end

