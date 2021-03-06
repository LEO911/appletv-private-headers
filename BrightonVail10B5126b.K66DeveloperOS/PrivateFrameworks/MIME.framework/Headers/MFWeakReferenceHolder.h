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
+ (id)weakReferenceWithObject:(id)object;	// 0x34427759
+ (id)weakReferenceWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x3442776d
- (id)init;	// 0x34427529
- (id)_initWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x3442753d
- (void)dealloc;	// 0x34427701
- (BOOL)isZeroingWeakReference;	// 0x34427861
- (id)retainedReference;	// 0x34427829
@end

