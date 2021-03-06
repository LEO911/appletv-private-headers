/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceView.h"

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString *dialogIdentifier;	// G=0x353bfb5d; S=0x353bfb79; 
@property(copy, nonatomic) NSString *text;	// G=0x353bfbc9; S=0x353bfbe5; 
+ (id)assistantUtteranceView;	// 0x353bfacd
+ (id)assistantUtteranceViewWithDictionary:(id)dictionary context:(id)context;	// 0x353bfb11
- (id)deferredKeys;	// 0x353bfc35
// declared property getter: - (id)dialogIdentifier;	// 0x353bfb5d
- (id)encodedClassName;	// 0x353bfac1
- (id)groupIdentifier;	// 0x353bfab1
// declared property setter: - (void)setDialogIdentifier:(id)identifier;	// 0x353bfb79
// declared property setter: - (void)setText:(id)text;	// 0x353bfbe5
// declared property getter: - (id)text;	// 0x353bfbc9
@end

