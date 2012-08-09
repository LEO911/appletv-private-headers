/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface _MFEmailSetEmail : NSObject {
	unsigned long _hash;	// 4 = 0x4
	NSString *_encodedAddress;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *address;	// G=0x373c136d; S=0x373c12a9; 
@property(readonly, assign, nonatomic) unsigned long hash;	// G=0x373c1271; 
- (id)initWithAddress:(id)address;	// 0x373c1159
// declared property getter: - (id)address;	// 0x373c136d
- (void)dealloc;	// 0x373c11c5
- (id)description;	// 0x373c1211
// declared property getter: - (unsigned long)hash;	// 0x373c1271
- (BOOL)isEqualToEmail:(id)email;	// 0x373c1281
// declared property setter: - (void)setAddress:(id)address;	// 0x373c12a9
@end
