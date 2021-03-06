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
+ (id)masterLayoutMap;	// 0x311a2de9
- (id)init;	// 0x311a2e2d
- (id)allMasterIds;	// 0x311a86d5
- (void)dealloc;	// 0x31172a45
- (long)masterIdForTitleId:(long)titleId;	// 0x311a73dd
- (id)masterInfoForMasterId:(long)masterId;	// 0x310ed0f1
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x310ecfcd
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x311a7291
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x311a3825
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x310ecfa1
@end

