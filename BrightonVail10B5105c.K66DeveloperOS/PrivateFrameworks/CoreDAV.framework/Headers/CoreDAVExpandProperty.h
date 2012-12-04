/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {
	NSSet *_propertiesToFind;	// 4 = 0x4
	NSString *_expandedName;	// 8 = 0x8
	NSString *_expandedNameSpace;	// 12 = 0xc
}
@property(retain) NSString *expandedName;	// G=0x36013fbd; S=0x36013fd1; @synthesize=_expandedName
@property(retain) NSString *expandedNameSpace;	// G=0x36013fe1; S=0x36013ff5; @synthesize=_expandedNameSpace
@property(retain) NSSet *propertiesToFind;	// G=0x36013f99; S=0x36013fad; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x36013f09
- (void)dealloc;	// 0x36013e91
// declared property getter: - (id)expandedName;	// 0x36013fbd
// declared property getter: - (id)expandedNameSpace;	// 0x36013fe1
// declared property getter: - (id)propertiesToFind;	// 0x36013f99
// declared property setter: - (void)setExpandedName:(id)name;	// 0x36013fd1
// declared property setter: - (void)setExpandedNameSpace:(id)space;	// 0x36013ff5
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x36013fad
@end
