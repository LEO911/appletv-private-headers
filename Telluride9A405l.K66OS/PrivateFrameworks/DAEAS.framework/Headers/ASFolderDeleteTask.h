/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASFolderLocalUpdateTask.h"


@interface ASFolderDeleteTask : ASFolderLocalUpdateTask {
}
- (id)initWithFolder:(id)folder previousSyncKey:(id)key completionBlock:(id)block;	// 0x341f12c5
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)wbxmldata;	// 0x341f131d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x341f135d
@end
