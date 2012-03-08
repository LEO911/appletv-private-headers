/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVJSView : NSObject {
@private
	BRControl *_control;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BRControl *control;	// G=0x35eea279; @synthesize=_control
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x35ee9c59
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSViewClass:(Class)atvjsviewClass inContext:(OpaqueJSContext *)context;	// 0x35eea141
+ (id)viewFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x35eea0d1
// declared property getter: - (id)control;	// 0x35eea279
- (void)dealloc;	// 0x35eea1a9
- (id)makeControl;	// 0x35eea25d
@end
