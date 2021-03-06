/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _browsing;	// 8 = 0x8
	NSMutableArray *_internalDevices;	// 12 = 0xc
}
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x328a2ae9; S=0x328a2b01; @synthesize=_browsing
@property(assign) id delegate;	// G=0x328a2abd; S=0x328a2ad1; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x328a2b19; S=0x328a2b2d; @synthesize=_internalDevices
- (void)dealloc;	// 0x328a2a0d
// declared property getter: - (id)delegate;	// 0x328a2abd
- (void)finalize;	// 0x328a2a65
// declared property getter: - (id)internalDevices;	// 0x328a2b19
// declared property getter: - (BOOL)isBrowsing;	// 0x328a2ae9
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x328a2b01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x328a2ad1
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x328a2b2d
@end

