/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQueryResultGroup : NSObject {
	id _private[9];	// 4 = 0x4
	unsigned _private2[1];	// 40 = 0x28
	void *_reserved;	// 44 = 0x2c
}
- (void)_addResult:(unsigned)result;	// 0x3255774d
- (id)_init:(id)init attributes:(id)attributes index:(unsigned)index value:(id)value;	// 0x32557645
- (void)_zapResultArray;	// 0x32557a49
- (id)attribute;	// 0x325578f9
- (void)dealloc;	// 0x325576d9
- (id)resultAtIndex:(unsigned)index;	// 0x3255797d
- (unsigned)resultCount;	// 0x3255795d
- (id)results;	// 0x32557a6d
- (id)subgroups;	// 0x3255793d
- (id)value;	// 0x32557929
@end

