/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import "PTSRowTableViewCell.h"

@class UIButton;

@interface PTSDrillDownRowTableViewCell : PTSRowTableViewCell {
	UIButton *_actionButton;	// 368 = 0x170
}
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x325a2a91
- (void).cxx_destruct;	// 0x325a2f49
- (void)_actionPress;	// 0x325a2f09
- (void)_createActionButton;	// 0x325a2db5
- (void)_destroyActionButton;	// 0x325a2ed5
- (void)layoutSubviews;	// 0x325a2ba1
- (void)updateCellCharacteristics;	// 0x325a2ad9
@end

