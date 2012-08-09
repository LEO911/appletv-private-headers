/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
	char *_g;	// 4 = 0x4
	unsigned char _select;	// 8 = 0x8
	void *_rankTable;	// 12 = 0xc
	double _c;	// 16 = 0x10
	unsigned _M;	// 24 = 0x18
	unsigned _factor;	// 28 = 0x1c
	unsigned _numKey;	// 32 = 0x20
	unsigned _seeds[2];	// 36 = 0x24
	id *_keys;	// 44 = 0x2c
	NSSharedKeySet *_subSharedKeySet;	// 48 = 0x30
}
+ (id)keySetWithKeys:(id)keys;	// 0x356984cd
- (id)init;	// 0x3569925d
- (id)initWithCoder:(id)coder;	// 0x35699559
- (id)initWithKeys:(id *)keys count:(unsigned)count;	// 0x35698705
- (id)allKeys;	// 0x35699899
- (id)copyWithZone:(NSZone *)zone;	// 0x35699271
- (unsigned)count;	// 0x35699839
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35699cdd
- (void)createSubclassCode:(id)code interface:(const CFStringRef *)interface implementation:(const CFStringRef *)implementation;	// 0x356975c5
- (void)dealloc;	// 0x35699d61
- (void)encodeWithCoder:(id)coder;	// 0x35699281
- (void)finalize;	// 0x35699e35
- (unsigned)indexForKey:(id)key;	// 0x35699aad
- (BOOL)isEmpty;	// 0x35699869
- (id)keyAtIndex:(unsigned)index;	// 0x35699c91
- (unsigned)keySetCount;	// 0x35699f19
- (unsigned)maximumIndex;	// 0x35699881
@end
