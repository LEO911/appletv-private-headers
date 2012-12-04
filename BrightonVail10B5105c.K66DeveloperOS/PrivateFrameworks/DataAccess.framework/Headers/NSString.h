/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSString.h> // Unknown library


@interface NSString (DAKeychainAdditions)
- (id)stringByURLQuoting;	// 0x35e40e11
@end

@interface NSString (DAExtensions)
- (id)appendSlashIfNeeded;	// 0x35e47a31
- (id)removeSlashIfNeeded;	// 0x35e479d9
- (id)stringByAddingPercentEscapesForUsername;	// 0x35e47951
- (id)stringByRemovingPercentEscapesForUsername;	// 0x35e479a1
- (id)stringByURLEscapingPathComponent;	// 0x35e47a7d
@end

@interface NSString (DALeastInfoURLExtension)
- (id)absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)parentURL;	// 0x35e48909
@end
