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
@property(copy, nonatomic) NSURL *URL;	// G=0x3190cb25; S=0x3190cb41; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x3190cc79; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x3190cc95; S=0x3190cce5; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x3190cb95; S=0x3190cbb1; 
@property(copy, nonatomic) NSString *fileName;	// G=0x3190cb5d; S=0x3190cb79; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x3190cc41; S=0x3190cc5d; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x3190cbcd; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x3190cc09; S=0x3190cc25; 
+ (id)relations;	// 0x3190c969
// declared property getter: - (id)URL;	// 0x3190cb25
// declared property getter: - (id)UUID;	// 0x3190cc79
// declared property getter: - (id)XProperties;	// 0x3190cc95
- (id)copyWithZone:(NSZone *)zone;	// 0x3190c9f9
- (id)description;	// 0x3190cd3d
- (int)entityType;	// 0x3190cb21
// declared property getter: - (id)fileFormat;	// 0x3190cb95
// declared property getter: - (id)fileName;	// 0x3190cb5d
// declared property getter: - (id)fileSize;	// 0x3190cc41
// declared property getter: - (BOOL)isBinary;	// 0x3190cbcd
// declared property getter: - (id)localURL;	// 0x3190cc09
// declared property setter: - (void)setFileFormat:(id)format;	// 0x3190cbb1
// declared property setter: - (void)setFileName:(id)name;	// 0x3190cb79
// declared property setter: - (void)setFileSize:(id)size;	// 0x3190cc5d
- (void)setIsBinary:(BOOL)binary;	// 0x3190cbed
// declared property setter: - (void)setLocalURL:(id)url;	// 0x3190cc25
// declared property setter: - (void)setURL:(id)url;	// 0x3190cb41
// declared property setter: - (void)setXProperties:(id)properties;	// 0x3190cce5
@end

