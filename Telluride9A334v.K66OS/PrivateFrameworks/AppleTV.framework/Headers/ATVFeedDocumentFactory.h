/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface ATVFeedDocumentFactory : NSObject {
}
+ (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x332fe3e5
+ (id)_feedDocumentErrorFromXMLError:(id)xmlerror;	// 0x332fe36d
+ (id)_feedDocumentWithPlist:(id)plist error:(id *)error;	// 0x332fe3e1
+ (id)_feedDocumentWithXML:(id)xml error:(id *)error;	// 0x332fe2e5
+ (id)atvSchema;	// 0x332fdc91
+ (id)feedDocumentFromURLDocument:(id)urldocument error:(id *)error;	// 0x332fdca1
+ (id)feedDocumentWithXMLData:(id)xmldata merchant:(id)merchant sourceURL:(id)url error:(id *)error;	// 0x332fdce5
+ (id)feedDocumentWithXMLDocument:(id)xmldocument merchant:(id)merchant sourceURL:(id)url error:(id *)error;	// 0x332fddc9
+ (void)initialize;	// 0x332fdbd5
+ (void)updateFeedDocument:(id)document withXMLDocument:(id)xmldocument error:(id *)error;	// 0x332fe199
@end

