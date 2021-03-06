/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, NSIndexPath, UITableViewCellDeleteConfirmationView, NSString, UIScrollView, UITextField, UILongPressGestureRecognizer, UILabel, UIImageView, UITapGestureRecognizer, UITableView, UIControl, NSTimer, UIColor;

@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate> {
	UITableView *_tableView;	// 96 = 0x60
	id _layoutManager;	// 100 = 0x64
	id _target;	// 104 = 0x68
	SEL _editAction;	// 108 = 0x6c
	SEL _accessoryAction;	// 112 = 0x70
	id _oldEditingData;	// 116 = 0x74
	id _editingData;	// 120 = 0x78
	float _rightMargin;	// 124 = 0x7c
	int _indentationLevel;	// 128 = 0x80
	float _indentationWidth;	// 132 = 0x84
	NSString *_reuseIdentifier;	// 136 = 0x88
	UIView *_contentView;	// 140 = 0x8c
	UIImageView *_imageView;	// 144 = 0x90
	UILabel *_textLabel;	// 148 = 0x94
	UILabel *_detailTextLabel;	// 152 = 0x98
	UIView *_backgroundView;	// 156 = 0x9c
	UIView *_selectedBackgroundView;	// 160 = 0xa0
	UIView *_multipleSelectionBackgroundView;	// 164 = 0xa4
	UIView *_selectedOverlayView;	// 168 = 0xa8
	float _selectionFadeDuration;	// 172 = 0xac
	UIColor *_backgroundColor;	// 176 = 0xb0
	UIColor *_separatorColor;	// 180 = 0xb4
	UIColor *_topShadowColor;	// 184 = 0xb8
	UIColor *_bottomShadowColor;	// 188 = 0xbc
	UIColor *_sectionBorderColor;	// 192 = 0xc0
	UIView *_floatingSeparatorView;	// 196 = 0xc4
	UIView *_topShadowAnimationView;	// 200 = 0xc8
	UIView *_bottomShadowAnimationView;	// 204 = 0xcc
	id _badge;	// 208 = 0xd0
	CFDictionaryRef _unhighlightedStates;	// 212 = 0xd4
	id _highlightingSupport;	// 216 = 0xd8
	id _selectionSegueTemplate;	// 220 = 0xdc
	id _accessoryActionSegueTemplate;	// 224 = 0xe0
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
		unsigned isPigglyWigglyCell;
		unsigned deleteAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned separatorDrawsAsOverlay : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
	} _tableCellFlags;	// 228 = 0xe4
	UIControl *_accessoryView;	// 248 = 0xf8
	UIControl *_editingAccessoryView;	// 252 = 0xfc
	UIView *_customAccessoryView;	// 256 = 0x100
	UIView *_customEditingAccessoryView;	// 260 = 0x104
	UIView *_separatorView;	// 264 = 0x108
	UIView *_topSeparatorView;	// 268 = 0x10c
	UIView *_topShadowView;	// 272 = 0x110
	UITextField *_editableTextField;	// 276 = 0x114
	double _lastSelectionTime;	// 280 = 0x118
	NSTimer *_deselectTimer;	// 288 = 0x120
	float _textFieldOffset;	// 292 = 0x124
	float _indexBarWidth;	// 296 = 0x128
	UIEdgeInsets _separatorInset;	// 300 = 0x12c
	SEL _returnAction;	// 316 = 0x13c
	UIColor *_selectionTintColor;	// 320 = 0x140
	UIColor *_accessoryTintColor;	// 324 = 0x144
	UIImage *_reorderControlImage;	// 328 = 0x148
	UILongPressGestureRecognizer *_menuGesture;	// 332 = 0x14c
	NSIndexPath *_representedIndexPath;	// 336 = 0x150
	BOOL _isPigglyWigglyCell;	// 340 = 0x154
	UITableViewCellDeleteConfirmationView *_swipeToDeleteConfirmationView;	// 344 = 0x158
	UITapGestureRecognizer *_swipeToDeleteCancelationGesture;	// 348 = 0x15c
	UIScrollView *_wrapperView;	// 352 = 0x160
	float _swipeToDeleteDistancePulled;	// 356 = 0x164
}
@property(assign) SEL accessoryAction;	// G=0x2f69b12d; S=0x2f69b041; converted property
@property(retain) id accessoryActionSegueTemplate;	// G=0x2f6977d1; S=0x2f69778d; converted property
@property(assign, nonatomic) int accessoryType;	// G=0x2f42294d; S=0x2f423375; 
@property(retain, nonatomic) UIView *accessoryView;	// G=0x2f4a6e95; S=0x2f4992b1; 
@property(retain) UIColor *backgroundColor;	// G=0x2f427e31; S=0x2f423999; converted property
@property(retain, nonatomic) UIView *backgroundView;	// G=0x2f4abb59; S=0x2f4ab9f5; 
@property(retain) UIColor *bottomShadowColor;	// G=0x2f4ad001; S=0x2f427aad; converted property
@property(assign) BOOL clipsContents;	// G=0x2f699ae5; S=0x2f699a99; converted property
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x2f4230b5; 
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x2f49e381; 
@property(assign) BOOL drawingEnabled;	// G=0x2f570321; S=0x2f698cdd; converted property
@property(assign) SEL editAction;	// G=0x2f69b031; S=0x2f69b021; converted property
@property(readonly, retain) UITextField *editableTextField;	// G=0x2f69f091; converted property
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x2f411b79; S=0x2f699afd; 
@property(assign, nonatomic) int editingAccessoryType;	// G=0x2f423649; S=0x2f4934c5; 
@property(retain, nonatomic) UIView *editingAccessoryView;	// G=0x2f6999dd; S=0x2f503ced; 
@property(readonly, assign, nonatomic) int editingStyle;	// G=0x2f49360d; 
@property(retain) id font;	// G=0x2f699021; S=0x2f69900d; converted property
@property(assign) BOOL hidesAccessoryWhenEditing;	// G=0x2f699a7d; S=0x2f699a15; converted property
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x2f47ad05; S=0x2f428131; 
@property(retain) id image;	// G=0x2f699261; S=0x2f699235; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x2f454a01; 
@property(assign, nonatomic) int indentationLevel;	// G=0x2f4271e5; S=0x2f517a3d; 
@property(assign, nonatomic) float indentationWidth;	// G=0x2f4271f5; S=0x2f517a65; 
@property(retain) id layoutManager;	// G=0x2f4220fd; S=0x2f4220b9; converted property
@property(assign) int lineBreakMode;	// G=0x2f69914d; S=0x2f699109; converted property
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;	// G=0x2f699365; S=0x2f69939d; 
@property(retain) id oldEditingData;	// G=0x2f6954f5; S=0x2f695545; converted property
@property(assign) SEL returnAction;	// G=0x2f69f101; S=0x2f69f0f1; converted property
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x2f465601; 
@property(retain) UIColor *sectionBorderColor;	// G=0x2f4abcd1; S=0x2f427b59; converted property
@property(assign) int sectionLocation;	// G=0x2f422915; S=0x2f69b449; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x2f4549c9; S=0x2f427e7d; 
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x2f4993d1; S=0x2f454661; 
@property(retain) id selectedImage;	// G=0x2f6992b5; S=0x2f699289; converted property
@property(readonly, retain) UIView *selectedOverlayView;	// G=0x2f69981d; converted property
@property(retain) id selectedTextColor;	// G=0x2f69920d; S=0x2f6991e1; converted property
@property(assign) float selectionFadeDuration;	// G=0x2f50517d; S=0x2f421f45; converted property
@property(retain) id selectionSegueTemplate;	// G=0x2f500e3d; S=0x2f697809; converted property
@property(assign, nonatomic) int selectionStyle;	// G=0x2f4aca35; S=0x2f411b95; 
@property(retain) UIColor *selectionTintColor;	// G=0x2f4ff005; S=0x2f6995b1; converted property
@property(retain) UIColor *separatorColor;	// G=0x2f4aca71; S=0x2f42784d; converted property
@property(assign, nonatomic) UIEdgeInsets separatorInset;	// G=0x2f69f301; S=0x2f69f249; 
@property(assign) int separatorStyle;	// G=0x2f465311; S=0x2f40c7cd; converted property
@property(assign, nonatomic) BOOL shouldIndentWhileEditing;	// G=0x2f4aae45; S=0x2f699895; 
@property(readonly, assign, nonatomic) BOOL showingDeleteConfirmation;	// G=0x2f4255a1; 
@property(assign, nonatomic) BOOL showsReorderControl;	// G=0x2f454d81; S=0x2f49dfb9; 
@property(retain) id tableBackgroundColor;	// G=0x2f4aced1; S=0x2f699501; converted property
@property(assign) int tableViewStyle;	// G=0x2f69dde5; S=0x2f69ddfd; converted property
@property(retain) id target;	// G=0x2f69b011; S=0x2f69af29; converted property
@property(retain) id text;	// G=0x2f698f69; S=0x2f698ea9; converted property
@property(assign) int textAlignment;	// G=0x2f6990e1; S=0x2f6990b5; converted property
@property(retain) id textColor;	// G=0x2f6991b9; S=0x2f699175; converted property
@property(assign) float textFieldOffset;	// G=0x2f69f0b1; S=0x2f69f0a1; converted property
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x2f49e009; 
@property(retain) UIColor *topShadowColor;	// G=0x2f4abc09; S=0x2f427959; converted property
@property(assign) BOOL wasSwiped;	// G=0x2f69d7cd; S=0x2f69d79d; converted property
+ (id)_defaultTopShadowColor;	// 0x2f69b651
- (id)init;	// 0x2f697c25
- (id)initWithCoder:(id)coder;	// 0x2f697ed9
- (id)initWithFrame:(CGRect)frame;	// 0x2f697c55
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x2f540089
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x2f421669
- (SEL)_accessoryAction;	// 0x2f69d9c9
- (id)_accessoryTintColor;	// 0x2f6999a5
- (id)_accessoryView:(BOOL)view;	// 0x2f69d295
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x2f6995c9
- (void)_animateFloatingSeparatorForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x2f69bad1
- (void)_animateInnerShadowForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x2f69bf71
- (void)_animateSwipeCancelation;	// 0x2f69ec99
- (BOOL)_animating;	// 0x2f69f231
- (BOOL)_backgroundColorSet;	// 0x2f423871
- (float)_backgroundInset;	// 0x2f69cbad
- (id)_backgroundView:(BOOL)view;	// 0x2f69d621
- (id)_badge;	// 0x2f696cad
- (id)_badge:(BOOL)badge;	// 0x2f69b811
- (id)_badgeText;	// 0x2f4b53ad
- (void)_beginSwiping;	// 0x2f69e6f1
- (BOOL)_canDoSeparatorLayout;	// 0x2f697b69
- (BOOL)_canDrawContent;	// 0x2f4219f5
- (void)_cancelInternalPerformRequests;	// 0x2f4ff03d
- (id)_checkmarkImage:(BOOL)image;	// 0x2f695d41
- (void)_clearOpaqueViewState:(id)state;	// 0x2f500c35
- (id)_contentBackgroundColor;	// 0x2f49e2e9
- (id)_createRemoveControlForStyle:(int)style;	// 0x2f6960cd
- (void)_createReorderControlIfNeeded;	// 0x2f695589
- (id)_currentAccessoryView:(BOOL)view;	// 0x2f695ff5
- (id)_customAccessoryView:(BOOL)view;	// 0x2f69d601
- (id)_customEditingAccessoryView:(BOOL)view;	// 0x2f69d611
- (id)_defaultAccessoryView;	// 0x2f69d1e9
- (id)_defaultFont;	// 0x2f696a39
- (void)_delayedDeselect;	// 0x2f69978d
- (CGRect)_delegateConfirmationRect;	// 0x2f699f05
- (id)_deleteConfirmationView;	// 0x2f69ee4d
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x2f69da39
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x2f69d9d9
- (void)_deselectAnimationFinished;	// 0x2f505d11
- (id)_detailDisclosureImage:(BOOL)image;	// 0x2f695a71
- (id)_detailTextLabel;	// 0x2f696b21
- (id)_detailTextLabel:(BOOL)label;	// 0x2f69b78d
- (void)_didCreateContentView;	// 0x2f698cd5
- (id)_disclosureImage:(BOOL)image;	// 0x2f695de1
- (id)_disclosurePressedImage:(BOOL)image;	// 0x2f695ef5
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x2f699815
- (void)_drawSeparatorInRect:(CGRect)rect;	// 0x2f69ba09
- (BOOL)_drawsSeparatorAtTopOfSection;	// 0x2f697c0d
- (BOOL)_drawsTopSeparatorDuringReordering;	// 0x2f697721
- (BOOL)_drawsTopShadow;	// 0x2f69dc09
- (id)_editableTextField;	// 0x2f696b99
- (id)_editableTextField:(BOOL)field;	// 0x2f69b7b9
- (id)_editingAccessoryView:(BOOL)view;	// 0x2f69d2cd
- (float)_editingButtonOffset;	// 0x2f69cb79
- (void)_editingTransitionAnimationDidStop:(id)_editingTransitionAnimation finished:(id)finished context:(id)context;	// 0x2f696d25
- (id)_encodableSubviews;	// 0x2f698801
- (void)_endSwiping:(BOOL)swiping;	// 0x2f697d65
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x2f6958c9
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x2f696d55
- (void)_grabberBeganReorder:(id)reorder;	// 0x2f69c689
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x2f69c6b9
- (void)_grabberReleased:(id)released;	// 0x2f69c855
- (void)_handleSwipeDeleteCancelation:(id)cancelation;	// 0x2f69eb9d
- (BOOL)_hasAccessoryView;	// 0x2f69d72d
- (BOOL)_hasEditingAccessoryView;	// 0x2f69d765
- (CGSize)_imageInsetSize;	// 0x2f696d15
- (id)_imageView;	// 0x2f696c11
- (id)_imageView:(BOOL)view;	// 0x2f69b7e5
- (float)_indexBarWidth;	// 0x2f69f3f9
- (id)_indexPath;	// 0x2f69e2fd
- (BOOL)_isCurrentlyConsideredHighlighted;	// 0x2f696651
- (BOOL)_isDeleteAnimationInProgress;	// 0x2f69ee5d
- (BOOL)_isHighlighted;	// 0x2f49e349
- (BOOL)_isPigglyWigglyCell;	// 0x2f69e5b1
- (BOOL)_isReorderable;	// 0x2f69cb4d
- (BOOL)_isUsingOldStyleMultiselection;	// 0x2f69e2c9
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x2f696281
- (void)_longPressGestureRecognized:(id)recognized;	// 0x2f696da1
- (float)_marginWidth;	// 0x2f69e379
- (void)_menuDismissed:(id)dismissed;	// 0x2f697575
- (id)_multiselectBackgroundColor;	// 0x2f4ff665
- (void)_multiselectColorChanged;	// 0x2f69e061
- (BOOL)_needsSetup;	// 0x2f69dbf1
- (id)_newAccessoryView;	// 0x2f69cd0d
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x2f69b5d9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x2f698745
- (void)_releaseRemoveControl;	// 0x2f696189
- (void)_releaseReorderingControl;	// 0x2f695739
- (id)_removeControl;	// 0x2f69c661
- (void)_removeFloatingSeparator;	// 0x2f69bf31
- (void)_removeInnerShadow;	// 0x2f69c5f1
- (void)_removeRemoveControl;	// 0x2f696229
- (id)_reorderControlImage;	// 0x2f69b8ed
- (id)_reorderingControl;	// 0x2f6956bd
- (id)_reorderingSeparatorView;	// 0x2f6956f9
- (void)_resetSelectionTimer;	// 0x2f6976c5
- (float)_rightMarginWidth;	// 0x2f69e4d9
- (void)_saveOpaqueViewState:(id)state;	// 0x2f4ff7a1
- (id)_scriptingInfo;	// 0x2f69def1
- (id)_selectedBackgroundView:(BOOL)view;	// 0x2f69d631
- (BOOL)_separatorDrawsAsOverlay;	// 0x2f69f3e1
- (CGRect)_separatorFrame;	// 0x2f6978c9
- (void)_setAccessoryAction:(SEL)action;	// 0x2f69d8dd
- (void)_setAccessoryTintColor:(id)color;	// 0x2f69991d
- (void)_setAnimating:(BOOL)animating;	// 0x2f69f111
- (void)_setBadgeText:(id)text;	// 0x2f6992dd
- (void)_setDrawsSeparatorAtTopOfSection:(BOOL)section;	// 0x2f697bb9
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x2f69b995
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)reordering;	// 0x2f69773d
- (void)_setDrawsTopShadow:(BOOL)shadow;	// 0x2f69dc2d
- (void)_setEditingStyle:(int)style;	// 0x2f69b8fd
- (void)_setFont:(id)font layout:(BOOL)layout;	// 0x2f698f95
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x2f695801
- (void)_setHiddenForReuse:(BOOL)reuse;	// 0x2f40c905
- (void)_setIndexBarWidth:(float)width;	// 0x2f69f409
- (void)_setIndexPath:(id)path;	// 0x2f69e335
- (void)_setIsPigglyWigglyCell:(BOOL)cell;	// 0x2f69e5c1
- (void)_setMarginWidth:(float)width;	// 0x2f69e4a1
- (void)_setMultiselecting:(BOOL)multiselecting;	// 0x2f69e09d
- (void)_setNeedsSetup:(BOOL)setup;	// 0x2f69dbb5
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x2f4ffc25
- (void)_setReorderControlImage:(id)image;	// 0x2f69b8a9
- (void)_setReordering:(BOOL)reordering;	// 0x2f69771d
- (void)_setRightMarginWidth:(float)width;	// 0x2f69e56d
- (void)_setSelectionStyle:(int)style selectionTintColor:(id)color;	// 0x2f411bb5
- (void)_setSeparatorDrawsAsOverlay:(BOOL)overlay;	// 0x2f69f33d
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)_set;	// 0x2f69784d
- (void)_setShouldIndentWhileEditing:(BOOL)_set;	// 0x2f69b965
- (void)_setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x2f69b931
- (void)_setShowsReorderControl:(BOOL)control;	// 0x2f69b83d
- (void)_setTableBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x2f427755
- (void)_setTableView:(id)view;	// 0x2f69b6e5
- (void)_setTarget:(id)target;	// 0x2f69d7e5
- (void)_setupMenuGesture;	// 0x2f4229ed
- (void)_setupSelectedBackgroundView;	// 0x2f49941d
- (void)_setupTableViewCellCommon;	// 0x2f421c8d
- (BOOL)_shouldHaveFullLengthBottomSeparator;	// 0x2f6978b1
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x2f69e19d
- (BOOL)_showFullLengthTopSeparatorForTopOfGroupedSection;	// 0x2f6979f9
- (void)_showReorderControl;	// 0x2f696785
- (void)_startToEditTextField;	// 0x2f69e025
- (void)_swipeAccessoryButtonPushed;	// 0x2f69f061
- (void)_swipeDeleteButtonPushed;	// 0x2f69f015
- (id)_swipeToDeleteConfirmationView;	// 0x2f6954e5
- (void)_syncAccessoryViewsIfNecessary;	// 0x2f42352d
- (id)_tableView;	// 0x2f69b6f5
- (void)_tableViewDidUpdateMarginWidth;	// 0x2f69e60d
- (id)_target;	// 0x2f69d8cd
- (CGSize)_textInsetSize;	// 0x2f696d05
- (id)_textLabel;	// 0x2f696aa9
- (id)_textLabel:(BOOL)label;	// 0x2f69b761
- (id)_tintedDisclosureImagePressed:(BOOL)pressed;	// 0x2f6958d9
- (id)_titleForDeleteConfirmationButton;	// 0x2f69d6fd
- (CGRect)_topSeparatorFrame;	// 0x2f697a3d
- (void)_topShadowDidFadeOut;	// 0x2f697539
- (id)_topShadowView:(BOOL)view;	// 0x2f69d6ed
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x2f69c88d
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)highlightIgnoringSelection;	// 0x2f696721
- (void)_updateCellMaskViewsForView:(id)view backdropView:(id)view2;	// 0x2f69b141
- (void)_updateContentClip;	// 0x2f696f2d
- (void)_updateFullWidthSwipeDeletionView;	// 0x2f69b491
- (void)_updateHighlightColors;	// 0x2f465e29
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x2f69668d
- (void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;	// 0x2f696341
- (void)_updateSeparatorContent;	// 0x2f42721d
- (void)_updateSeparatorContent:(BOOL)content;	// 0x2f69e5d1
- (void)_updateSwipeWithDistancePulled:(float)distancePulled;	// 0x2f69ec71
- (void)_updateTopShadowView:(BOOL)view;	// 0x2f6970cd
- (void)_updateViewsForDeleteButton;	// 0x2f69ee75
- (void)_updateWrapperContentInset;	// 0x2f697c81
- (void)_willBeDeleted;	// 0x2f69c8bd
- (id)_wrapperView;	// 0x2f69ee3d
// converted property getter: - (SEL)accessoryAction;	// 0x2f69b12d
// converted property getter: - (id)accessoryActionSegueTemplate;	// 0x2f6977d1
- (CGRect)accessoryRectForBounds:(CGRect)bounds accessoryView:(id)view isCustom:(BOOL)custom;	// 0x2f69aba5
// declared property getter: - (int)accessoryType;	// 0x2f42294d
// declared property getter: - (id)accessoryView;	// 0x2f4a6e95
// converted property getter: - (id)backgroundColor;	// 0x2f427e31
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x2f699fb1
// declared property getter: - (id)backgroundView;	// 0x2f4abb59
// converted property getter: - (id)bottomShadowColor;	// 0x2f4ad001
- (void)bringSubviewToFront:(id)front;	// 0x2f699735
- (BOOL)canBecomeFirstResponder;	// 0x2f69b461
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x2f697629
// converted property getter: - (BOOL)clipsContents;	// 0x2f699ae5
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x2f69a089
- (CGRect)contentRectForState:(unsigned)state;	// 0x2f69b241
// declared property getter: - (id)contentView;	// 0x2f4230b5
- (void)copy:(id)copy;	// 0x2f69769d
- (unsigned)currentStateMask;	// 0x2f4644e5
- (void)cut:(id)cut;	// 0x2f697689
- (void)dealloc;	// 0x2f505191
- (void)deleteConfirmationControlWasCancelled:(id)cancelled;	// 0x2f69ca95
- (void)deleteConfirmationControlWasClicked:(id)clicked;	// 0x2f69ca65
// declared property getter: - (id)detailTextLabel;	// 0x2f49e381
- (void)didMoveToSuperview;	// 0x2f427d7d
- (void)didTransitionToState:(unsigned)state;	// 0x2f504c05
// converted property getter: - (BOOL)drawingEnabled;	// 0x2f570321
// converted property getter: - (SEL)editAction;	// 0x2f69b031
- (void)editControlWasClicked:(id)clicked;	// 0x2f69c9e5
- (CGRect)editRectForBounds:(CGRect)bounds;	// 0x2f69ab65
// converted property getter: - (id)editableTextField;	// 0x2f69f091
// declared property getter: - (int)editingAccessoryType;	// 0x2f423649
// declared property getter: - (id)editingAccessoryView;	// 0x2f6999dd
- (id)editingData:(BOOL)data;	// 0x2f69cc25
// declared property getter: - (int)editingStyle;	// 0x2f49360d
- (void)encodeWithCoder:(id)coder;	// 0x2f698821
// converted property getter: - (id)font;	// 0x2f699021
// converted property getter: - (BOOL)hidesAccessoryWhenEditing;	// 0x2f699a7d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f69e65d
// converted property getter: - (id)image;	// 0x2f699261
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x2f69a9d9
// declared property getter: - (id)imageView;	// 0x2f454a01
// declared property getter: - (int)indentationLevel;	// 0x2f4271e5
// declared property getter: - (float)indentationWidth;	// 0x2f4271f5
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x2f69c925
- (BOOL)isAtLeastHalfSelected;	// 0x2f6997d1
// declared property getter: - (BOOL)isEditing;	// 0x2f411b79
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x2f6dcac1
// declared property getter: - (BOOL)isHighlighted;	// 0x2f47ad05
// declared property getter: - (BOOL)isSelected;	// 0x2f4549c9
// converted property getter: - (id)layoutManager;	// 0x2f4220fd
- (void)layoutSubviews;	// 0x2f423e19
// converted property getter: - (int)lineBreakMode;	// 0x2f69914d
// declared property getter: - (id)multipleSelectionBackgroundView;	// 0x2f699365
// converted property getter: - (id)oldEditingData;	// 0x2f6954f5
- (void)paste:(id)paste;	// 0x2f6976b1
- (void)prepareForReuse;	// 0x2f465a49
- (CGRect)removeControl:(id)control endFrameForTarget:(id)target;	// 0x2f69dd29
- (CGRect)removeControl:(id)control startFrameForTarget:(id)target;	// 0x2f69dc81
- (void)removeControl:(id)control wasCanceledForTarget:(id)target;	// 0x2f69dda1
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x2f69c8e5
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x2f69c955
- (void)removeEditingData;	// 0x2f69cce1
- (void)removeFromSuperview;	// 0x2f4fb305
- (CGRect)reorderRectForBounds:(CGRect)bounds;	// 0x2f69ae25
// converted property getter: - (SEL)returnAction;	// 0x2f69f101
// declared property getter: - (id)reuseIdentifier;	// 0x2f465601
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x2f697ead
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x2f697e91
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x2f697ec1
// converted property getter: - (id)sectionBorderColor;	// 0x2f4abcd1
// converted property getter: - (int)sectionLocation;	// 0x2f422915
// declared property getter: - (id)selectedBackgroundView;	// 0x2f4993d1
- (void)selectedBackgroundViewChange:(id)change finished:(id)finished context:(id)context;	// 0x2f699331
// converted property getter: - (id)selectedImage;	// 0x2f6992b5
// converted property getter: - (id)selectedOverlayView;	// 0x2f69981d
// converted property getter: - (id)selectedTextColor;	// 0x2f69920d
// converted property getter: - (float)selectionFadeDuration;	// 0x2f50517d
- (float)selectionPercent;	// 0x2f6997e5
// converted property getter: - (id)selectionSegueTemplate;	// 0x2f500e3d
// declared property getter: - (int)selectionStyle;	// 0x2f4aca35
// converted property getter: - (id)selectionTintColor;	// 0x2f4ff005
- (void)sendSubviewToBack:(id)back;	// 0x2f6996dd
// converted property getter: - (id)separatorColor;	// 0x2f4aca71
// declared property getter: - (UIEdgeInsets)separatorInset;	// 0x2f69f301
// converted property getter: - (int)separatorStyle;	// 0x2f465311
// converted property setter: - (void)setAccessoryAction:(SEL)action;	// 0x2f69b041
// converted property setter: - (void)setAccessoryActionSegueTemplate:(id)aTemplate;	// 0x2f69778d
// declared property setter: - (void)setAccessoryType:(int)type;	// 0x2f423375
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x2f4992b1
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x2f423999
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x2f4ab9f5
// converted property setter: - (void)setBottomShadowColor:(id)color;	// 0x2f427aad
// converted property setter: - (void)setClipsContents:(BOOL)contents;	// 0x2f699a99
// converted property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x2f698cdd
// converted property setter: - (void)setEditAction:(SEL)action;	// 0x2f69b021
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x2f699afd
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x2f411681
// declared property setter: - (void)setEditingAccessoryType:(int)type;	// 0x2f4934c5
// declared property setter: - (void)setEditingAccessoryView:(id)view;	// 0x2f503ced
- (void)setEditingStyle:(int)style;	// 0x2f69982d
// converted property setter: - (void)setFont:(id)font;	// 0x2f69900d
- (void)setFrame:(CGRect)frame;	// 0x2f421a41
// converted property setter: - (void)setHidesAccessoryWhenEditing:(BOOL)editing;	// 0x2f699a15
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x2f428131
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x2f428145
// converted property setter: - (void)setImage:(id)image;	// 0x2f699235
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x2f517a3d
// declared property setter: - (void)setIndentationWidth:(float)width;	// 0x2f517a65
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x2f4220b9
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x2f699109
// declared property setter: - (void)setMultipleSelectionBackgroundView:(id)view;	// 0x2f69939d
// converted property setter: - (void)setOldEditingData:(id)data;	// 0x2f695545
- (void)setPlaceHolderValue:(id)value;	// 0x2f69f0c1
// converted property setter: - (void)setReturnAction:(SEL)action;	// 0x2f69f0f1
- (void)setReuseIdentifier:(id)identifier;	// 0x2f69956d
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x2f427b59
// converted property setter: - (void)setSectionLocation:(int)location;	// 0x2f69b449
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x2f412059
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x2f427e7d
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x2f427e91
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x2f454661
- (void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;	// 0x2f454679
// converted property setter: - (void)setSelectedImage:(id)image;	// 0x2f699289
// converted property setter: - (void)setSelectedTextColor:(id)color;	// 0x2f6991e1
// converted property setter: - (void)setSelectionFadeDuration:(float)duration;	// 0x2f421f45
// converted property setter: - (void)setSelectionSegueTemplate:(id)aTemplate;	// 0x2f697809
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x2f411b95
// converted property setter: - (void)setSelectionTintColor:(id)color;	// 0x2f6995b1
// converted property setter: - (void)setSeparatorColor:(id)color;	// 0x2f42784d
// declared property setter: - (void)setSeparatorInset:(UIEdgeInsets)inset;	// 0x2f69f249
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x2f40c7cd
// declared property setter: - (void)setShouldIndentWhileEditing:(BOOL)indentWhileEditing;	// 0x2f699895
- (void)setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x2f699b11
// declared property setter: - (void)setShowsReorderControl:(BOOL)control;	// 0x2f49dfb9
// converted property setter: - (void)setTableBackgroundColor:(id)color;	// 0x2f699501
// converted property setter: - (void)setTableViewStyle:(int)style;	// 0x2f69ddfd
// converted property setter: - (void)setTarget:(id)target;	// 0x2f69af29
// converted property setter: - (void)setText:(id)text;	// 0x2f698ea9
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x2f6990b5
// converted property setter: - (void)setTextColor:(id)color;	// 0x2f699175
// converted property setter: - (void)setTextFieldOffset:(float)offset;	// 0x2f69f0a1
// converted property setter: - (void)setTopShadowColor:(id)color;	// 0x2f427959
// converted property setter: - (void)setWasSwiped:(BOOL)swiped;	// 0x2f69d79d
// declared property getter: - (BOOL)shouldIndentWhileEditing;	// 0x2f4aae45
- (void)showSelectedBackgroundView:(BOOL)view animated:(BOOL)animated;	// 0x2f4ff07d
// declared property getter: - (BOOL)showingDeleteConfirmation;	// 0x2f4255a1
// declared property getter: - (BOOL)showsReorderControl;	// 0x2f454d81
- (int)style;	// 0x2f427205
// converted property getter: - (id)tableBackgroundColor;	// 0x2f4aced1
// converted property getter: - (int)tableViewStyle;	// 0x2f69dde5
// converted property getter: - (id)target;	// 0x2f69b011
// converted property getter: - (id)text;	// 0x2f698f69
// converted property getter: - (int)textAlignment;	// 0x2f6990e1
// converted property getter: - (id)textColor;	// 0x2f6991b9
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x2f69f0ed
// converted property getter: - (float)textFieldOffset;	// 0x2f69f0b1
// declared property getter: - (id)textLabel;	// 0x2f49e009
- (CGRect)textRectForContentRect:(CGRect)contentRect;	// 0x2f69a4c9
// converted property getter: - (id)topShadowColor;	// 0x2f4abc09
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f4fe295
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f69b3e1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f5001d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f69b28d
// converted property getter: - (BOOL)wasSwiped;	// 0x2f69d7cd
- (void)willMoveToSuperview:(id)superview;	// 0x2f427be1
- (void)willTransitionToState:(unsigned)state;	// 0x2f503f69
@end

