/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class RadioTrack;

__attribute__((visibility("hidden")))
@interface ATVRadioItem : XXUnknownSuperclass {
	BOOL _isPreview;	// 4 = 0x4
	RadioTrack *_radioTrack;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL isPreview;	// G=0x703d1; S=0x703e1; @synthesize=_isPreview
@property(retain, nonatomic) RadioTrack *radioTrack;	// G=0x70399; S=0x703a9; @synthesize=_radioTrack
- (id)initWithDataClient:(id)dataClient radioTrack:(id)track;	// 0x6fa89
- (id)initWithDataClient:(id)dataClient radioTrack:(id)track isPreview:(BOOL)preview;	// 0x6fac5
- (void).cxx_destruct;	// 0x703f1
- (id)concreteValueForProperty:(id)property;	// 0x6fc21
- (void)dealloc;	// 0x6fb45
- (id)description;	// 0x6fb89
// declared property getter: - (BOOL)isPreview;	// 0x703d1
// declared property getter: - (id)radioTrack;	// 0x70399
// declared property setter: - (void)setIsPreview:(BOOL)preview;	// 0x703e1
// declared property setter: - (void)setRadioTrack:(id)track;	// 0x703a9
@end

