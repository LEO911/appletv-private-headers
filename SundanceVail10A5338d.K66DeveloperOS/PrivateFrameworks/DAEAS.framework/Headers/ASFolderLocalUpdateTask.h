/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {
	NSString *_previousSyncKey;	// 108 = 0x6c
	ASFolder *_folder;	// 112 = 0x70
	int _commandCode;	// 116 = 0x74
	int _requestType;	// 120 = 0x78
	id _completionBlock;	// 124 = 0x7c
}
@property(readonly, assign) int commandCode;	// G=0x36f1b6d9; converted property
+ (id)taskWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x36f1b5ad
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x36f1b519
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x36f1b6e9
// converted property getter: - (int)commandCode;	// 0x36f1b6d9
- (void)dealloc;	// 0x36f1bed9
- (void)finishWithError:(id)error;	// 0x36f1bc09
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36f1b86d
- (BOOL)processContext:(id)context;	// 0x36f1b88d
- (id)requestBody;	// 0x36f1b775
@end

