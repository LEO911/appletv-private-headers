/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIPrefTableCellPiece : UIImageView {
@private
	CGRect _originalFrame;	// 52 = 0x34
	UIView *_syncPiece;	// 68 = 0x44
}
@property(readonly, assign) CGRect originalFrame;	// G=0x32e8315d; converted property
@property(retain) UIView *syncPiece;	// G=0x32e831a9; S=0x32e83181; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32e830b1
- (void)dealloc;	// 0x32e83111
// converted property getter: - (CGRect)originalFrame;	// 0x32e8315d
// converted property setter: - (void)setSyncPiece:(id)piece;	// 0x32e83181
// converted property getter: - (id)syncPiece;	// 0x32e831a9
@end
