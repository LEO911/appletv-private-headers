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
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x32b2df2d
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x32b32c95
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x32b2e4d5
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x32b2e625
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x32b2e6e1
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x32b2e119
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x32b3210d
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x32b33735
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x32b3233d
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x32b32a5d
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b32c61
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x32b2e8cd
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x32c2ad79
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32cab67d
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b31fa1
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32c2aa31
- (id)badgeForCell:(id)cell;	// 0x32bcc22d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x32c2afb1
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x32c2a36d
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x32bac1d1
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b2e0e5
- (float)contentIndentationForCell:(id)cell;	// 0x32b33bf1
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x32da0bed
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x32cabf1d
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32c2aaf9
- (id)defaultBadgeForCell:(id)cell;	// 0x32bcc23d
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x32da0bd9
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x32c913c5
- (id)defaultImageViewForCell:(id)cell;	// 0x32b61fcd
- (id)defaultLabelForCell:(id)cell;	// 0x32bb11b9
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x32bb11f9
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x32c2b101
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x32cabd11
- (id)detailTextLabelForCell:(id)cell;	// 0x32c29f65
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b320cd
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x32c2aa9d
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x32b322f9
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32c8da25
- (id)editableTextFieldForCell:(id)cell;	// 0x32da0be9
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b33701
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x32b32645
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x32b33b01
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32da0c5d
- (id)imageViewForCell:(id)cell;	// 0x32b61fbd
- (void)layoutSubviewsOfCell:(id)cell;	// 0x32b31041
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b322fd
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x32b62361
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x32b32981
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32c8ddc1
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32b32a1d
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x32b62309
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x32b32c11
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x32da0c29
- (id)textLabelForCell:(id)cell;	// 0x32c29f55
@end

