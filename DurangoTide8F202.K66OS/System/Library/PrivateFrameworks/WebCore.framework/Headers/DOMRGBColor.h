/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"
#import "WebCore-Structs.h"

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x33ec8de1; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x33ec8c9d; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x33ec8b55; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x33ec88e5; 
// declared property getter: - (id)alpha;	// 0x33ec8de1
// declared property getter: - (id)blue;	// 0x33ec8c9d
- (CGColorRef)color;	// 0x33fac1f1
- (void)dealloc;	// 0x33eceff9
- (void)finalize;	// 0x33fac23d
// declared property getter: - (id)green;	// 0x33ec8b55
// declared property getter: - (id)red;	// 0x33ec88e5
@end
