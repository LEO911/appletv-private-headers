/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSXMLParserDelegate.h"


@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {
	CGPoint _p[4];	// 4 = 0x4
	CGPathRef _path;	// 36 = 0x24
	BOOL _parserError;	// 40 = 0x28
}
@property(readonly, assign) BOOL parserError;	// G=0x3388133d; @synthesize=_parserError
@property(readonly, assign) CGPathRef path;	// G=0x33881069; @dynamic
- (id)init;	// 0x33880fd9
- (void)dealloc;	// 0x33881029
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x338812b1
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33881091
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x33881079
- (void)parserDidStartDocument:(id)parser;	// 0x3388108d
// declared property getter: - (BOOL)parserError;	// 0x3388133d
// declared property getter: - (CGPathRef)path;	// 0x33881069
@end

