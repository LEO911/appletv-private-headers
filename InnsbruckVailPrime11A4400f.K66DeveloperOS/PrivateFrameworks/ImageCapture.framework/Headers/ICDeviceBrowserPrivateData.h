/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _browsing;	// 8 = 0x8
	NSMutableArray *_internalDevices;	// 12 = 0xc
}
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x3126f6f9; S=0x3126f711; @synthesize=_browsing
@property(assign) id delegate;	// G=0x3126f6cd; S=0x3126f6e1; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x3126f729; S=0x3126f73d; @synthesize=_internalDevices
- (void)dealloc;	// 0x3126f61d
// declared property getter: - (id)delegate;	// 0x3126f6cd
- (void)finalize;	// 0x3126f675
// declared property getter: - (id)internalDevices;	// 0x3126f729
// declared property getter: - (BOOL)isBrowsing;	// 0x3126f6f9
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x3126f711
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3126f6e1
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x3126f73d
@end
