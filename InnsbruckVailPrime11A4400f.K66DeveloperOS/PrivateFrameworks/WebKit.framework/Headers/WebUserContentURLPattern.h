/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x3399a72d
- (void)dealloc;	// 0x3399a999
- (id)host;	// 0x3399aa41
- (BOOL)isValid;	// 0x3399a9e9
- (BOOL)matchesSubdomains;	// 0x3399aa75
- (BOOL)matchesURL:(id)url;	// 0x3399aa99
- (id)scheme;	// 0x3399aa0d
@end
