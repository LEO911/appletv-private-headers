/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataCommentView : BRControl {
	BOOL _disableDisplay;	// 84 = 0x54
	BRControl *_commentsView;	// 88 = 0x58
}
@property(retain, nonatomic) BRControl *commentsView;	// G=0x120d15; S=0x120b61; @synthesize=_commentsView
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x120d05; S=0x120ac5; @synthesize=_disableDisplay
- (id)init;	// 0x120a61
- (void).cxx_destruct;	// 0x120d25
- (BOOL)brEventAction:(id)action;	// 0x120cb5
// declared property getter: - (id)commentsView;	// 0x120d15
// declared property getter: - (BOOL)disableDisplay;	// 0x120d05
- (void)layoutSubcontrols;	// 0x120c01
// declared property setter: - (void)setCommentsView:(id)view;	// 0x120b61
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x120ac5
@end

