/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
	EDString *mFormatString;	// 4 = 0x4
	unsigned mFormatId;	// 8 = 0x8
	bool mBuiltIn;	// 12 = 0xc
	bool mReferenced;	// 13 = 0xd
}
@property(assign) unsigned formatId;	// G=0x31c1568d; S=0x31d2231d; converted property
@property(assign) bool referenced;	// G=0x31dab351; S=0x31c15885; converted property
+ (id)contentFormatWithFormatString:(id)formatString;	// 0x31c1551d
+ (id)contentFormatWithFormatString:(id)formatString formatId:(unsigned)anId;	// 0x31c154f5
+ (id)contentFormatWithNSString:(id)nsstring formatId:(unsigned)anId builtIn:(bool)anIn;	// 0x31c1538d
- (id)init;	// 0x31c15589
- (bool)builtIn;	// 0x31dab33d
- (id)copyWithZone:(NSZone *)zone;	// 0x31dab2d9
- (void)dealloc;	// 0x31c26a31
// converted property getter: - (unsigned)formatId;	// 0x31c1568d
- (id)formatString;	// 0x31c41255
- (unsigned)hash;	// 0x31dab311
- (BOOL)isEqual:(id)equal;	// 0x31c1a229
- (BOOL)isEqualToContentFormat:(id)contentFormat;	// 0x31c1a285
- (int)key;	// 0x31c15875
// converted property getter: - (bool)referenced;	// 0x31dab351
// converted property setter: - (void)setFormatId:(unsigned)anId;	// 0x31d2231d
// converted property setter: - (void)setReferenced:(bool)referenced;	// 0x31c15885
@end

