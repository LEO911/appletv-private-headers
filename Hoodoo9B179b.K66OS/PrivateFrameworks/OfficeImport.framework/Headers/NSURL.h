/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSURL.h> // Unknown library


@interface NSURL (OCPURLAdditions)
+ (id)URLWithPackagePart:(id)packagePart;	// 0x328bac71
- (id)initWithPackagePart:(id)packagePart;	// 0x328bacad
- (BOOL)isInternalToPackage;	// 0x328bae31
@end

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)escapes;	// 0x32a0e5d9
+ (id)improperlyEscapedString:(id)string;	// 0x32a0e8bd
+ (id)properlyEscapedString:(id)string;	// 0x32a0ea55
+ (id)relativeURLWithEscapes:(id)escapes;	// 0x32a0e581
- (BOOL)isRelative;	// 0x32a0e4fd
@end

