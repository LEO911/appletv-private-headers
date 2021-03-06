/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSURL;

@interface UIWebClipIcon : NSObject {
	BOOL _precomposed;	// 4 = 0x4
	BOOL _siteWide;	// 5 = 0x5
	CGSize _bestSize;	// 8 = 0x8
	NSURL *_url;	// 16 = 0x10
}
@property(assign, nonatomic) CGSize bestSize;	// G=0x304abfd9; S=0x304abff1; @synthesize=_bestSize
@property(assign, nonatomic, getter=isPrecomposed) BOOL precomposed;	// G=0x304abf99; S=0x304abfa9; @synthesize=_precomposed
@property(assign, nonatomic, getter=isSiteWide) BOOL siteWide;	// G=0x304abfb9; S=0x304abfc9; @synthesize=_siteWide
@property(retain, nonatomic) NSURL *url;	// G=0x304ac005; S=0x304ac015; @synthesize=_url
// declared property getter: - (CGSize)bestSize;	// 0x304abfd9
- (int)compare:(id)compare preferringDeviceIconSizes:(BOOL)sizes;	// 0x304abda9
- (void)dealloc;	// 0x304abd5d
// declared property getter: - (BOOL)isPrecomposed;	// 0x304abf99
// declared property getter: - (BOOL)isSiteWide;	// 0x304abfb9
// declared property setter: - (void)setBestSize:(CGSize)size;	// 0x304abff1
// declared property setter: - (void)setPrecomposed:(BOOL)precomposed;	// 0x304abfa9
// declared property setter: - (void)setSiteWide:(BOOL)wide;	// 0x304abfc9
// declared property setter: - (void)setUrl:(id)url;	// 0x304ac015
// declared property getter: - (id)url;	// 0x304ac005
@end

