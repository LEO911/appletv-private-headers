/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRURLDocumentManager;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreXMLDocumentPreProcessor : NSObject {
@private
	BRURLDocumentManager *_includesManager;	// 4 = 0x4
}
+ (id)processDocument:(id)document;	// 0x35d055e5
+ (id)requiredURLsFromDocument:(id)document;	// 0x35d0572d
- (id)_dictionaryFromElement:(id)element;	// 0x35d0605d
- (BOOL)_evaluateConditional:(id)conditional merchant:(id)merchant;	// 0x35d05f65
- (BOOL)_evaluateKey:(id)key operator:(id)anOperator value:(id)value merchant:(id)merchant;	// 0x35d0616d
- (BOOL)_processConditionalGroupDictionary:(id)dictionary merchant:(id)merchant;	// 0x35d05e51
- (void)_processConditionalGroupElement:(id)element merchant:(id)merchant;	// 0x35d05c49
- (void)_processConditionalGroups:(id)groups merchant:(id)merchant;	// 0x35d05bad
- (BOOL)_processConditionalResult:(BOOL)result isAnd:(BOOL)anAnd isOr:(BOOL)anOr isNot:(BOOL)aNot;	// 0x35d0603d
- (id)_processDocument:(id)document;	// 0x35d058cd
- (id)_processIncludeDictionary:(id)dictionary representingElement:(id)element;	// 0x35d05d31
- (id)_processIncludeElement:(id)element;	// 0x35d05c11
- (void)_processIncludeRequests:(id)requests;	// 0x35d06281
- (void)_processIncludes:(id)includes;	// 0x35d05a31
- (void)_removeElement:(id)element;	// 0x35d06739
- (void)_replaceElement:(id)element withContainedElementNamed:(id)containedElementNamed;	// 0x35d06645
- (void)_replaceElement:(id)element withElement:(id)element2;	// 0x35d06139
- (void)dealloc;	// 0x35d05881
@end

