/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackage.h"

@class NSMutableDictionary, SFUZipArchive;

@interface OCPZipPackage : OCPPackage {
	SFUZipArchive *mArchive;	// 20 = 0x14
	NSMutableDictionary *mParts;	// 24 = 0x18
}
- (id)initWithArchive:(id)archive;	// 0x33a27291
- (id)initWithData:(id)data;	// 0x33aec8fd
- (id)initWithPath:(id)path;	// 0x33a24f65
- (void)dealloc;	// 0x33a5b6c9
- (id)partForLocation:(id)location;	// 0x33a2ec4d
- (void)resetPartForLocation:(id)location;	// 0x33a6188d
@end
