/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDBlipContext.h"


@interface ESDMetafileBlipContext : ESDBlipContext {
	unsigned long mCb;	// 20 = 0x14
	unsigned long defaultHeaderSize;	// 24 = 0x18
}
@property(assign) unsigned long defaultHeaderSize;	// G=0x34c3095d; S=0x34aa0005; @synthesize
- (id)initWithOffset:(unsigned)offset byteCount:(unsigned)count uncompressed:(unsigned long)uncompressed stream:(SsrwOOStream *)stream streamID:(unsigned)anId;	// 0x34a9ffbd
// declared property getter: - (unsigned long)defaultHeaderSize;	// 0x34c3095d
- (bool)loadDelayedNode:(id)node;	// 0x34aa4ea1
// declared property setter: - (void)setDefaultHeaderSize:(unsigned long)size;	// 0x34aa0005
@end
