/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface EDPivotPageField : NSObject {
	unsigned mFieldId;	// 4 = 0x4
	NSString *mCap;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
}
@property(retain) id cap;	// G=0x34a2c399; S=0x34a2c3a9; converted property
@property(assign) unsigned fieldId;	// G=0x34a2c325; S=0x34a2c335; converted property
@property(retain) id name;	// G=0x34a2c345; S=0x34a2c355; converted property
+ (id)pivotPageField;	// 0x34a2c2dd
- (id)init;	// 0x34a2c239
// converted property getter: - (id)cap;	// 0x34a2c399
- (void)dealloc;	// 0x34a2c279
// converted property getter: - (unsigned)fieldId;	// 0x34a2c325
// converted property getter: - (id)name;	// 0x34a2c345
// converted property setter: - (void)setCap:(id)cap;	// 0x34a2c3a9
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x34a2c335
// converted property setter: - (void)setName:(id)name;	// 0x34a2c355
@end

