/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDStyle.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDNamedStyle : EDStyle {
@private
	NSString *mName;	// 48 = 0x30
}
@property(retain) id name;	// G=0x32c8885d; S=0x32c01a5d; converted property
- (id)copyWithZone:(NSZone *)zone;	// 0x32cf37e1
- (void)dealloc;	// 0x32b13d6d
// converted property getter: - (id)name;	// 0x32c8885d
// converted property setter: - (void)setName:(id)name;	// 0x32c01a5d
@end
