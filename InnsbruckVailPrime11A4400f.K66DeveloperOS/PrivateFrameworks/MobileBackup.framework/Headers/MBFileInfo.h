/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import </libobjc.A.h>
#import "NSCoding.h"
#import "MobileBackup-Structs.h"

@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSCoding> {
	BOOL _isDirectory;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	int _priority;	// 12 = 0xc
	NSDictionary *_extendedAttributes;	// 16 = 0x10
}
@property(copy, nonatomic) NSDictionary *extendedAttributes;	// G=0x31490319; S=0x3149032d; @synthesize=_extendedAttributes
@property(assign, nonatomic) BOOL isDirectory;	// G=0x314902d9; S=0x314902e9; @synthesize=_isDirectory
@property(copy, nonatomic) NSString *path;	// G=0x314902b5; S=0x314902c9; @synthesize=_path
@property(assign, nonatomic) int priority;	// G=0x314902f9; S=0x31490309; @synthesize=_priority
+ (id)fileInfoWithPath:(id)path extendedAttributes:(id)attributes;	// 0x3148ff55
- (id)initWithCoder:(id)coder;	// 0x31490019
- (id)initWithPath:(id)path extendedAttributes:(id)attributes;	// 0x3148ffa1
- (id)copyWithZone:(NSZone *)zone;	// 0x31490221
- (void)dealloc;	// 0x314901bd
- (void)encodeWithCoder:(id)coder;	// 0x31490111
// declared property getter: - (id)extendedAttributes;	// 0x31490319
// declared property getter: - (BOOL)isDirectory;	// 0x314902d9
// declared property getter: - (id)path;	// 0x314902b5
// declared property getter: - (int)priority;	// 0x314902f9
// declared property setter: - (void)setExtendedAttributes:(id)attributes;	// 0x3149032d
// declared property setter: - (void)setIsDirectory:(BOOL)directory;	// 0x314902e9
// declared property setter: - (void)setPath:(id)path;	// 0x314902c9
// declared property setter: - (void)setPriority:(int)priority;	// 0x31490309
@end
