/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import "JavaScriptCore-Structs.h"
#import </libobjc.A.h>

@class JSContext;

__attribute__((visibility("hidden")))
@interface JSObjCClassInfo : NSObject {
	JSContext *m_context;	// 4 = 0x4
	Class m_class;	// 8 = 0x8
	bool m_block;	// 12 = 0xc
	OpaqueJSClass *m_classRef;	// 16 = 0x10
	Weak<JSC::JSObject> m_prototype;	// 20 = 0x14
	Weak<JSC::JSObject> m_constructor;	// 24 = 0x18
}
- (id)initWithContext:(id)context forClass:(Class)aClass superClassInfo:(id)info;	// 0x2e148e5d
- (id).cxx_construct;	// 0x2e14a225
- (void).cxx_destruct;	// 0x2e14a1e9
- (void)allocateConstructorAndPrototypeWithSuperClassInfo:(id)superClassInfo;	// 0x2e148fb1
- (id)constructor;	// 0x2e14a169
- (void)dealloc;	// 0x2e148f71
- (void)reallocateConstructorAndOrPrototype;	// 0x2e149e19
- (id)wrapperForObject:(id)object;	// 0x2e149e7d
@end
