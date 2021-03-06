/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContextMenuControlDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "ATVUpdatable.h"
#import "BRProvider.h"
#import "BRControlFactory.h"

@class ATVFeedDocument, NSArray, ATVJSContext, BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface ATVJSPopUpMenuControl : XXUnknownSuperclass <ATVUpdatable, BRProvider, BRControlFactory, BRControlHeightFactory, BRContextMenuControlDelegate> {
	BOOL _didLoadPopUpMenu;	// 4 = 0x4
	OpaqueJSValue *_popUpMenuRef;	// 8 = 0x8
	ATVJSContext *_context;	// 12 = 0xc
	id _onDismiss;	// 16 = 0x10
	ATVFeedDocument *_feedDocument;	// 20 = 0x14
	BRContextMenuControl *_popUpMenu;	// 24 = 0x18
	NSArray *_flattenedMenuElements;	// 28 = 0x1c
}
@property(assign, nonatomic) __weak ATVJSContext *context;	// G=0x15276d; S=0x15278d; @synthesize=_context
@property(retain, nonatomic) ATVFeedDocument *feedDocument;	// G=0x1527c5; S=0x1527d5; @synthesize=_feedDocument
@property(retain, nonatomic) NSArray *flattenedMenuElements;	// G=0x152831; S=0x152841; @synthesize=_flattenedMenuElements
@property(readonly, assign, nonatomic) BOOL isVisible;	// G=0x1517b1; 
@property(copy, nonatomic) id onDismiss;	// G=0x1527a1; S=0x1527b5; @synthesize=_onDismiss
@property(assign, nonatomic) __weak BRContextMenuControl *popUpMenu;	// G=0x1527fd; S=0x15281d; @synthesize=_popUpMenu
- (id)initWithContext:(id)context completionHandler:(id)handler;	// 0x151595
- (void).cxx_destruct;	// 0x152869
- (id)_flattenedMenuElementsForMenu:(id)menu;	// 0x152251
- (void)_makeJSObjectWithCompletionHandler:(id)completionHandler;	// 0x151b35
- (void)_onDismiss;	// 0x15264d
- (void)_showWithDocument:(id)document;	// 0x152449
// declared property getter: - (id)context;	// 0x15276d
- (void)contextMenuDidDismiss:(id)contextMenu;	// 0x151b25
- (id)controlFactory;	// 0x151965
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x151a39
- (id)dataAtIndex:(long)index;	// 0x1519a5
- (long)dataCount;	// 0x151969
- (void)dealloc;	// 0x151721
- (void)destroyJSObject;	// 0x151611
- (void)dismiss;	// 0x1517dd
// declared property getter: - (id)feedDocument;	// 0x1527c5
// declared property getter: - (id)flattenedMenuElements;	// 0x152831
- (id)hashForDataAtIndex:(long)index;	// 0x1519f1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x151aed
// declared property getter: - (BOOL)isVisible;	// 0x1517b1
// declared property getter: - (id)onDismiss;	// 0x1527a1
// declared property getter: - (id)popUpMenu;	// 0x1527fd
// declared property setter: - (void)setContext:(id)context;	// 0x15278d
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x1527d5
// declared property setter: - (void)setFlattenedMenuElements:(id)elements;	// 0x152841
// declared property setter: - (void)setOnDismiss:(id)dismiss;	// 0x1527b5
// declared property setter: - (void)setPopUpMenu:(id)menu;	// 0x15281d
- (void)updateWithFeedElement:(id)feedElement;	// 0x15183d
- (void)updateWithPropertyList:(id)propertyList;	// 0x151839
@end

