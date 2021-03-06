/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerInfoTaskGroup.h"

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
	NSSet *_directoryGatewayURLs;	// 68 = 0x44
}
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls directoryGatewayURLs:(id)urls3 taskManager:(id)manager;	// 0x336f2749
- (id)_copyContainerParserMappings;	// 0x336f28bd
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x336f2881
- (int)containerInfoDepthForURL:(id)url;	// 0x336f283d
- (void)dealloc;	// 0x336f27f1
@end

