/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WMBookmarkMapper : CMMapper {
@private
	NSString *mName;	// 8 = 0x8
	int mBookmarkType;	// 12 = 0xc
}
- (id)initWithWDBookmark:(id)wdbookmark parent:(id)parent;	// 0x31235479
- (void)mapAt:(id)at withState:(id)state;	// 0x3123550d
@end
