/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRPosterControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	BRImage *_defaultImage;	// 4 = 0x4
}
+ (id)factory;	// 0x2bf779
- (id)init;	// 0x2bf7b1
- (id)_posterForGridFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x2bfbb1
- (id)_posterForShelfFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x2bfbfd
- (id)_posterFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x2bfc55
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2bf839
- (void)dealloc;	// 0x2bf7ed
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2bfa99
- (void)setDefaultImage:(id)image;	// 0x2bfb75
@end
