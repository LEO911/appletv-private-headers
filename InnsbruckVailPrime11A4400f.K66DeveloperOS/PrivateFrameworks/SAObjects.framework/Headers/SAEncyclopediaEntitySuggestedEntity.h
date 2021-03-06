/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;
@protocol SAClientBoundCommand;

@interface SAEncyclopediaEntitySuggestedEntity : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) id<SAClientBoundCommand> command;	// G=0x326fa1c9; S=0x326fa20d; 
@property(copy, nonatomic) NSString *name;	// G=0x326fa249; S=0x326fa265; 
+ (id)suggestedEntity;	// 0x326fa139
+ (id)suggestedEntityWithDictionary:(id)dictionary context:(id)context;	// 0x326fa17d
// declared property getter: - (id)command;	// 0x326fa1c9
- (id)encodedClassName;	// 0x326fa12d
- (id)groupIdentifier;	// 0x326fa11d
// declared property getter: - (id)name;	// 0x326fa249
// declared property setter: - (void)setCommand:(id)command;	// 0x326fa20d
// declared property setter: - (void)setName:(id)name;	// 0x326fa265
@end

