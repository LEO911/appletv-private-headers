/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimationInfoData;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject {
@private
	PDAnimationInfoData *mEntrance;	// 4 = 0x4
	PDAnimationInfoData *mExit;	// 8 = 0x8
	PDAnimationInfoData *mMedia;	// 12 = 0xc
}
@property(retain) id entranceData;	// G=0x31287d6d; S=0x31287d31; converted property
@property(retain) id exitData;	// G=0x31287db9; S=0x31287d7d; converted property
@property(retain, nonatomic) PDAnimationInfoData *mediaData;	// G=0x31287dc9; S=0x31287dd9; @synthesize=mMedia
- (void)dealloc;	// 0x31287cb9
// converted property getter: - (id)entranceData;	// 0x31287d6d
// converted property getter: - (id)exitData;	// 0x31287db9
// declared property getter: - (id)mediaData;	// 0x31287dc9
// converted property setter: - (void)setEntranceData:(id)data;	// 0x31287d31
// converted property setter: - (void)setExitData:(id)data;	// 0x31287d7d
// declared property setter: - (void)setMediaData:(id)data;	// 0x31287dd9
@end

