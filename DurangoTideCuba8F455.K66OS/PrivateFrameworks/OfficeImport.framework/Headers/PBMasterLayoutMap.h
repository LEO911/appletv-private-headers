/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterLayoutMap : NSObject {
@private
	NSMutableDictionary *mMasterIdToMasterInfoMap;	// 4 = 0x4
	NSMutableDictionary *mTitleIdToMasterIdInfoMap;	// 8 = 0x8
}
+ (id)masterLayoutMap;	// 0x32bf1ed5
- (id)init;	// 0x32bf1f11
- (id)allMasterIds;	// 0x32bf5e1d
- (void)dealloc;	// 0x32baa0d1
- (long)masterIdForTitleId:(long)titleId;	// 0x32bf4da5
- (id)masterInfoForMasterId:(long)masterId;	// 0x32b84131
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x32b84021
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x32bf486d
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x32bf28a5
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x32b83ff9
@end
