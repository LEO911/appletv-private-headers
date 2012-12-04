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
@property(assign, nonatomic) CGSize bestSize;	// G=0x347d7601; S=0x347d7619; @synthesize=_bestSize
@property(assign, nonatomic, getter=isPrecomposed) BOOL precomposed;	// G=0x347d75c1; S=0x347d75d1; @synthesize=_precomposed
@property(assign, nonatomic, getter=isSiteWide) BOOL siteWide;	// G=0x347d75e1; S=0x347d75f1; @synthesize=_siteWide
@property(retain, nonatomic) NSURL *url;	// G=0x347d762d; S=0x347d763d; @synthesize=_url
// declared property getter: - (CGSize)bestSize;	// 0x347d7601
- (int)compare:(id)compare preferringDeviceIconSizes:(BOOL)sizes;	// 0x347d73d1
- (void)dealloc;	// 0x347d7385
// declared property getter: - (BOOL)isPrecomposed;	// 0x347d75c1
// declared property getter: - (BOOL)isSiteWide;	// 0x347d75e1
// declared property setter: - (void)setBestSize:(CGSize)size;	// 0x347d7619
// declared property setter: - (void)setPrecomposed:(BOOL)precomposed;	// 0x347d75d1
// declared property setter: - (void)setSiteWide:(BOOL)wide;	// 0x347d75f1
// declared property setter: - (void)setUrl:(id)url;	// 0x347d763d
// declared property getter: - (id)url;	// 0x347d762d
@end
