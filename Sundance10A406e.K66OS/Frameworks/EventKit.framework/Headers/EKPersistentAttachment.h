/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSURL, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x313eccf5; S=0x313ecd11; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x313ece49; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x313ece65; S=0x313eceb5; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x313ecd65; S=0x313ecd81; 
@property(copy, nonatomic) NSString *fileName;	// G=0x313ecd2d; S=0x313ecd49; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x313ece11; S=0x313ece2d; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x313ecd9d; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x313ecdd9; S=0x313ecdf5; 
+ (id)relations;	// 0x313ecb39
// declared property getter: - (id)URL;	// 0x313eccf5
// declared property getter: - (id)UUID;	// 0x313ece49
// declared property getter: - (id)XProperties;	// 0x313ece65
- (id)copyWithZone:(NSZone *)zone;	// 0x313ecbc9
- (id)description;	// 0x313ecf0d
- (int)entityType;	// 0x313eccf1
// declared property getter: - (id)fileFormat;	// 0x313ecd65
// declared property getter: - (id)fileName;	// 0x313ecd2d
// declared property getter: - (id)fileSize;	// 0x313ece11
// declared property getter: - (BOOL)isBinary;	// 0x313ecd9d
// declared property getter: - (id)localURL;	// 0x313ecdd9
// declared property setter: - (void)setFileFormat:(id)format;	// 0x313ecd81
// declared property setter: - (void)setFileName:(id)name;	// 0x313ecd49
// declared property setter: - (void)setFileSize:(id)size;	// 0x313ece2d
- (void)setIsBinary:(BOOL)binary;	// 0x313ecdbd
// declared property setter: - (void)setLocalURL:(id)url;	// 0x313ecdf5
// declared property setter: - (void)setURL:(id)url;	// 0x313ecd11
// declared property setter: - (void)setXProperties:(id)properties;	// 0x313eceb5
@end

