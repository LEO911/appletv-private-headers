/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPVisitor.h"
#import <NSObject.h> // Unknown library


@interface CPGenericVisitor : NSObject <CPVisitor> {
}
- (void)visitBody:(id)body;	// 0x31071d89
- (void)visitChunk:(id)chunk;	// 0x31071cb9
- (void)visitColumn:(id)column;	// 0x31071db9
- (void)visitCompoundGraphic:(id)graphic;	// 0x31071d29
- (void)visitImage:(id)image;	// 0x31071cb5
- (void)visitImageRegion:(id)region;	// 0x31071dd9
- (void)visitLayoutArea:(id)area;	// 0x31071da9
- (void)visitPage:(id)page;	// 0x31071d39
- (void)visitParagraph:(id)paragraph;	// 0x31071d99
- (void)visitRegion:(id)region;	// 0x31071d49
- (void)visitRotation:(id)rotation;	// 0x31071d79
- (void)visitShape:(id)shape;	// 0x31071d19
- (void)visitShapeRegion:(id)region;	// 0x31071de9
- (void)visitTextBox:(id)box;	// 0x31071dc9
- (void)visitTextLine:(id)line;	// 0x31071d59
- (void)visitZone:(id)zone;	// 0x31071d69
@end

