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
- (id)initWithXml:(xmlDoc *)xml;	// 0x34f2d959
- (id)creator;	// 0x34f50a31
- (void)dealloc;	// 0x34f60489
- (id)description;	// 0x34f50a51
- (id)keywords;	// 0x34f50a41
- (void)readFromXml:(xmlDoc *)xml;	// 0x34f2da3d
- (id)title;	// 0x34f50a21
@end

