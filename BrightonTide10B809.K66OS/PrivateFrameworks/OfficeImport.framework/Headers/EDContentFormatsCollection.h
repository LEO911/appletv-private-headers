/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"


@interface EDContentFormatsCollection : EDKeyedCollection {
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0x34893ea1
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x3489437d
- (unsigned)addObject:(id)object;	// 0x34894631
- (unsigned)addOrEquivalentObject:(id)object;	// 0x348991bd
- (bool)isOverwritingKeyOK;	// 0x34a2a415
- (void)setupDefaults;	// 0x34893f59
@end

