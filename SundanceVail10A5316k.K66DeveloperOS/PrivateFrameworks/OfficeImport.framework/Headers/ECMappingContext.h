/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : NSObject {
@private
	CFDictionaryRef mIndexToMappedIndex;	// 4 = 0x4
	NSMutableDictionary *mSheetNameToMappedIndex;	// 8 = 0x8
	CFDictionaryRef mObjectToMappingInfo;	// 12 = 0xc
	NSMutableArray *mMappingInfos;	// 16 = 0x10
}
+ (id)mappingContext;	// 0x312285a1
- (id)init;	// 0x312284d5
- (void)associateMappingInfo:(id)info withSheetName:(id)sheetName andSheetIndex:(unsigned)index andObject:(id)object;	// 0x312288c1
- (void)dealloc;	// 0x312285e9
- (unsigned)mappedSheetIndexForSheetIndex:(unsigned)sheetIndex;	// 0x312287e9
- (unsigned)mappedSheetIndexForSheetName:(id)sheetName;	// 0x31228805
- (ChVector<OcText> *)mappedSheetNames;	// 0x31228679
- (id)mappingInfoAtIndex:(unsigned)index;	// 0x31228879
- (unsigned)mappingInfoCount;	// 0x31228859
- (id)mappingInfoForObject:(id)object;	// 0x31228845
@end

