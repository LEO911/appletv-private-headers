/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, assign) NSURL *absoluteLinkURL;	// G=0x31e1b06d; 
@property(copy) NSString *accessKey;	// G=0x31e1a171; S=0x31e1a295; 
@property(copy) NSString *alt;	// G=0x31e18d9d; S=0x31e18ec1; 
@property(copy) NSString *coords;	// G=0x31e19075; S=0x31e19199; 
@property(readonly, assign) NSString *hashName;	// G=0x31e1a449; 
@property(readonly, assign) NSString *host;	// G=0x31e1a605; 
@property(readonly, assign) NSString *hostname;	// G=0x31e1a7c1; 
@property(copy) NSString *href;	// G=0x31e1934d; S=0x31e19515; 
@property(assign) BOOL noHref;	// G=0x31e196c9; S=0x31e197d5; 
@property(readonly, assign) NSString *pathname;	// G=0x31e1a97d; 
@property(retain) id ping;	// G=0x31e198e9; S=0x31e19a0d; converted property
@property(readonly, assign) NSString *port;	// G=0x31e1ab39; 
@property(readonly, assign) NSString *protocol;	// G=0x31e1acf5; 
@property(readonly, assign) NSString *search;	// G=0x31e1aeb1; 
@property(copy) NSString *shape;	// G=0x31e19bc1; S=0x31e19ce5; 
@property(copy) NSString *target;	// G=0x31e19e99; S=0x31e19fbd; 
// declared property getter: - (id)absoluteLinkURL;	// 0x31e1b06d
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x31e76281
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x31e763b1
// declared property getter: - (id)accessKey;	// 0x31e1a171
// declared property getter: - (id)alt;	// 0x31e18d9d
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x31e7622d
- (id)boundingBoxesWithOwner:(id)owner;	// 0x31e76335
// declared property getter: - (id)coords;	// 0x31e19075
// declared property getter: - (id)hashName;	// 0x31e1a449
// declared property getter: - (id)host;	// 0x31e1a605
// declared property getter: - (id)hostname;	// 0x31e1a7c1
// declared property getter: - (id)href;	// 0x31e1934d
// declared property getter: - (BOOL)noHref;	// 0x31e196c9
// declared property getter: - (id)pathname;	// 0x31e1a97d
// converted property getter: - (id)ping;	// 0x31e198e9
// declared property getter: - (id)port;	// 0x31e1ab39
// declared property getter: - (id)protocol;	// 0x31e1acf5
// declared property getter: - (id)search;	// 0x31e1aeb1
// declared property setter: - (void)setAccessKey:(id)key;	// 0x31e1a295
// declared property setter: - (void)setAlt:(id)alt;	// 0x31e18ec1
// declared property setter: - (void)setCoords:(id)coords;	// 0x31e19199
// declared property setter: - (void)setHref:(id)href;	// 0x31e19515
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x31e197d5
// converted property setter: - (void)setPing:(id)ping;	// 0x31e19a0d
// declared property setter: - (void)setShape:(id)shape;	// 0x31e19ce5
// declared property setter: - (void)setTarget:(id)target;	// 0x31e19fbd
// declared property getter: - (id)shape;	// 0x31e19bc1
// declared property getter: - (id)target;	// 0x31e19e99
@end
