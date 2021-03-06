/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 128 = 0x80
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x32c61ac1; S=0x32c61ad5; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x32c612a9
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x32c61335
- (void)dealloc;	// 0x32c6125d
- (id)description;	// 0x32c613b5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x32c61a7d
- (id)httpMethod;	// 0x32c61479
- (id)parseHints;	// 0x32c61765
// declared property getter: - (id)propertiesToExpand;	// 0x32c61ac1
- (id)requestBody;	// 0x32c61485
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x32c61ad5
@end

