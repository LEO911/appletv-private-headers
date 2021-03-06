/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAClientBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// @dynamic
@property(copy, nonatomic) NSArray *callbacks;	// G=0x353cfe09; S=0x353cfe85; 
@property(retain, nonatomic) SASyncAnchor *current;	// G=0x353cfeed; S=0x353cff41; 
@property(assign, nonatomic) int errorCode;	// G=0x353cff7d; S=0x353cffed; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)chunkDenied;	// 0x353cfcfd
+ (id)chunkDeniedWithDictionary:(id)dictionary context:(id)context;	// 0x353cfd41
+ (id)chunkDeniedWithErrorCode:(int)errorCode;	// 0x353cfd8d
- (id)initWithErrorCode:(int)errorCode;	// 0x353cfdd5
// declared property getter: - (id)callbacks;	// 0x353cfe09
// declared property getter: - (id)current;	// 0x353cfeed
- (id)encodedClassName;	// 0x353cfcf1
// declared property getter: - (int)errorCode;	// 0x353cff7d
- (id)groupIdentifier;	// 0x353cfce1
- (BOOL)requiresResponse;	// 0x353d0031
// declared property setter: - (void)setCallbacks:(id)callbacks;	// 0x353cfe85
// declared property setter: - (void)setCurrent:(id)current;	// 0x353cff41
// declared property setter: - (void)setErrorCode:(int)code;	// 0x353cffed
@end

