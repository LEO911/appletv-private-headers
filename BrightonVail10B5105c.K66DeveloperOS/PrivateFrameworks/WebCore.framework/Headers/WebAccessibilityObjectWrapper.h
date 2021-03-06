/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebAccessibilityObjectWrapper : NSObject {
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x36958619
- (void)_accessibilityActivate;	// 0x369ddc51
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x36968a39
- (WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;	// 0x369dc565
- (WebAccessibilityObjectWrapper *)_accessibilityListAncestor;	// 0x369dc521
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x369dd895
- (id)_accessibilityParentForSubview:(id)subview;	// 0x369ddc89
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x369dd8e1
- (WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;	// 0x369dc5c1
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x3696833d
- (id)_accessibilityWebDocumentView;	// 0x369dd7d5
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x369de1f9
- (unsigned long long)_axAdjustableTrait;	// 0x369dbf19
- (unsigned long long)_axButtonTrait;	// 0x369dbef9
- (unsigned long long)_axContainedByLandmarkTrait;	// 0x369dbeb9
- (unsigned long long)_axContainedByListTrait;	// 0x369dbea9
- (unsigned long long)_axContainedByTableTrait;	// 0x369dbeb1
- (unsigned long long)_axHasTextCursorTrait;	// 0x369dbed9
- (unsigned long long)_axHeaderTrait;	// 0x369dbea1
- (unsigned long long)_axImageTrait;	// 0x369dbee9
- (unsigned long long)_axLinkTrait;	// 0x369dbe91
- (unsigned long long)_axMenuItemTrait;	// 0x369dbf21
- (unsigned long long)_axNotEnabledTrait;	// 0x369dbf31
- (unsigned long long)_axPopupButtonTrait;	// 0x369dbf09
- (unsigned long long)_axRadioButtonTrait;	// 0x369dbf39
- (unsigned long long)_axSecureTextFieldTrait;	// 0x369dbec9
- (unsigned long long)_axSelectedTrait;	// 0x369dbf29
- (unsigned long long)_axStaticTextTrait;	// 0x369dbf11
- (unsigned long long)_axTabButtonTrait;	// 0x369dbef1
- (unsigned long long)_axTextEntryTrait;	// 0x369dbed1
- (unsigned long long)_axTextOperationsAvailableTrait;	// 0x369dbee1
- (unsigned long long)_axToggleTrait;	// 0x369dbf01
- (unsigned long long)_axVisitedTrait;	// 0x369dbe99
- (unsigned long long)_axWebContentTrait;	// 0x369dbec1
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x369dd469
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x369dfb15
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x369df765
- (BOOL)_prepareAccessibilityCall;	// 0x36967bfd
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x369e06f1
- (BOOL)accessibilityARIAIsBusy;	// 0x369e1a1d
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x369e1b09
- (id)accessibilityARIALiveRegionStatus;	// 0x369e1a59
- (id)accessibilityARIARelevantStatus;	// 0x369e1ab1
- (CGPoint)accessibilityActivationPoint;	// 0x369dd655
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x369dbf41
- (NSRange)accessibilityColumnRange;	// 0x369dcb89
- (id)accessibilityContainer;	// 0x3696bce9
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x369de011
- (void)accessibilityDecrement;	// 0x369de1bd
- (id)accessibilityElementAtIndex:(int)index;	// 0x3696ac5d
- (int)accessibilityElementCount;	// 0x36968a8d
- (void)accessibilityElementDidBecomeFocused;	// 0x369ddd25
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x369dc9a5
- (CGRect)accessibilityElementRect;	// 0x369dd5c1
- (id)accessibilityFlowToElements;	// 0x369dd969
- (id)accessibilityFocusedUIElement;	// 0x369dd78d
- (CGRect)accessibilityFrame;	// 0x369dd6fd
- (id)accessibilityHeaderElements;	// 0x369dc6c1
- (id)accessibilityHint;	// 0x369dd169
- (id)accessibilityHitTest:(CGPoint)test;	// 0x369dc009
- (id)accessibilityIdentifier;	// 0x369e192d
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x369ddffd
- (void)accessibilityIncrement;	// 0x369de181
- (id)accessibilityInvalidStatus;	// 0x369e1b45
- (BOOL)accessibilityIsComboBox;	// 0x369dd129
- (id)accessibilityLabel;	// 0x3696af71
- (id)accessibilityLanguage;	// 0x369dc3a1
- (id)accessibilityLinkedElement;	// 0x369ddb11
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x369ddd95
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x369de025
- (AccessibilityObject *)accessibilityObject;	// 0x3696be25
- (WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)textMarker;	// 0x369e00dd
- (id)accessibilityPlaceholderValue;	// 0x369dcbe5
- (WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x369dc005
- (void)accessibilityPostedNotification:(int)notification;	// 0x36963e59
- (BOOL)accessibilityRequired;	// 0x369dd92d
- (NSRange)accessibilityRowRange;	// 0x369dca01
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x369e1b9d
- (id)accessibilitySpeechHint;	// 0x369e198d
- (id)accessibilityTitleElement;	// 0x369dc679
- (unsigned long long)accessibilityTraits;	// 0x36967e5d
- (id)accessibilityURL;	// 0x369dd2ed
- (id)accessibilityValue;	// 0x369dcc39
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x369de661
- (id)attachmentView;	// 0x3696be95
- (id)attributedStringForRange:(NSRange)range;	// 0x369e090d
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x3696bee1
- (void)dealloc;	// 0x369770a1
- (void)detach;	// 0x369725d9
- (BOOL)determineIsAccessibilityElement;	// 0x36967c89
- (NSRange)elementTextRange;	// 0x369e0029
- (id)elementsForRange:(NSRange)range;	// 0x369e0931
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x369e144d
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x369dc1b1
- (BOOL)isAccessibilityElement;	// 0x36967bad
- (BOOL)isAttachment;	// 0x36968b05
- (id)lineEndMarkerForMarker:(id)marker;	// 0x369e0d6d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x369e0f29
- (id)nextMarkerForMarker:(id)marker;	// 0x369e10e5
- (int)positionForTextMarker:(id)textMarker;	// 0x369dfb89
- (void)postChildrenChangedNotification;	// 0x369ddd1d
- (void)postFocusChangeNotification;	// 0x369ddd09
- (void)postInvalidStatusChangedNotification;	// 0x369ddd21
- (void)postLayoutChangeNotification;	// 0x369ddd11
- (void)postLiveRegionChangeNotification;	// 0x369ddd15
- (void)postLoadCompleteNotification;	// 0x369ddd19
- (void)postSelectedTextChangeNotification;	// 0x369ddd0d
- (id)previousMarkerForMarker:(id)marker;	// 0x369e1299
- (id)selectedTextMarker;	// 0x369e0b05
- (id)selectionRangeString;	// 0x369e0ad5
- (id)stringForRange:(NSRange)range;	// 0x369e08e9
- (id)stringForTextMarkers:(id)textMarkers;	// 0x369de27d
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x3696b7f1
- (AccessibilityTableCell *)tableCellParent;	// 0x369dc601
- (AccessibilityTable *)tableParent;	// 0x369dc63d
- (id)textMarkerForPoint:(CGPoint)point;	// 0x369e17c5
- (id)textMarkerForPosition:(int)position;	// 0x369e0489
- (id)textMarkerRange;	// 0x369dfd99
- (id)textMarkerRangeForSelection;	// 0x369e021d
@end

