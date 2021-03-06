/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRBoxControl : BRControl <BRContainerViewCell> {
	BRControl *_content;	// 84 = 0x54
	BRHorizontalDividerControl *_divider;	// 88 = 0x58
	float _dividerMargin;	// 92 = 0x5c
	XXStruct_qlg9jA _dividerSuggestedHeight;	// 96 = 0x60
	XXStruct_qlg9jA _space;	// 100 = 0x64
	id _loadCompletionBlock;	// 104 = 0x68
	XXStruct_40SSZC _contentSize;	// 108 = 0x6c
}
@property(retain) BRControl *content;	// G=0x347939; S=0x347949; converted property
@property(assign, nonatomic) XXStruct_40SSZC contentSize;	// G=0x347eb5; S=0x347ecd; @synthesize=_contentSize
@property(retain) BRHorizontalDividerControl *divider;	// G=0x3477c9; S=0x347821; converted property
@property(assign) float dividerMargin;	// G=0x347929; S=0x3478cd; converted property
@property(assign) XXStruct_qlg9jA dividerSuggestedHeight;	// G=0x3478b1; S=0x3478a1; converted property
- (id)accessibilityLabel;	// 0x347c19
- (void)cancelContainerViewLoad;	// 0x347d51
// converted property getter: - (id)content;	// 0x347939
// declared property getter: - (XXStruct_40SSZC)contentSize;	// 0x347eb5
- (void)controlWasDeactivated;	// 0x34768d
- (void)dealloc;	// 0x347615
- (id)description;	// 0x34774d
// converted property getter: - (id)divider;	// 0x3477c9
// converted property getter: - (float)dividerMargin;	// 0x347929
// converted property getter: - (XXStruct_qlg9jA)dividerSuggestedHeight;	// 0x3478b1
- (void)layoutSubcontrols;	// 0x3479f5
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x347c39
// converted property setter: - (void)setContent:(id)content;	// 0x347949
// declared property setter: - (void)setContentSize:(XXStruct_40SSZC)size;	// 0x347ecd
// converted property setter: - (void)setDivider:(id)divider;	// 0x347821
// converted property setter: - (void)setDividerMargin:(float)margin;	// 0x3478cd
// converted property setter: - (void)setDividerSuggestedHeight:(XXStruct_qlg9jA)height;	// 0x3478a1
- (void)setIdentifier:(id)identifier;	// 0x3477d9
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x347e11
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x347e61
- (void)setReadyToDisplay;	// 0x347dc1
- (void)setSpace:(XXStruct_qlg9jA)space;	// 0x3479e5
- (void)windowMaxBoundsChanged;	// 0x3476fd
@end

