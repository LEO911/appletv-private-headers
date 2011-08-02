/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"


__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection {
@private
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0x32bfd8f5
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x32bfdd05
- (unsigned)addObject:(id)object;	// 0x32bfde89
- (unsigned)addOrEquivalentObject:(id)object;	// 0x32c00459
- (bool)isOverwritingKeyOK;	// 0x32cf117d
- (void)setupDefaults;	// 0x32bfd941
@end
