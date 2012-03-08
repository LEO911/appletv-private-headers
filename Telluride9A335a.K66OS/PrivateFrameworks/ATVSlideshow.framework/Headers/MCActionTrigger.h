/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionTrigger : MCAction {
	NSString *mActionKey;	// 16 = 0x10
}
@property(copy) NSString *actionKey;	// G=0x31b921b9; S=0x31b921cd; @synthesize=mActionKey
+ (id)actionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withActionKey:(id)actionKey;	// 0x31b91fc5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b9203d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31b92161
// declared property getter: - (id)actionKey;	// 0x31b921b9
- (void)demolish;	// 0x31b920ad
- (id)imprint;	// 0x31b92101
// declared property setter: - (void)setActionKey:(id)key;	// 0x31b921cd
@end
