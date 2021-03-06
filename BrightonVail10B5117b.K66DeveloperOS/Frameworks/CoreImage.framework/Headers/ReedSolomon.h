/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ReedSolomon : NSObject {
	int _expTable[256];	// 4 = 0x4
	int _logTable[256];	// 1028 = 0x404
	int _cachedGeneratorNum;	// 2052 = 0x804
	int _memoryCapacity;	// 2056 = 0x808
	XXStruct_xecwpA *_cachedGenerators;	// 2060 = 0x80c
}
- (id)initReedSolomon;	// 0x315ac795
- (int)Degree:(XXStruct_xecwpA)degree;	// 0x315ac9d5
- (int)Exp:(int)exp;	// 0x315ac881
- (int)addOrSubtract:(int)subtract with:(int)with;	// 0x315ac879
- (XXStruct_xecwpA *)addOrSubtractPoly:(XXStruct_xecwpA *)poly with:(XXStruct_xecwpA *)with;	// 0x315acb29
- (XXStruct_xecwpA *)buildGenerator:(int)generator;	// 0x315ad0a5
- (void)clearPoly:(XXStruct_xecwpA *)poly;	// 0x315aca99
- (int *)coefficients:(XXStruct_xecwpA)coefficients;	// 0x315ac9d9
- (XXStruct_xecwpA *)copyPoly:(XXStruct_xecwpA *)poly;	// 0x315acadd
- (XXStruct_xecwpA *)createMonomial:(int)monomial coefficient:(int)coefficient;	// 0x315ac93d
- (void)dealloc;	// 0x315ad341
- (XXStruct_xecwpA *)divide:(XXStruct_xecwpA *)divide by:(XXStruct_xecwpA *)by;	// 0x315acea1
- (BOOL)encode:(int *)encode length:(int)length bytes:(int)bytes;	// 0x315ad1c9
- (BOOL)fillPoly:(XXStruct_xecwpA *)poly coefficients:(int *)coefficients length:(int)length;	// 0x315ac9e9
- (int)inverse:(int)inverse;	// 0x315ac895
- (BOOL)isZero:(XXStruct_xecwpA)zero;	// 0x315ac9dd
- (int)multiply:(int)multiply with:(int)with;	// 0x315ac8d9
- (XXStruct_xecwpA *)multiplyByMonomial:(XXStruct_xecwpA *)monomial degree:(int)degree coefficient:(int)coefficient;	// 0x315acde1
- (XXStruct_xecwpA *)multiplyPoly:(XXStruct_xecwpA *)poly with:(XXStruct_xecwpA *)with;	// 0x315accb5
- (int)polyCoefficient:(XXStruct_xecwpA *)coefficient degree:(int)degree;	// 0x315acab1
@end

