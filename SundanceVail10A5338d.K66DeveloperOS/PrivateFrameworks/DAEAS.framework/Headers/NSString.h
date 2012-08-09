/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x36eda7c5
+ (BOOL)expectsContent;	// 0x36edac51
+ (BOOL)frontingBasicTypes;	// 0x36eda8c1
+ (BOOL)notifyOfUnknownTokens;	// 0x36eda915
+ (BOOL)parsingLeafNode;	// 0x36eda819
+ (BOOL)parsingWithSubItems;	// 0x36eda86d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x36eda969
- (int)parsingState;	// 0x36edac4d
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x36f38e01
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x36f3ad01
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x36f3ad45
@end
