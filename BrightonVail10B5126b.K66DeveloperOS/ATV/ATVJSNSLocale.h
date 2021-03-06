/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLocale;

__attribute__((visibility("hidden")))
@interface ATVJSNSLocale : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	NSLocale *_locale;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x17bbd9; converted property
@property(retain, nonatomic) NSLocale *locale;	// G=0x17bbe9; S=0x17bbf9; @synthesize=_locale
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x17b709
+ (id)localeFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x17ba45
- (id)init;	// 0x17baa1
- (id)initWithLocale:(id)locale context:(OpaqueJSContext *)context;	// 0x17babd
- (void)dealloc;	// 0x17bb8d
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x17bbd9
// declared property getter: - (id)locale;	// 0x17bbe9
// declared property setter: - (void)setLocale:(id)locale;	// 0x17bbf9
@end

