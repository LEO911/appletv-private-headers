/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WDRubyProperties : NSObject {
	unsigned mOriginal : 1;	// 4 = 0x4
	XXStruct_RPYF6B *mOriginalProperties;	// 8 = 0x8
}
@property(assign, nonatomic) int alignment;	// G=0x3510d4d1; S=0x3510d4f1; 
@property(assign, nonatomic) unsigned short baseFontSize;	// G=0x3510d601; S=0x3510d621; 
@property(assign, nonatomic) unsigned short distanceBetween;	// G=0x3510d699; S=0x3510d6b9; 
@property(assign, nonatomic) unsigned short phoneticGuideFontSize;	// G=0x3510d569; S=0x3510d589; 
@property(assign, nonatomic) int phoneticGuideLanguage;	// G=0x3510d731; S=0x3510d751; 
- (id)init;	// 0x3510d425
// declared property getter: - (int)alignment;	// 0x3510d4d1
// declared property getter: - (unsigned short)baseFontSize;	// 0x3510d601
- (void)clearAlignment;	// 0x3510d551
- (void)clearBaseFontSize;	// 0x3510d681
- (void)clearDistanceBetween;	// 0x3510d719
- (void)clearPhoneticGuideFontSize;	// 0x3510d5e9
- (void)clearPhoneticGuideLanguage;	// 0x3510d7b1
- (void)dealloc;	// 0x3510d465
// declared property getter: - (unsigned short)distanceBetween;	// 0x3510d699
- (BOOL)isAlignmentOverridden;	// 0x3510d531
- (BOOL)isAnythingOverridden;	// 0x3510d4ad
- (BOOL)isAnythingOverriddenIn:(XXStruct_RPYF6B *)anIn;	// 0x3510d7cd
- (BOOL)isBaseFontSizeOverridden;	// 0x3510d661
- (BOOL)isDistanceBetweenOverridden;	// 0x3510d6f9
- (BOOL)isPhoneticGuideFontSizeOverridden;	// 0x3510d5c9
- (BOOL)isPhoneticGuideLanguageOverridden;	// 0x3510d791
// declared property getter: - (unsigned short)phoneticGuideFontSize;	// 0x3510d569
// declared property getter: - (int)phoneticGuideLanguage;	// 0x3510d731
// declared property setter: - (void)setAlignment:(int)alignment;	// 0x3510d4f1
// declared property setter: - (void)setBaseFontSize:(unsigned short)size;	// 0x3510d621
// declared property setter: - (void)setDistanceBetween:(unsigned short)between;	// 0x3510d6b9
// declared property setter: - (void)setPhoneticGuideFontSize:(unsigned short)size;	// 0x3510d589
// declared property setter: - (void)setPhoneticGuideLanguage:(int)language;	// 0x3510d751
@end
