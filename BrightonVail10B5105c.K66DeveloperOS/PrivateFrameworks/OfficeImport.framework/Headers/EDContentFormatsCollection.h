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
- (id)init;	// 0x37936ea1
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x3793737d
- (unsigned)addObject:(id)object;	// 0x37937631
- (unsigned)addOrEquivalentObject:(id)object;	// 0x3793c1bd
- (bool)isOverwritingKeyOK;	// 0x37acd415
- (void)setupDefaults;	// 0x37936f59
@end

