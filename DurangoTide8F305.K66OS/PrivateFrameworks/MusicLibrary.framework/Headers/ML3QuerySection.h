/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface ML3QuerySection : NSObject {
@private
	NSRange _range;	// 4 = 0x4
	unsigned _sectionIndex;	// 12 = 0xc
}
@property(assign, nonatomic) NSRange range;	// G=0x333afef1; S=0x333afb75; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndex;	// G=0x333afb9d; S=0x333afb8d; @synthesize=_sectionIndex
- (void)dealloc;	// 0x333aff09
- (id)description;	// 0x333e6781
// declared property getter: - (NSRange)range;	// 0x333afef1
// declared property getter: - (unsigned)sectionIndex;	// 0x333afb9d
// declared property setter: - (void)setRange:(NSRange)range;	// 0x333afb75
// declared property setter: - (void)setSectionIndex:(unsigned)index;	// 0x333afb8d
@end
