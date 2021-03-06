/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSIndexSet, NSArray;

@interface BRKeyValueObservingRegistry : NSObject {
@private
	NSIndexSet *_indexesToRemove;	// 4 = 0x4
	NSArray *_observationEntries;	// 8 = 0x8
}
@property(retain) NSArray *observationEntries;	// G=0x32aae4e5; S=0x32aae4f9; @synthesize=_observationEntries
- (id)init;	// 0x32aadee9
- (void)_addObservationEntry:(id)entry options:(unsigned)options;	// 0x32aae51d
- (void)_removeObservationEntriesAtIndexes:(id)indexes inDealloc:(BOOL)dealloc;	// 0x32aae5a1
- (void)dealloc;	// 0x32aadf75
// declared property getter: - (id)observationEntries;	// 0x32aae4e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32aae425
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath handler:(id)handler;	// 0x32aae00d
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath options:(unsigned)options handler:(id)handler;	// 0x32aae03d
// declared property setter: - (void)setObservationEntries:(id)entries;	// 0x32aae4f9
- (void)unregisterAll;	// 0x32aae3c5
- (void)unregisterObserver:(id)observer;	// 0x32aae169
- (void)unregisterObserversOfObject:(id)object;	// 0x32aae211
- (void)unregisterObserversOfObject:(id)object forKeyPath:(id)keyPath;	// 0x32aae2b9
@end

