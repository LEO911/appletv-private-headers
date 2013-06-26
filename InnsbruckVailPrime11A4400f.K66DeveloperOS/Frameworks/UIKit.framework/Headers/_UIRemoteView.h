/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIStatusBarTinting.h"

@class UIColor, _UIHostedWindowHostingHandle;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
	BOOL _actsAsTintView;	// 96 = 0x60
	UIColor *_statusBarTintColor;	// 100 = 0x64
	_UIHostedWindowHostingHandle *_hostedWindowHostingHandle;	// 104 = 0x68
}
@property(assign, nonatomic, setter=_setActsAsTintView:) BOOL _actsAsTintView;	// G=0x2f89f965; S=0x2f89f8dd; @synthesize
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x2f89f955; S=0x2f89f841; @synthesize
@property(retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;	// G=0x2f89f975; S=0x2f89f549; @synthesize=_hostedWindowHostingHandle
+ (Class)layerClass;	// 0x2f89f3c1
+ (id)viewWithHostedWindowHostingHandle:(id)hostedWindowHostingHandle;	// 0x2f89f3dd
+ (id)viewWithRemoteContextID:(unsigned)remoteContextID;	// 0x2f89f471
// declared property getter: - (BOOL)_actsAsTintView;	// 0x2f89f965
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x2f89f871
// declared property setter: - (void)_setActsAsTintView:(BOOL)view;	// 0x2f89f8dd
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x2f89f841
- (void)_setStatusBarTintColor:(id)color duration:(double)duration;	// 0x2f89f789
// declared property getter: - (id)_statusBarTintColor;	// 0x2f89f955
- (void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)transform frame:(CGRect)frame;	// 0x2f89f655
- (void)dealloc;	// 0x2f89f4fd
// declared property getter: - (id)hostedWindowHostingHandle;	// 0x2f89f975
- (void)setContextID:(unsigned)anId;	// 0x2f89f75d
// declared property setter: - (void)setHostedWindowHostingHandle:(id)handle;	// 0x2f89f549
@end
