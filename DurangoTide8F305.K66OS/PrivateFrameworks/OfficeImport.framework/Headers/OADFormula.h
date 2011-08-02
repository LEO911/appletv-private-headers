/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OADFormula : NSObject {
@private
	int mType;	// 4 = 0x4
	OADFormulaArg mArgs[3];	// 8 = 0x8
	NSString *mName;	// 32 = 0x20
}
@property(retain) id name;	// G=0x3458bcf5; S=0x34533f05; converted property
- (id)initWithType:(int)type arg0:(OADFormulaArg)a0 arg1:(OADFormulaArg)a1 arg2:(OADFormulaArg)a2;	// 0x344d0855
- (OADFormulaArg)argAtIndex:(unsigned)index;	// 0x344d0b15
- (void)dealloc;	// 0x344617f5
// converted property getter: - (id)name;	// 0x3458bcf5
// converted property setter: - (void)setName:(id)name;	// 0x34533f05
- (int)type;	// 0x344d0bc9
@end
