/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSData, NSString, NSDictionary, NSMutableSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
	NSString *_appSpecificNamespace;	// 136 = 0x88
	NSString *_appSpecificDataProp;	// 140 = 0x8c
	NSDictionary *_uuidsToAddActions;	// 144 = 0x90
	NSDictionary *_hrefsToModDeleteActions;	// 148 = 0x94
	NSString *_checkCTag;	// 152 = 0x98
	BOOL _simple;	// 156 = 0x9c
	BOOL _returnChangedData;	// 157 = 0x9d
	NSData *_pushedData;	// 160 = 0xa0
	BOOL _validCTag;	// 164 = 0xa4
	NSString *_nextCTag;	// 168 = 0xa8
	NSMutableSet *_bulkChangeResponses;	// 172 = 0xac
	NSString *_requestDataContentType;	// 176 = 0xb0
}
@property(readonly, assign) NSSet *bulkChangeResponses;	// G=0x303dfc45; @synthesize=_bulkChangeResponses
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x303dfc1d; @synthesize=_hrefsToModDeleteActions
@property(readonly, assign) NSString *nextCTag;	// G=0x303dfc31; @synthesize=_nextCTag
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x303dfc09; @synthesize=_uuidsToAddActions
- (id)initWithURL:(id)url checkCTag:(id)tag simple:(BOOL)simple returnChangedData:(BOOL)data uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x303de95d
- (id)additionalHeaderValues;	// 0x303deb89
// declared property getter: - (id)bulkChangeResponses;	// 0x303dfc45
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x303df481
- (void)dealloc;	// 0x303dea99
- (void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x303dece1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x303df635
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x303dfc1d
- (id)httpMethod;	// 0x303decc5
// declared property getter: - (id)nextCTag;	// 0x303dfc31
- (id)requestBody;	// 0x303decd1
// declared property getter: - (id)uuidsToAddActions;	// 0x303dfc09
@end
