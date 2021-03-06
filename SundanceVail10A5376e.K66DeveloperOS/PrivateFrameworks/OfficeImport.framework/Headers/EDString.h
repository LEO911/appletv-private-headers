/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDRunsCollection, EDPhoneticInfo, NSString;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
	NSString *mString;	// 4 = 0x4
	EDRunsCollection *mRuns;	// 8 = 0x8
	EDPhoneticInfo *mPhoneticInfo;	// 12 = 0xc
	bool mDoNotModify;	// 16 = 0x10
}
@property(retain) id phoneticInfo;	// G=0x370c8985; S=0x370c8995; converted property
@property(retain) id runs;	// G=0x36fb9439; S=0x36fbf649; converted property
@property(retain) id string;	// G=0x36f931ad; S=0x36f8e4e5; converted property
+ (id)edStringWithString:(id)string;	// 0x36f8e425
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x371299e1
+ (id)string;	// 0x37129999
- (id)init;	// 0x36f8e4a5
- (id)initWithString:(id)string;	// 0x36f8e471
- (id)initWithString:(id)string runs:(id)runs;	// 0x37129965
- (bool)areThereRuns;	// 0x3706ff59
- (id)copyWithZone:(NSZone *)zone;	// 0x370c88c5
- (void)dealloc;	// 0x36f9fac5
- (id)firstRunFont;	// 0x370f0d0d
- (unsigned)hash;	// 0x37129a31
- (bool)isEmpty;	// 0x370740b1
- (BOOL)isEqual:(id)equal;	// 0x36f93329
- (BOOL)isEqualToEDString:(id)edstring;	// 0x36f933bd
- (BOOL)isEqualToString:(id)string;	// 0x3709a4ad
// converted property getter: - (id)phoneticInfo;	// 0x370c8985
// converted property getter: - (id)runs;	// 0x36fb9439
- (void)setDoNotModify:(bool)modify;	// 0x36f9d28d
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x370c8995
// converted property setter: - (void)setRuns:(id)runs;	// 0x36fbf649
// converted property setter: - (void)setString:(id)string;	// 0x36f8e4e5
// converted property getter: - (id)string;	// 0x36f931ad
@end

