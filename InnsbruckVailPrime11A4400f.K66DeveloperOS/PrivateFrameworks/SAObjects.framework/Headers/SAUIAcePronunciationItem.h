/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x32704c61; S=0x32704cb9; 
@property(copy, nonatomic) NSString *title;	// G=0x32704d21; S=0x32704d3d; 
@property(copy, nonatomic) NSString *tts;	// G=0x32704d8d; S=0x32704da9; 
+ (id)acePronunciationItem;	// 0x32704bd1
+ (id)acePronunciationItemWithDictionary:(id)dictionary context:(id)context;	// 0x32704c15
// declared property getter: - (id)commands;	// 0x32704c61
- (id)encodedClassName;	// 0x32704bc5
- (id)groupIdentifier;	// 0x32704bb5
// declared property setter: - (void)setCommands:(id)commands;	// 0x32704cb9
// declared property setter: - (void)setTitle:(id)title;	// 0x32704d3d
// declared property setter: - (void)setTts:(id)tts;	// 0x32704da9
// declared property getter: - (id)title;	// 0x32704d21
// declared property getter: - (id)tts;	// 0x32704d8d
@end
