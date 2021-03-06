/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLNode.h"

@class BRXMLElement;

__attribute__((visibility("hidden")))
@interface BRXMLDocument : BRXMLNode {
	BRXMLElement *_rootElement;	// 4 = 0x4
}
@property(retain, nonatomic) BRXMLElement *rootElement;	// G=0x3938e5; S=0x393a71; 
- (id)init;	// 0x393669
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x393299
- (id)initWithRootElement:(id)rootElement;	// 0x393695
- (id)initWithXMLString:(id)xmlstring options:(unsigned)options error:(id *)error;	// 0x393861
- (id)XMLData;	// 0x393c29
- (void)dealloc;	// 0x393899
- (id)elementById:(id)anId;	// 0x173811
- (id)makeElementNamed:(id)named;	// 0x393db9
// declared property getter: - (id)rootElement;	// 0x3938e5
// declared property setter: - (void)setRootElement:(id)element;	// 0x393a71
@end

