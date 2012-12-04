/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVDiskSpaceManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x13f079
+ (id)singleton;	// 0x13f069
- (id)init;	// 0x13f089
- (id)_volumeSizeStringForSize:(unsigned long long)size;	// 0x13f2d9
- (void)dealloc;	// 0x13f0b5
- (unsigned long long)mediaCapacity;	// 0x13f169
- (id)mediaCapacityString;	// 0x13f1ed
- (unsigned long long)mediaFreeSpace;	// 0x13f221
- (id)mediaFreeSpaceString;	// 0x13f2a5
- (unsigned long long)primaryStreamedMediaRepositorySize;	// 0x13f0e1
- (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;	// 0x13f131
- (unsigned long long)shortContentStreamedMediaRepositorySize;	// 0x13f151
- (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;	// 0x13f159
@end
