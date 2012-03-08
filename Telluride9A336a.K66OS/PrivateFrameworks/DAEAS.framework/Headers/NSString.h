/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x31543291
+ (BOOL)expectsContent;	// 0x3154373d
+ (BOOL)frontingBasicTypes;	// 0x3154338d
+ (BOOL)notifyOfUnknownTokens;	// 0x315433e1
+ (BOOL)parsingLeafNode;	// 0x315432e5
+ (BOOL)parsingWithSubItems;	// 0x31543339
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x31543435
- (int)parsingState;	// 0x31543739
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x315a0011
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x315a2025
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x315a2069
@end
