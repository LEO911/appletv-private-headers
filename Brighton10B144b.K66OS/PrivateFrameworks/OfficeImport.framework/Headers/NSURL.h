/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSURL.h> // Unknown library


@interface NSURL (OCPURLAdditions)
+ (id)URLWithPackagePart:(id)packagePart;	// 0x348da521
- (id)initWithPackagePart:(id)packagePart;	// 0x348da55d
- (BOOL)isInternalToPackage;	// 0x348da6c9
@end

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)escapes;	// 0x34ac439d
+ (id)improperlyEscapedString:(id)string;	// 0x34ac41d9
+ (id)properlyEscapedString:(id)string;	// 0x34ac419d
+ (id)relativeURLWithEscapes:(id)escapes;	// 0x34ac4345
- (BOOL)isRelative;	// 0x34ac4449
@end

