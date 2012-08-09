/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSCoder.h> // Unknown library


@interface NSCoder (XPCSafeDecoding)
- (id)_safeDecodeContainerForKey:(id)key containerClass:(Class)aClass valueClass:(Class)aClass3;	// 0x36c8f81d
- (id)safeDecodeArrayForKey:(id)key valueClass:(Class)aClass;	// 0x36c8f8f1
- (id)safeDecodeDateForKey:(id)key;	// 0x36c8f79d
- (id)safeDecodeDictionaryForKey:(id)key keyClass:(Class)aClass valueClass:(Class)aClass3;	// 0x36c8f979
- (id)safeDecodeNumberForKey:(id)key;	// 0x36c8f7dd
- (id)safeDecodeObjectForKey:(id)key expectedClass:(Class)aClass;	// 0x36c8f725
- (id)safeDecodeSetForKey:(id)key valueClass:(Class)aClass;	// 0x36c8f935
- (id)safeDecodeStringForKey:(id)key;	// 0x36c8f75d
@end
