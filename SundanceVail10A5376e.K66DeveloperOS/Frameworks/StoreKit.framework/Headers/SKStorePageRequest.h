/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary;

@interface SKStorePageRequest : NSObject {
	int _pageStyle;	// 4 = 0x4
	NSDictionary *_productParameters;	// 8 = 0x8
	NSURL *_productURL;	// 12 = 0xc
}
@property(assign, nonatomic) int productPageStyle;	// G=0x35f998b1; S=0x35f998c1; @synthesize=_pageStyle
@property(copy, nonatomic) NSDictionary *productParameters;	// G=0x35f998d1; S=0x35f998e5; @synthesize=_productParameters
@property(copy, nonatomic) NSURL *productURL;	// G=0x35f998f5; S=0x35f99909; @synthesize=_productURL
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35f99621
- (id)copyXPCEncoding;	// 0x35f997d9
- (void)dealloc;	// 0x35f995bd
// declared property getter: - (int)productPageStyle;	// 0x35f998b1
// declared property getter: - (id)productParameters;	// 0x35f998d1
// declared property getter: - (id)productURL;	// 0x35f998f5
// declared property setter: - (void)setProductPageStyle:(int)style;	// 0x35f998c1
// declared property setter: - (void)setProductParameters:(id)parameters;	// 0x35f998e5
// declared property setter: - (void)setProductURL:(id)url;	// 0x35f99909
@end
