/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
@private
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x353e2295
- (void)dealloc;	// 0x353e20c5
- (id)host;	// 0x353e2225
- (BOOL)isValid;	// 0x353e2045
- (BOOL)matchesSubdomains;	// 0x353e206d
- (BOOL)matchesURL:(id)url;	// 0x353e2119
- (id)scheme;	// 0x353e225d
@end

