/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library


@interface NSCoder (XPCSafeDecoding)
- (id)_safeDecodeContainerForKey:(id)key containerClass:(Class)aClass valueClass:(Class)aClass3;	// 0x353aaa4d
- (id)safeDecodeArrayForKey:(id)key valueClass:(Class)aClass;	// 0x353aa9ad
- (id)safeDecodeDateForKey:(id)key;	// 0x353aa92d
- (id)safeDecodeDictionaryForKey:(id)key keyClass:(Class)aClass valueClass:(Class)aClass3;	// 0x353aab09
- (id)safeDecodeNumberForKey:(id)key;	// 0x353aa96d
- (id)safeDecodeObjectForKey:(id)key expectedClass:(Class)aClass;	// 0x353aa8b5
- (id)safeDecodeSetForKey:(id)key valueClass:(Class)aClass;	// 0x353aa9fd
- (id)safeDecodeStringForKey:(id)key;	// 0x353aa8ed
@end
