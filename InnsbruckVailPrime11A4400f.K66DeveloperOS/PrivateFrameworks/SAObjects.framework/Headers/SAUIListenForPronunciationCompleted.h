/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class SASPronunciationData, NSString;

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SASPronunciationData *pronunciationData;	// G=0x326ed765; S=0x326ed7a9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)listenForPronunciationCompleted;	// 0x326ed6d5
+ (id)listenForPronunciationCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326ed719
- (id)encodedClassName;	// 0x326ed6c9
- (id)groupIdentifier;	// 0x326ed6b9
// declared property getter: - (id)pronunciationData;	// 0x326ed765
// declared property setter: - (void)setPronunciationData:(id)data;	// 0x326ed7a9
@end
