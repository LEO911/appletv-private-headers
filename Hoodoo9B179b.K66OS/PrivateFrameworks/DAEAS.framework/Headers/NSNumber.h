/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSNumber.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSNumber (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x31dafb71
+ (BOOL)expectsContent;	// 0x31dafdb5
+ (BOOL)frontingBasicTypes;	// 0x31dafc6d
+ (BOOL)notifyOfUnknownTokens;	// 0x31dafcc1
+ (BOOL)parsingLeafNode;	// 0x31dafbc5
+ (BOOL)parsingWithSubItems;	// 0x31dafc19
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x31dafd15
- (int)parsingState;	// 0x31dafdb1
@end
