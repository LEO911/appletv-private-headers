/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreScrollerDataSource : XXUnknownSuperclass {
	NSArray *_controls;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *controls;	// G=0x1bf8e1; S=0x1bf651; @synthesize=_controls
@property(retain, nonatomic) NSString *identifier;	// G=0x1bf8f1; S=0x1bf6a1; @synthesize=_identifier
- (void)_setControlIdentifiers;	// 0x1bf901
// declared property getter: - (id)controls;	// 0x1bf8e1
- (void)dealloc;	// 0x1bf5ed
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1bf735
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x1bf7d5
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1bf715
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x1bf79d
// declared property getter: - (id)identifier;	// 0x1bf8f1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x1bf711
- (long)numberOfItemsInGrid:(id)grid;	// 0x1bf6f1
// declared property setter: - (void)setControls:(id)controls;	// 0x1bf651
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x1bf6a1
@end

