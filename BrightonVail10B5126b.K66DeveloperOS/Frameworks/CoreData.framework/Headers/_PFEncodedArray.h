/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library

@class NSData;

@interface _PFEncodedArray : NSArray {
	NSData *_sourceData;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x30e905e1; converted property
- (id)init;	// 0x30ec4431
- (BOOL)_isDeallocating;	// 0x30ec44ed
- (void)_replaceObject:(id)object atIndex:(unsigned)index;	// 0x30ec45d1
- (BOOL)_tryRetain;	// 0x30ec449d
- (const id *)_values;	// 0x30e905dd
- (Class)classForArchiver;	// 0x30ec456d
- (Class)classForCoder;	// 0x30ec4551
- (id)copy;	// 0x30ec4541
// converted property getter: - (unsigned)count;	// 0x30e905e1
- (void)dealloc;	// 0x30e9066d
- (id)description;	// 0x30ec4519
- (id)mutableCopy;	// 0x30ec4589
- (id)objectAtIndex:(unsigned)index;	// 0x30e90fb1
- (oneway void)release;	// 0x30e905f9
- (id)retain;	// 0x30e90f3d
- (unsigned)retainCount;	// 0x30ec4489
@end
