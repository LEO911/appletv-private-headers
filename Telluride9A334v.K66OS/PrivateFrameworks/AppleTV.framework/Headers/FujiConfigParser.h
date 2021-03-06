/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class FujiConfig;

__attribute__((visibility("hidden")))
@interface FujiConfigParser : NSObject {
@private
	XML_ParserStructRef _parser;	// 4 = 0x4
	FujiConfig *_config;	// 8 = 0x8
	int _parserDepth;	// 12 = 0xc
	int _tagListDepth;	// 16 = 0x10
	char **_currentTag;	// 20 = 0x14
}
- (id)init;	// 0x333fdf18
- (void)charData:(const char *)data withLength:(int)length;	// 0x333fe29c
- (void)dealloc;	// 0x333fe168
- (void)dumpTags;	// 0x333fd74c
- (void)endElement:(const char *)element;	// 0x333ff274
- (id)getConfig;	// 0x333fd838
- (id)getCountry;	// 0x333fdab0
- (id)getGenericFeedURL;	// 0x333fd9f4
- (id)getNetflixApiHost;	// 0x333fdda0
- (id)getNetflixApiUserHost;	// 0x333fde5c
- (id)getTestNCCPDataURL;	// 0x333fdb6c
- (id)getTestNCCPIdentityURL;	// 0x333fdc28
- (id)getTestNCCPLoggingURL;	// 0x333fdce4
- (id)getUIBootURL;	// 0x333fd938
- (BOOL)isDeviceSupported;	// 0x333fd7b8
- (BOOL)isLoggedIn;	// 0x333fd7f8
- (bool)parse:(id)parse;	// 0x333fe050
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x333ff314
- (BOOL)supportDD5_1;	// 0x333fd8f8
- (BOOL)useTestEnvironment;	// 0x333fd8b8
@end

