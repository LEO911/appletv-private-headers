/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WebScriptObject.h"
#import "NSCopying.h"

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {
	DOMObjectInternalRef _internal;	// 8 = 0x8
}
@property(readonly, assign) DOMStyleSheet *sheet;	// G=0x3601988d; 
- (id)init;	// 0x3601980d
- (id)copyWithZone:(NSZone *)zone;	// 0x3601987d
- (void)dealloc;	// 0x35cee4d1
// declared property getter: - (id)sheet;	// 0x3601988d
@end

