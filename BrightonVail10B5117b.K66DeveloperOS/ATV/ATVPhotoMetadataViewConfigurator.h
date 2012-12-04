/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVPhotoMetadataHeaderView, ATVPhotoMetadataCommentView;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataViewConfigurator : XXUnknownSuperclass {
	double _fadeTransitionDuration;	// 4 = 0x4
	ATVPhotoMetadataCommentView *_commentsPart;	// 12 = 0xc
	ATVPhotoMetadataHeaderView *_headerPart;	// 16 = 0x10
	BOOL _enableFadeTransition;	// 20 = 0x14
}
@property(retain, nonatomic) ATVPhotoMetadataCommentView *commentsPart;	// G=0x124301; S=0x124311; @synthesize=_commentsPart
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x124225; S=0x124261; 
@property(assign, nonatomic) BOOL enableFadeTransition;	// G=0x124371; S=0x124059; @synthesize=_enableFadeTransition
@property(assign, nonatomic) double fadeTransitionDuration;	// G=0x1242d5; S=0x1242ed; @synthesize=_fadeTransitionDuration
@property(retain, nonatomic) ATVPhotoMetadataHeaderView *headerPart;	// G=0x124339; S=0x124349; @synthesize=_headerPart
- (id)init;	// 0x123f91
- (void).cxx_destruct;	// 0x124381
// declared property getter: - (id)commentsPart;	// 0x124301
// declared property getter: - (BOOL)disableDisplay;	// 0x124225
// declared property getter: - (BOOL)enableFadeTransition;	// 0x124371
// declared property getter: - (double)fadeTransitionDuration;	// 0x1242d5
// declared property getter: - (id)headerPart;	// 0x124339
// declared property setter: - (void)setCommentsPart:(id)part;	// 0x124311
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x124261
// declared property setter: - (void)setEnableFadeTransition:(BOOL)transition;	// 0x124059
// declared property setter: - (void)setFadeTransitionDuration:(double)duration;	// 0x1242ed
// declared property setter: - (void)setHeaderPart:(id)part;	// 0x124349
@end
