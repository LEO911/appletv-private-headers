/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface _VMUDWARFAbbrevDecl : NSObject {
	unsigned long long _tag;	// 4 = 0x4
	BOOL _hasChildren;	// 12 = 0xc
	NSArray *_attributes;	// 16 = 0x10
}
+ (id)abbrevDeclWithTag:(unsigned long long)tag withChildren:(BOOL)children withAttributes:(id)attributes;	// 0x301182e9
- (void)dealloc;	// 0x30118379
- (id)description;	// 0x301181e9
@end
