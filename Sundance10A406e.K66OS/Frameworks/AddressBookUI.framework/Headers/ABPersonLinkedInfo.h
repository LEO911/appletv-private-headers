/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABPersonLinkedInfo : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	void *_person;	// 12 = 0xc
	BOOL _unified;	// 16 = 0x10
}
@property(retain) NSString *name;	// G=0x31458b5d; S=0x31430801; @synthesize=_name
@property(assign) void *person;	// G=0x31430e49; S=0x31430811; @synthesize=_person
@property(retain) NSString *type;	// G=0x31458b21; S=0x314307f1; @synthesize=_type
@property(assign, getter=isUnified) BOOL unified;	// G=0x31430e31; S=0x31430829; @synthesize=_unified
- (void)dealloc;	// 0x31451ce9
- (id)description;	// 0x3149d539
- (unsigned)hash;	// 0x3149d4d1
- (BOOL)isEqual:(id)equal;	// 0x3149d3cd
// declared property getter: - (BOOL)isUnified;	// 0x31430e31
// declared property getter: - (id)name;	// 0x31458b5d
// declared property getter: - (void *)person;	// 0x31430e49
// declared property setter: - (void)setName:(id)name;	// 0x31430801
// declared property setter: - (void)setPerson:(void *)person;	// 0x31430811
// declared property setter: - (void)setType:(id)type;	// 0x314307f1
// declared property setter: - (void)setUnified:(BOOL)unified;	// 0x31430829
// declared property getter: - (id)type;	// 0x31458b21
@end
