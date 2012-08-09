/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVJSObject.h"

@class BRXMLNode;

__attribute__((visibility("hidden")))
@interface ATVJSNode : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *jsObjectRef;	// 4 = 0x4
	BRXMLNode *xmlNode;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x1540b9; S=0x1540c9; @synthesize
@property(retain, nonatomic) BRXMLNode *xmlNode;	// G=0x1540d9; S=0x1540e9; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x153d05
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSNodeClass:(Class)atvjsnodeClass inContext:(OpaqueJSContext *)context;	// 0x153f09
+ (id)nodeFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x153f7d
+ (id)nodeInContext:(OpaqueJSContext *)context withNode:(id)node;	// 0x153fed
- (void)dealloc;	// 0x154075
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x1540b9
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x1540c9
// declared property setter: - (void)setXmlNode:(id)node;	// 0x1540e9
// declared property getter: - (id)xmlNode;	// 0x1540d9
@end
