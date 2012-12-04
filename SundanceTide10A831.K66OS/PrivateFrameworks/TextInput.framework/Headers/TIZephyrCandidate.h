/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface TIZephyrCandidate : XXUnknownSuperclass {
	unsigned _wordOriginFeedbackID;	// 20 = 0x14
	NSArray *_usageTrackingTypes;	// 24 = 0x18
	BOOL extensionCandidate;	// 28 = 0x1c
}
@property(assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x34916425; S=0x34916435; @synthesize
@property(readonly, retain) NSArray *usageTrackingTypes;	// G=0x34916415; converted property
@property(readonly, assign) unsigned wordOriginFeedbackID;	// G=0x34916309; converted property
- (id)initWithCandidate:(id)candidate forInput:(id)input wordOriginFeedbackID:(unsigned)anId;	// 0x34916235
- (id)initWithCandidate:(id)candidate forInput:(id)input wordOriginFeedbackID:(unsigned)anId usageTrackingTypes:(id)types;	// 0x34916259
- (id)copyWithZone:(NSZone *)zone;	// 0x34916375
- (void)dealloc;	// 0x349162bd
- (BOOL)isAutocorrection;	// 0x34916319
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x34916425
// declared property setter: - (void)setExtensionCandidate:(BOOL)candidate;	// 0x34916435
// converted property getter: - (id)usageTrackingTypes;	// 0x34916415
// converted property getter: - (unsigned)wordOriginFeedbackID;	// 0x34916309
@end
