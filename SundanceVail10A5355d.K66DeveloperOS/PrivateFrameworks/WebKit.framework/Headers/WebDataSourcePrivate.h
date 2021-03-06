/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol WebDocumentRepresentation, WebDataSourcePrivateDelegate;

@interface WebDataSourcePrivate : NSObject {
	WebDocumentLoaderMac *loader;	// 4 = 0x4
	id<WebDocumentRepresentation> representation;	// 8 = 0x8
	BOOL representationFinishedLoading;	// 12 = 0xc
	BOOL includedInWebKitStatistics;	// 13 = 0xd
	NSObject<WebDataSourcePrivateDelegate> *_dataSourceDelegate;	// 16 = 0x10
}
+ (void)initialize;	// 0x316776f1
- (void)dealloc;	// 0x31687779
- (void)finalize;	// 0x316a6615
@end

