/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UITableViewCellLayoutManager : NSObject {
}
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x300e744d
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300ecaed
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x300e79f5
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x300e7b45
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x300e7c01
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x300e7639
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300ebf65
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300ecf35
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300ec195
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300ec8b5
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ecab9
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x300e7e3d
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x301a8f5d
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301aa0fd
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ebdf9
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301a8565
- (id)badgeForCell:(id)cell;	// 0x30318a21
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x301a9191
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x301a7ea5
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x301c0735
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300e7605
- (float)contentIndentationForCell:(id)cell;	// 0x300ed3f1
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x30318a31
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x301c0395
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301a8cd1
- (id)defaultBadgeForCell:(id)cell;	// 0x303189c1
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x303189b1
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x301fef51
- (id)defaultImageViewForCell:(id)cell;	// 0x3010a2cd
- (id)defaultLabelForCell:(id)cell;	// 0x3014a969
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x3014a9a9
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x301a75c5
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x301c0185
- (id)detailTextLabelForCell:(id)cell;	// 0x301a74d1
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ebf25
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x301a85d1
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x300ec151
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301a8c9d
- (id)editableTextFieldForCell:(id)cell;	// 0x301c2745
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ecf01
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x300ec49d
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x300ed301
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301aa085
- (id)imageViewForCell:(id)cell;	// 0x3010a2bd
- (void)layoutSubviewsOfCell:(id)cell;	// 0x300eaec9
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ec155
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x3010a369
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x300ec7d9
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301bbbf1
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300ec875
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x3010a311
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x300eca69
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30318a6d
- (id)textLabelForCell:(id)cell;	// 0x301a74c1
@end

