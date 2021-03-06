/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteUpdate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contentsToAppend;	// G=0x353c9779; S=0x353c9795; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x353c97e5; S=0x353c9861; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c969d; S=0x353c9719; 
+ (id)update;	// 0x353c960d
+ (id)updateWithDictionary:(id)dictionary context:(id)context;	// 0x353c9651
// declared property getter: - (id)contentsToAppend;	// 0x353c9779
- (id)encodedClassName;	// 0x353c9601
- (id)groupIdentifier;	// 0x353c95f1
// declared property getter: - (id)identifier;	// 0x353c97e5
- (BOOL)requiresResponse;	// 0x353c98c1
// declared property setter: - (void)setContentsToAppend:(id)append;	// 0x353c9795
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353c9861
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c9719
// declared property getter: - (id)targetAppId;	// 0x353c969d
@end

