/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject {
	id<NSObject> _reference;	// 4 = 0x4
	unsigned _isZeroing : 1;	// 8 = 0x8
}
+ (id)weakReferenceWithObject:(id)object;	// 0x34429759
+ (id)weakReferenceWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x3442976d
- (id)init;	// 0x34429529
- (id)_initWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x3442953d
- (void)dealloc;	// 0x34429701
- (BOOL)isZeroingWeakReference;	// 0x34429861
- (id)retainedReference;	// 0x34429829
@end

