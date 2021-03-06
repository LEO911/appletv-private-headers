/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQPagesGenerator.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHPages : NSObject <GQPagesGenerator> {
}
+ (int)beginPublication:(id)publication state:(id)state;	// 0x36c68dd5
+ (int)endPublication:(id)publication state:(id)state;	// 0x36c68dd9
+ (Class)enterBodyStorage:(id)storage;	// 0x36c69999
+ (Class)enterMainDrawablesForPage:(unsigned)page state:(id)state;	// 0x36c6997d
+ (int)handleFooters:(CFArrayRef)footers state:(id)state;	// 0x36c699e5
+ (int)handleHeaders:(CFArrayRef)headers state:(id)state;	// 0x36c699b5
+ (int)handlePageSetup:(id)setup state:(id)state;	// 0x36c69141
+ (void)handlePagesOrders:(id)orders;	// 0x36c69e65
+ (int)handleSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages state:(id)state;	// 0x36c69a15
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x36c69979
+ (void)handleZOrder:(unsigned)order cssClassName:(CFStringRef)name state:(id)state;	// 0x36c69e1d
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)publication state:(id)state;	// 0x36c69a81
+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)publication state:(id)state;	// 0x36c69b85
+ (void)mapHeaderOrFooter:(id)footer isHeader:(BOOL)header toPublication:(id)publication state:(id)state;	// 0x36c69f39
+ (int)setCurrentPageIndex:(int)index state:(id)state;	// 0x36c69a51
@end

