/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import </libobjc.A.h>

@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {
	NSSet *_propertiesToFind;	// 4 = 0x4
	NSString *_expandedName;	// 8 = 0x8
	NSString *_expandedNameSpace;	// 12 = 0xc
}
@property(retain) NSString *expandedName;	// G=0x304a7d1d; S=0x304a7d31; @synthesize=_expandedName
@property(retain) NSString *expandedNameSpace;	// G=0x304a7d41; S=0x304a7d55; @synthesize=_expandedNameSpace
@property(retain) NSSet *propertiesToFind;	// G=0x304a7cf9; S=0x304a7d0d; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x304a7c69
- (void)dealloc;	// 0x304a7bf1
// declared property getter: - (id)expandedName;	// 0x304a7d1d
// declared property getter: - (id)expandedNameSpace;	// 0x304a7d41
// declared property getter: - (id)propertiesToFind;	// 0x304a7cf9
// declared property setter: - (void)setExpandedName:(id)name;	// 0x304a7d31
// declared property setter: - (void)setExpandedNameSpace:(id)space;	// 0x304a7d55
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x304a7d0d
@end
