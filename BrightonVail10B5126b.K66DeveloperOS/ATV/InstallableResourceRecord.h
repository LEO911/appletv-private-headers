/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface InstallableResourceRecord : XXUnknownSuperclass {
	NSString *name;	// 4 = 0x4
	NSString *version;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSDate *lastAccessed;	// 16 = 0x10
	unsigned long long totalBytes;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *lastAccessed;	// G=0x199119; S=0x199129; @synthesize
@property(copy, nonatomic) NSString *name;	// G=0x1990ad; S=0x1990c1; @synthesize
@property(copy, nonatomic) NSString *path;	// G=0x1990f5; S=0x199109; @synthesize
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x199139; S=0x199151; @synthesize
@property(copy, nonatomic) NSString *version;	// G=0x1990d1; S=0x1990e5; @synthesize
+ (id)resourceRecordFromResourcePath:(id)resourcePath;	// 0x198df5
+ (id)resourceRecordFromResourcePath:(id)resourcePath withVersion:(id)version withLastAccessed:(id)lastAccessed;	// 0x198a9d
- (void)dealloc;	// 0x198ec5
// declared property getter: - (id)lastAccessed;	// 0x199119
// declared property getter: - (id)name;	// 0x1990ad
// declared property getter: - (id)path;	// 0x1990f5
- (void)remove;	// 0x199045
- (void)save;	// 0x198f51
// declared property setter: - (void)setLastAccessed:(id)accessed;	// 0x199129
// declared property setter: - (void)setName:(id)name;	// 0x1990c1
// declared property setter: - (void)setPath:(id)path;	// 0x199109
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x199151
// declared property setter: - (void)setVersion:(id)version;	// 0x1990e5
// declared property getter: - (unsigned long long)totalBytes;	// 0x199139
// declared property getter: - (id)version;	// 0x1990d1
@end

