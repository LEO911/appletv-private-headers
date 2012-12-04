/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSJSONSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)JSONObjectWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x3554d789
+ (id)JSONObjectWithStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x355ff8f1
+ (id)allocWithZone:(NSZone *)zone;	// 0x355ff4cd
+ (id)dataWithJSONObject:(id)jsonobject options:(unsigned)options error:(id *)error;	// 0x355ff589
+ (BOOL)isValidJSONObject:(id)object;	// 0x355ff55d
+ (int)writeJSONObject:(id)object toStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x355ff709
- (id)init;	// 0x355ff515
@end
