/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, NSString, _PFUbiquityStack, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportContext : NSObject {
@private
	_PFUbiquityStack *_stack;	// 4 = 0x4
	PFUbiquityStoreMetadata *_storeMetadata;	// 8 = 0x8
	PFUbiquityKnowledgeVector *_kv;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 16 = 0x10
	NSString *_exportingPeerID;	// 20 = 0x14
}
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x340740e1; S=0x34074369; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x340740d1; S=0x34074391; @synthesize=_exportingPeerID
@property(retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x340740f1; S=0x34074341; @synthesize=_kv
@property(readonly, assign, nonatomic) _PFUbiquityStack *stack;	// G=0x34074111; @synthesize=_stack
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// G=0x34074101; @synthesize=_storeMetadata
- (id)initWithStack:(id)stack andStoreMetadata:(id)metadata;	// 0x340741f1
- (id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location withLocalPeerID:(id)localPeerID;	// 0x34074121
// declared property getter: - (id)currentKnowledgeVector;	// 0x340740e1
- (void)dealloc;	// 0x3407428d
// declared property getter: - (id)exportingPeerID;	// 0x340740d1
// declared property getter: - (id)knowledgeVector;	// 0x340740f1
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x34074369
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x34074391
// declared property setter: - (void)setKnowledgeVector:(id)vector;	// 0x34074341
// declared property getter: - (id)stack;	// 0x34074111
// declared property getter: - (id)storeMetadata;	// 0x34074101
@end

