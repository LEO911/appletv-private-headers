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
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x35e94f51
- (void)_accessibilityActivate;	// 0x35f1a551
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x35ea5379
- (WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;	// 0x35f18e65
- (WebAccessibilityObjectWrapper *)_accessibilityListAncestor;	// 0x35f18e21
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x35f1a195
- (id)_accessibilityParentForSubview:(id)subview;	// 0x35f1a589
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x35f1a1e1
- (WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;	// 0x35f18ec1
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x35ea4c7d
- (id)_accessibilityWebDocumentView;	// 0x35f1a0d5
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x35f1aaf9
- (unsigned long long)_axAdjustableTrait;	// 0x35f18819
- (unsigned long long)_axButtonTrait;	// 0x35f187f9
- (unsigned long long)_axContainedByLandmarkTrait;	// 0x35f187b9
- (unsigned long long)_axContainedByListTrait;	// 0x35f187a9
- (unsigned long long)_axContainedByTableTrait;	// 0x35f187b1
- (unsigned long long)_axHasTextCursorTrait;	// 0x35f187d9
- (unsigned long long)_axHeaderTrait;	// 0x35f187a1
- (unsigned long long)_axImageTrait;	// 0x35f187e9
- (unsigned long long)_axLinkTrait;	// 0x35f18791
- (unsigned long long)_axMenuItemTrait;	// 0x35f18821
- (unsigned long long)_axNotEnabledTrait;	// 0x35f18831
- (unsigned long long)_axPopupButtonTrait;	// 0x35f18809
- (unsigned long long)_axRadioButtonTrait;	// 0x35f18839
- (unsigned long long)_axSecureTextFieldTrait;	// 0x35f187c9
- (unsigned long long)_axSelectedTrait;	// 0x35f18829
- (unsigned long long)_axStaticTextTrait;	// 0x35f18811
- (unsigned long long)_axTabButtonTrait;	// 0x35f187f1
- (unsigned long long)_axTextEntryTrait;	// 0x35f187d1
- (unsigned long long)_axTextOperationsAvailableTrait;	// 0x35f187e1
- (unsigned long long)_axToggleTrait;	// 0x35f18801
- (unsigned long long)_axVisitedTrait;	// 0x35f18799
- (unsigned long long)_axWebContentTrait;	// 0x35f187c1
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x35f19d69
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x35f1c415
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x35f1c065
- (BOOL)_prepareAccessibilityCall;	// 0x35ea453d
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x35f1cff1
- (BOOL)accessibilityARIAIsBusy;	// 0x35f1e31d
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x35f1e409
- (id)accessibilityARIALiveRegionStatus;	// 0x35f1e359
- (id)accessibilityARIARelevantStatus;	// 0x35f1e3b1
- (CGPoint)accessibilityActivationPoint;	// 0x35f19f55
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x35f18841
- (NSRange)accessibilityColumnRange;	// 0x35f19489
- (id)accessibilityContainer;	// 0x35ea8629
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x35f1a911
- (void)accessibilityDecrement;	// 0x35f1aabd
- (id)accessibilityElementAtIndex:(int)index;	// 0x35ea759d
- (int)accessibilityElementCount;	// 0x35ea53cd
- (void)accessibilityElementDidBecomeFocused;	// 0x35f1a625
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x35f192a5
- (CGRect)accessibilityElementRect;	// 0x35f19ec1
- (id)accessibilityFlowToElements;	// 0x35f1a269
- (id)accessibilityFocusedUIElement;	// 0x35f1a08d
- (CGRect)accessibilityFrame;	// 0x35f19ffd
- (id)accessibilityHeaderElements;	// 0x35f18fc1
- (id)accessibilityHint;	// 0x35f19a69
- (id)accessibilityHitTest:(CGPoint)test;	// 0x35f18909
- (id)accessibilityIdentifier;	// 0x35f1e22d
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x35f1a8fd
- (void)accessibilityIncrement;	// 0x35f1aa81
- (id)accessibilityInvalidStatus;	// 0x35f1e445
- (BOOL)accessibilityIsComboBox;	// 0x35f19a29
- (id)accessibilityLabel;	// 0x35ea78b1
- (id)accessibilityLanguage;	// 0x35f18ca1
- (id)accessibilityLinkedElement;	// 0x35f1a411
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x35f1a695
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x35f1a925
- (AccessibilityObject *)accessibilityObject;	// 0x35ea8765
- (WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)textMarker;	// 0x35f1c9dd
- (id)accessibilityPlaceholderValue;	// 0x35f194e5
- (WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x35f18905
- (void)accessibilityPostedNotification:(int)notification;	// 0x35ea0799
- (BOOL)accessibilityRequired;	// 0x35f1a22d
- (NSRange)accessibilityRowRange;	// 0x35f19301
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x35f1e49d
- (id)accessibilitySpeechHint;	// 0x35f1e28d
- (id)accessibilityTitleElement;	// 0x35f18f79
- (unsigned long long)accessibilityTraits;	// 0x35ea479d
- (id)accessibilityURL;	// 0x35f19bed
- (id)accessibilityValue;	// 0x35f19539
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x35f1af61
- (id)attachmentView;	// 0x35ea87d5
- (id)attributedStringForRange:(NSRange)range;	// 0x35f1d20d
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x35ea8821
- (void)dealloc;	// 0x35eb39e1
- (void)detach;	// 0x35eaef19
- (BOOL)determineIsAccessibilityElement;	// 0x35ea45c9
- (NSRange)elementTextRange;	// 0x35f1c929
- (id)elementsForRange:(NSRange)range;	// 0x35f1d231
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x35f1dd4d
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x35f18ab1
- (BOOL)isAccessibilityElement;	// 0x35ea44ed
- (BOOL)isAttachment;	// 0x35ea5445
- (id)lineEndMarkerForMarker:(id)marker;	// 0x35f1d66d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x35f1d829
- (id)nextMarkerForMarker:(id)marker;	// 0x35f1d9e5
- (int)positionForTextMarker:(id)textMarker;	// 0x35f1c489
- (void)postChildrenChangedNotification;	// 0x35f1a61d
- (void)postFocusChangeNotification;	// 0x35f1a609
- (void)postInvalidStatusChangedNotification;	// 0x35f1a621
- (void)postLayoutChangeNotification;	// 0x35f1a611
- (void)postLiveRegionChangeNotification;	// 0x35f1a615
- (void)postLoadCompleteNotification;	// 0x35f1a619
- (void)postSelectedTextChangeNotification;	// 0x35f1a60d
- (id)previousMarkerForMarker:(id)marker;	// 0x35f1db99
- (id)selectedTextMarker;	// 0x35f1d405
- (id)selectionRangeString;	// 0x35f1d3d5
- (id)stringForRange:(NSRange)range;	// 0x35f1d1e9
- (id)stringForTextMarkers:(id)textMarkers;	// 0x35f1ab7d
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x35ea8131
- (AccessibilityTableCell *)tableCellParent;	// 0x35f18f01
- (AccessibilityTable *)tableParent;	// 0x35f18f3d
- (id)textMarkerForPoint:(CGPoint)point;	// 0x35f1e0c5
- (id)textMarkerForPosition:(int)position;	// 0x35f1cd89
- (id)textMarkerRange;	// 0x35f1c699
- (id)textMarkerRangeForSelection;	// 0x35f1cb1d
@end

