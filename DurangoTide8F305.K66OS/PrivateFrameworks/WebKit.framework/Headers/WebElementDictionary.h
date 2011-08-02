/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSDictionary.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x33fe006d
+ (void)initializeLookupTable;	// 0x33fe01d5
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x33fe0079
- (id)_absoluteImageURL;	// 0x33ffa25d
- (id)_absoluteLinkURL;	// 0x33ff9fed
- (id)_altDisplayString;	// 0x33ffa4bd
- (id)_domNode;	// 0x33ffa5e5
- (void)_fillCache;	// 0x33ffa7b5
- (id)_image;	// 0x33ffa36d
- (id)_imageRect;	// 0x33ff9c0d
- (id)_isContentEditable;	// 0x33ff9d19
- (id)_isInScrollBar;	// 0x33ff9ce1
- (id)_isLiveLink;	// 0x33ff9d4d
- (id)_isSelected;	// 0x33ffa229
- (id)_spellingToolTip;	// 0x33ffa391
- (id)_targetWebFrame;	// 0x33ff9fd1
- (id)_textContent;	// 0x33ff9d81
- (id)_title;	// 0x33ffa0fd
- (id)_titleDisplayString;	// 0x33ff9ea9
- (id)_webFrame;	// 0x33ff9cb1
- (unsigned)count;	// 0x33ff9c31
- (void)dealloc;	// 0x33fe0ce1
- (void)finalize;	// 0x33ffa7e5
- (id)keyEnumerator;	// 0x33ff9c71
- (id)objectForKey:(id)key;	// 0x33ffa5fd
@end
