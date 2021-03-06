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
	ATVPhotoMetadataCommentView *_commentsPart;	// 4 = 0x4
	ATVPhotoMetadataHeaderView *_headerPart;	// 8 = 0x8
	BOOL _enableFadeTransition;	// 12 = 0xc
	double _fadeTransitionDuration;	// 16 = 0x10
}
@property(retain, nonatomic) ATVPhotoMetadataCommentView *commentsPart;	// G=0x125bd5; S=0x125be5; @synthesize=_commentsPart
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x125b25; S=0x125b61; 
@property(assign, nonatomic) BOOL enableFadeTransition;	// G=0x125c45; S=0x125959; @synthesize=_enableFadeTransition
@property(assign, nonatomic) double fadeTransitionDuration;	// G=0x125c55; S=0x125c6d; @synthesize=_fadeTransitionDuration
@property(retain, nonatomic) ATVPhotoMetadataHeaderView *headerPart;	// G=0x125c0d; S=0x125c1d; @synthesize=_headerPart
- (id)init;	// 0x125891
- (void).cxx_destruct;	// 0x125c81
// declared property getter: - (id)commentsPart;	// 0x125bd5
// declared property getter: - (BOOL)disableDisplay;	// 0x125b25
// declared property getter: - (BOOL)enableFadeTransition;	// 0x125c45
// declared property getter: - (double)fadeTransitionDuration;	// 0x125c55
// declared property getter: - (id)headerPart;	// 0x125c0d
// declared property setter: - (void)setCommentsPart:(id)part;	// 0x125be5
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x125b61
// declared property setter: - (void)setEnableFadeTransition:(BOOL)transition;	// 0x125959
// declared property setter: - (void)setFadeTransitionDuration:(double)duration;	// 0x125c6d
// declared property setter: - (void)setHeaderPart:(id)part;	// 0x125c1d
@end

