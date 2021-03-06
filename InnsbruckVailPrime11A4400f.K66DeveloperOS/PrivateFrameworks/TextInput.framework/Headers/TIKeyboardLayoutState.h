/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>
#import "NSSecureCoding.h"

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
	BOOL _hasCandidateKey;	// 4 = 0x4
	BOOL _hasAccentKey;	// 5 = 0x5
	BOOL _canMultitap;	// 6 = 0x6
	BOOL _isAlphabeticPlane;	// 7 = 0x7
	BOOL _interfaceIdiomIsPad;	// 8 = 0x8
	NSString *_inputMode;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL canMultitap;	// G=0x32a17041; S=0x32a17051; @synthesize=_canMultitap
@property(assign, nonatomic) BOOL hasAccentKey;	// G=0x32a17021; S=0x32a17031; @synthesize=_hasAccentKey
@property(assign, nonatomic) BOOL hasCandidateKey;	// G=0x32a17001; S=0x32a17011; @synthesize=_hasCandidateKey
@property(copy, nonatomic) NSString *inputMode;	// G=0x32a16fdd; S=0x32a16ff1; @synthesize=_inputMode
@property(assign, nonatomic) BOOL interfaceIdiomIsPad;	// G=0x32a17081; S=0x32a17091; @synthesize=_interfaceIdiomIsPad
@property(assign, nonatomic) BOOL isAlphabeticPlane;	// G=0x32a17061; S=0x32a17071; @synthesize=_isAlphabeticPlane
+ (BOOL)supportsSecureCoding;	// 0x32a169a9
- (id)initWithCoder:(id)coder;	// 0x32a16ab1
// declared property getter: - (BOOL)canMultitap;	// 0x32a17041
- (id)copyWithZone:(NSZone *)zone;	// 0x32a169f9
- (void)dealloc;	// 0x32a169ad
- (id)description;	// 0x32a16cd1
- (void)encodeWithCoder:(id)coder;	// 0x32a16bed
// declared property getter: - (BOOL)hasAccentKey;	// 0x32a17021
// declared property getter: - (BOOL)hasCandidateKey;	// 0x32a17001
// declared property getter: - (id)inputMode;	// 0x32a16fdd
// declared property getter: - (BOOL)interfaceIdiomIsPad;	// 0x32a17081
// declared property getter: - (BOOL)isAlphabeticPlane;	// 0x32a17061
- (BOOL)isEqual:(id)equal;	// 0x32a16e95
// declared property setter: - (void)setCanMultitap:(BOOL)multitap;	// 0x32a17051
// declared property setter: - (void)setHasAccentKey:(BOOL)key;	// 0x32a17031
// declared property setter: - (void)setHasCandidateKey:(BOOL)key;	// 0x32a17011
// declared property setter: - (void)setInputMode:(id)mode;	// 0x32a16ff1
// declared property setter: - (void)setInterfaceIdiomIsPad:(BOOL)pad;	// 0x32a17091
// declared property setter: - (void)setIsAlphabeticPlane:(BOOL)plane;	// 0x32a17071
@end

