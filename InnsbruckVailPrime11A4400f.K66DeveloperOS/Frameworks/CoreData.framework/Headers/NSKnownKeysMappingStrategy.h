/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import </libobjc.A.h>
#import "NSFastEnumeration.h"
#import "NSSecureCoding.h"


@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x2d051fed
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d0a8775
- (id)initForKeys:(id)keys;	// 0x2d0a87a5
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x2d0a87a1
- (id)initWithCoder:(id)coder;	// 0x2d0a87c1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d0a87c9
- (void)encodeWithCoder:(id)coder;	// 0x2d0a87c5
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x2d0a87b1
- (unsigned)indexForKey:(id)key;	// 0x2d0a87a9
- (id *)keys;	// 0x2d0a87b9
- (unsigned)length;	// 0x2d0a87bd
@end
