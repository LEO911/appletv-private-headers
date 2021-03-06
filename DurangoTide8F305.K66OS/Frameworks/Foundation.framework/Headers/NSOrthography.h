/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSString *dominantScript;	// G=0x32807ba9; 
@property(readonly, assign) NSDictionary *languageMap;	// G=0x32807b85; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x3280817d
+ (void)initialize;	// 0x32806269
+ (id)orthographyWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x328059a5
- (id)initWithCoder:(id)coder;	// 0x32807aad
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x3280558d
- (id)allLanguages;	// 0x32807bcd
- (id)allScripts;	// 0x328056c5
- (Class)classForCoder;	// 0x328050c5
- (id)copyWithZone:(NSZone *)zone;	// 0x32805991
- (id)description;	// 0x32807855
- (id)dominantLanguage;	// 0x32805745
- (id)dominantLanguageForScript:(id)script;	// 0x32805771
// declared property getter: - (id)dominantScript;	// 0x32807ba9
- (void)encodeWithCoder:(id)coder;	// 0x328057d1
- (unsigned)hash;	// 0x3280593d
- (BOOL)isEqual:(id)equal;	// 0x32805869
// declared property getter: - (id)languageMap;	// 0x32807b85
- (id)languagesForScript:(id)script;	// 0x328057a9
- (unsigned)orthographyFlags;	// 0x3280814d
@end

