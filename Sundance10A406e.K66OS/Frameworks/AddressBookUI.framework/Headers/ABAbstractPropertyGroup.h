/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ABStyleProvider;

@interface ABAbstractPropertyGroup : NSObject {
	NSArray *_people;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
	void *_preinsertedPerson;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasChanges;	// G=0x314385c1; S=0x31436f05; @synthesize=_hasChanges
@property(retain, nonatomic) NSArray *people;	// G=0x31437131; S=0x31436761; @synthesize=_people
@property(assign, nonatomic) void *preinsertedPerson;	// G=0x31491a95; S=0x314918b1; @synthesize=_preinsertedPerson
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x31491a85; S=0x31436751; @synthesize=_styleProvider
- (id)init;	// 0x31436659
- (BOOL)canSave;	// 0x314919b9
- (void)dealloc;	// 0x3145171d
// declared property getter: - (BOOL)hasChanges;	// 0x314385c1
// declared property getter: - (id)people;	// 0x31437131
// declared property getter: - (void *)preinsertedPerson;	// 0x31491a95
- (int)property;	// 0x314918e5
- (void)reloadFromModel;	// 0x31436e25
// declared property setter: - (void)setHasChanges:(BOOL)changes;	// 0x31436f05
// declared property setter: - (void)setPeople:(id)people;	// 0x31436761
// declared property setter: - (void)setPreinsertedPerson:(void *)person;	// 0x314918b1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x31436751
// declared property getter: - (id)styleProvider;	// 0x31491a85
- (void)updateRecord;	// 0x314918ed
@end

