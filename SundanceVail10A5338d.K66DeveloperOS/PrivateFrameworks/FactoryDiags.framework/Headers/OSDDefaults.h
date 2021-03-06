/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"

@class NSString;

@interface OSDDefaults : NSObject {
	NSString *_domain;	// 4 = 0x4
}
+ (id)defaults;	// 0x32a1357d
+ (id)defaultsInDomain:(id)domain;	// 0x32a135b5
- (id)init;	// 0x32a136e9
- (id)initWithDomain:(id)domain;	// 0x32a1368d
- (id)__doLookupForName:(id)name;	// 0x32a12d3d
- (id)__doLookupFromSEL:(SEL)sel;	// 0x32a12e31
- (id)__getDefaults;	// 0x32a12ced
- (id)__getRealDomain;	// 0x32a12cc9
- (void)__setValueFromSEL:(SEL)sel withValue:(id)value;	// 0x32a12f19
- (void)__setValueInDefaults:(id)defaults forName:(id)name;	// 0x32a12e55
- (id)__unitTest;	// 0x32a11fc9
- (bool)_addMethodsForProperties:(objc_property **)properties withCount:(unsigned)count andSELMap:(id)map areSetters:(BOOL)setters;	// 0x32a129e9
- (void)_defaultsCtor;	// 0x32a12b9d
- (bool)_defaultsGetter_B;	// 0x32a13079
- (unsigned char)_defaultsGetter_C;	// 0x32a13181
- (unsigned)_defaultsGetter_I;	// 0x32a13155
- (unsigned long)_defaultsGetter_L;	// 0x32a131a9
- (unsigned long long)_defaultsGetter_Q;	// 0x32a131fd
- (unsigned short)_defaultsGetter_S;	// 0x32a131d5
- (BOOL)_defaultsGetter_c;	// 0x32a13051
- (double)_defaultsGetter_d;	// 0x32a130fd
- (float)_defaultsGetter_f;	// 0x32a130a9
- (int)_defaultsGetter_i;	// 0x32a12ff9
- (id)_defaultsGetter_id;	// 0x32a12fe5
- (long)_defaultsGetter_l;	// 0x32a13025
- (long long)_defaultsGetter_q;	// 0x32a13129
- (short)_defaultsGetter_s;	// 0x32a130d5
- (void)_defaultsSetter_B:(bool)b;	// 0x32a132fd
- (void)_defaultsSetter_C:(unsigned char)c;	// 0x32a1347d
- (void)_defaultsSetter_I:(unsigned)i;	// 0x32a1343d
- (void)_defaultsSetter_L:(unsigned long)l;	// 0x32a134bd
- (void)_defaultsSetter_Q:(unsigned long long)q;	// 0x32a1353d
- (void)_defaultsSetter_S:(unsigned short)s;	// 0x32a134fd
- (void)_defaultsSetter_c:(BOOL)c;	// 0x32a132bd
- (void)_defaultsSetter_d:(double)d;	// 0x32a133bd
- (void)_defaultsSetter_f:(float)f;	// 0x32a1333d
- (void)_defaultsSetter_i:(int)i;	// 0x32a1323d
- (void)_defaultsSetter_id:(id)anId;	// 0x32a13229
- (void)_defaultsSetter_l:(long)l;	// 0x32a1327d
- (void)_defaultsSetter_q:(long long)q;	// 0x32a133fd
- (void)_defaultsSetter_s:(short)setter_s;	// 0x32a1337d
- (id)_getterList;	// 0x32a129b1
- (id)_methodListForPrefix:(const char *)prefix;	// 0x32a12875
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType;	// 0x32a12851
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType andOutAttrList:(id *)list;	// 0x32a126b5
- (id)_setterList;	// 0x32a129cd
- (void)dealloc;	// 0x32a13641
- (void)setDomain:(id)domain;	// 0x32a135e5
@end

