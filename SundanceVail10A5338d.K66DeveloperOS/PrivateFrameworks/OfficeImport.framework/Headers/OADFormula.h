/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface OADFormula : NSObject {
	int mType;	// 4 = 0x4
	OADFormulaArg mArgs[3];	// 8 = 0x8
	NSString *mName;	// 32 = 0x20
}
@property(retain) id name;	// G=0x33ba1651; S=0x33a9400d; converted property
- (id)initWithType:(int)type arg0:(OADFormulaArg)a0 arg1:(OADFormulaArg)a1 arg2:(OADFormulaArg)a2;	// 0x33a1bd05
- (id).cxx_construct;	// 0x33a1bd01
- (OADFormulaArg)argAtIndex:(unsigned)index;	// 0x33adeaf9
- (void)dealloc;	// 0x33a1c0b1
// converted property getter: - (id)name;	// 0x33ba1651
// converted property setter: - (void)setName:(id)name;	// 0x33a9400d
- (int)type;	// 0x33adebd1
@end

