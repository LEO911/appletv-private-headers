/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject {
	NSMutableDictionary *_map;	// 4 = 0x4
	NSMutableArray *_lifetimeHelper;	// 8 = 0x8
}
- (id)init;	// 0x2f719a95
- (id)_keyForWebFrame:(id)webFrame;	// 0x2f719b99
- (id)allValues;	// 0x2f719c05
- (void)dealloc;	// 0x2f719b35
- (id)objectForKey:(id)key;	// 0x2f719bc9
- (void)removeAllObjects;	// 0x2f719c25
- (void)removeObjectForKey:(id)key;	// 0x2f719c65
- (void)setObject:(id)object forKey:(id)key;	// 0x2f719cc5
@end
