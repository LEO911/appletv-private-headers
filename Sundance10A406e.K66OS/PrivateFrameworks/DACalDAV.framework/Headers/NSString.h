/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x378b7efd
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x378b7f79
- (id)stringByEncodingSlashes;	// 0x378b7f31
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x378b8169
- (BOOL)isPathToAppleScript;	// 0x378b7fb9
- (BOOL)isPathToBackupFile;	// 0x378b80bd
- (BOOL)isPathToICalBookmark;	// 0x378b80fd
- (BOOL)isPathToICalData;	// 0x378b807d
- (BOOL)isPathToVCalData;	// 0x378b7ff9
@end

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x378b88b5
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x378b8971
- (id)quote;	// 0x378b842d
- (id)safeFilename;	// 0x378b88f9
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x378b8775
- (id)trimChar:(unsigned short)aChar;	// 0x378b86a5
- (id)trimCommas;	// 0x378b85c9
- (id)trimFinalChar:(unsigned short)aChar;	// 0x378b85f1
- (id)trimFinalComma;	// 0x378b8519
- (id)trimFirstChar:(unsigned short)aChar;	// 0x378b8655
- (id)trimFirstComma;	// 0x378b8579
- (id)trimWhiteSpace;	// 0x378b84d1
- (id)unquote;	// 0x378b86d1
@end

@interface NSString (CalNSStringEmailAddressAdditions)
- (BOOL)hasMailto;	// 0x378ba211
- (BOOL)resemblesEmailAddress;	// 0x378ba231
- (id)stringAddingMailto;	// 0x378ba2f1
- (id)stringRemovingMailto;	// 0x378ba335
@end

