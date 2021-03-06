/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// 0x312017dd
+ (id)stringGUID;	// 0x31201425
- (id)commaSeparatedComponents;	// 0x311fec85
- (unsigned)hexValue;	// 0x31201069
- (BOOL)isDirectory;	// 0x311fee91
- (BOOL)isEqualToIgnoringCase:(id)ignoringCase;	// 0x311feed5
- (BOOL)isICQ;	// 0x311fed91
- (BOOL)isICQorPhone;	// 0x311fed55
- (BOOL)isPhone;	// 0x311feddd
- (int)localizedCompareToString:(id)string;	// 0x312010e9
- (BOOL)localizedHasPrefix:(id)prefix caseSensitive:(BOOL)sensitive;	// 0x311ff001
- (NSRange)rangeOfNewlineInRange:(NSRange)range;	// 0x311ff315
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;	// 0x311feb4d
- (id)stringByAddingURLEscapes;	// 0x3120149d
- (id)stringByRemovingCharactersFromSet:(id)set;	// 0x311ff179
- (id)stringByRemovingURLEscapes;	// 0x31201459
- (id)stringByRemovingWhitespace;	// 0x311fec51
- (id)stringByResolvingAndStandardizingPath;	// 0x312014ed
- (id)stringByStrippingControlCharacters;	// 0x311ff221
- (id)stringWithDefaultServerIfNeeded:(id)defaultServerIfNeeded;	// 0x3120128d
- (id)trimmedString;	// 0x311ff38d
- (id)uniqueSavePath;	// 0x311febc5
- (unsigned)unsignedIntValue;	// 0x311fee6d
- (id)urlFromString;	// 0x311ff445
@end

@interface NSString (SecureImAdditions)
- (id)equivalentEmailAddressForScreenName;	// 0x31203041
@end

@interface NSString (MobileMeHelpers)
@property(readonly, assign, nonatomic) BOOL hasMobileMeSuffix;	// G=0x3120a075; 
@property(readonly, assign, nonatomic) NSString *mobileMeDomain;	// G=0x3120a165; 
@property(readonly, assign, nonatomic) NSString *stripMobileMSuffixIfPresent;	// G=0x3120a011; 
// declared property getter: - (BOOL)hasMobileMeSuffix;	// 0x3120a075
// declared property getter: - (id)mobileMeDomain;	// 0x3120a165
// declared property getter: - (id)stripMobileMSuffixIfPresent;	// 0x3120a011
@end

