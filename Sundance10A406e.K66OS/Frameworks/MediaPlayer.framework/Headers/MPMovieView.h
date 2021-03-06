/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView {
	id<MPMovieViewDelegate> _delegate;	// 84 = 0x54
}
@property(assign, nonatomic) id<MPMovieViewDelegate> delegate;	// G=0x35cae0d9; S=0x35cae0e9; @synthesize=_delegate
// declared property getter: - (id)delegate;	// 0x35cae0d9
- (void)didMoveToWindow;	// 0x35cae091
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35cae0e9
- (void)willMoveToWindow:(id)window;	// 0x35cae039
@end

