/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreXMLDocumentPreProcessor : XXUnknownSuperclass {
}
+ (void)initialize;	// 0x1e14a1
+ (id)processDocument:(id)document;	// 0x1e15bd
+ (id)requiredURLsFromDocument:(id)document;	// 0x1e16f5
- (id)_dictionaryFromElement:(id)element;	// 0x1e20fd
- (BOOL)_evaluateConditional:(id)conditional merchant:(id)merchant;	// 0x1e200d
- (BOOL)_evaluateKey:(id)key operator:(id)anOperator value:(id)value merchant:(id)merchant;	// 0x1e2209
- (BOOL)_processConditionalGroupDictionary:(id)dictionary merchant:(id)merchant;	// 0x1e1eed
- (void)_processConditionalGroupElement:(id)element merchant:(id)merchant;	// 0x1e1cf9
- (void)_processConditionalGroups:(id)groups merchant:(id)merchant;	// 0x1e1c61
- (BOOL)_processConditionalResult:(BOOL)result isAnd:(BOOL)anAnd isOr:(BOOL)anOr isNot:(BOOL)aNot;	// 0x1e20dd
- (id)_processDocument:(id)document;	// 0x1e19a5
- (id)_processIncludeDictionary:(id)dictionary representingElement:(id)element;	// 0x1e1de1
- (id)_processIncludeElement:(id)element;	// 0x1e1cc5
- (void)_processIncludeRequests:(id)requests;	// 0x1e231d
- (void)_processIncludes:(id)includes;	// 0x1e1b11
- (void)_removeElement:(id)element;	// 0x1e27b5
- (void)_replaceElement:(id)element withContainedElementNamed:(id)containedElementNamed;	// 0x1e26c1
- (void)_replaceElement:(id)element withElement:(id)element2;	// 0x1e21d1
@end
