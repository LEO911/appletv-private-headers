/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class MFPartialNetworkData, NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder;

@interface MimePart : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_subtype;	// 8 = 0x8
	NSMutableDictionary *_bodyParameters;	// 12 = 0xc
	NSString *_contentTransferEncoding;	// 16 = 0x10
	NSMutableDictionary *_otherIvars;	// 20 = 0x14
	NSRange _range;	// 24 = 0x18
	MFWeakReferenceHolder *_parent;	// 32 = 0x20
	MFWeakReferenceHolder *_body;	// 36 = 0x24
	MimePart *_nextPart;	// 40 = 0x28
	MFPartialNetworkData *_partialData;	// 44 = 0x2c
	NSData *_fullData;	// 48 = 0x30
	MFWeakReferenceHolder *_decodedData;	// 52 = 0x34
}
@property(retain) id contentDescription;	// G=0x346ef4c9; S=0x346ef4f5; converted property
@property(retain) id contentID;	// G=0x346ef519; S=0x346ef545; converted property
@property(retain) id contentLocation;	// G=0x346ef569; S=0x346ef595; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x346ef2b5; S=0x346ef2c5; converted property
@property(retain) id disposition;	// G=0x346ef2e1; S=0x346ef30d; converted property
@property(assign) BOOL isGenerated;	// G=0x346f3d81; S=0x346f3db1; converted property
@property(retain) id languages;	// G=0x346ef5b9; S=0x346ef5e5; converted property
@property(retain) id mimeBody;	// G=0x346efd31; S=0x346efded; converted property
@property(assign) NSRange range;	// G=0x346efb89; S=0x346efba1; converted property
@property(retain) id subparts;	// G=0x346ef721; S=0x346ef831; converted property
@property(retain) NSString *subtype;	// G=0x346ef125; S=0x346ef1b9; converted property
@property(retain) NSString *type;	// G=0x346ef0e5; S=0x346ef109; converted property
+ (Class)attachmentClass;	// 0x346f3011
+ (void)initialize;	// 0x346ee925
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x346f302d
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x346f21d5
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x346f1fd1
- (id)init;	// 0x346ef09d
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x346f6859
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x346f287d
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x346f631d
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x346f2771
- (id)_partThatIsAttachment;	// 0x346f0ca5
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x346f17c5
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x346f17a5
- (BOOL)_shouldContinueDecodingProcess;	// 0x346f300d
- (void)addSubpart:(id)subpart;	// 0x346efa49
- (id)alternativeAtIndex:(int)index;	// 0x346f1ce9
- (unsigned)approximateRawSize;	// 0x346f0b4d
- (id)attachmentFilename;	// 0x346f0625
- (id)attachments;	// 0x346f3bc9
- (id)bodyData;	// 0x346f7025
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x346f2fc9
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x346f6ff1
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x346f2f95
- (id)bodyParameterForKey:(id)key;	// 0x346ef1d5
- (id)bodyParameterKeys;	// 0x346ef275
- (id)chosenAlternativePart;	// 0x346f3c29
- (void)clearCachedDescryptedMessageBody;	// 0x346f22a9
- (void)configureFileWrapper:(id)wrapper;	// 0x346f2419
// converted property getter: - (id)contentDescription;	// 0x346ef4c9
// converted property getter: - (id)contentID;	// 0x346ef519
// converted property getter: - (id)contentLocation;	// 0x346ef569
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x346f384d
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x346f3881
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x346f30b9
// converted property getter: - (id)contentTransferEncoding;	// 0x346ef2b5
- (id)contentsForTextSystem;	// 0x346f6fdd
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x346f6fb9
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x346f6f95
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x346f6f71
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x346f6f45
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x346f6ec1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x346f2f4d
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x346f2f71
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x346f2f09
- (void)dealloc;	// 0x346eef41
- (id)decodeApplicationOctet_stream;	// 0x34701d49
- (id)decodeApplicationZip;	// 0x34701d45
- (void)decodeIfNecessary;	// 0x346f7039
- (id)decodeMultipart;	// 0x34701d9d
- (id)decodeMultipartAlternative;	// 0x34701d75
- (id)decodeMultipartRelated;	// 0x34701d4d
- (id)decodeText;	// 0x346f6839
- (id)decodedDataForData:(id)data;	// 0x346efbb5
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x346f21f9
- (id)description;	// 0x346efe45
// converted property getter: - (id)disposition;	// 0x346ef2e1
- (id)dispositionParameterForKey:(id)key;	// 0x346ef345
- (id)dispositionParameterKeys;	// 0x346ef489
- (void)download;	// 0x346f25e5
- (id)fileWrapper;	// 0x346f2759
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x346f2331
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x346f2611
- (id)firstChildPart;	// 0x346ef641
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x346f38d5
- (BOOL)hasContents;	// 0x346f6ef9
- (BOOL)isAttachment;	// 0x346f0f25
// converted property getter: - (BOOL)isGenerated;	// 0x346f3d81
- (BOOL)isHTML;	// 0x346f123d
- (BOOL)isReadableText;	// 0x346f0bf1
- (BOOL)isRich;	// 0x346f10f1
// converted property getter: - (id)languages;	// 0x346ef5b9
// converted property getter: - (id)mimeBody;	// 0x346efd31
- (id)nextSiblingPart;	// 0x346ef69d
- (int)numberOfAlternatives;	// 0x346f1b89
- (unsigned)numberOfAttachments;	// 0x346f38ad
- (id)parentPart;	// 0x346ef609
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x346f5931
- (BOOL)parseMimeBody;	// 0x346f4225
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)necessary;	// 0x346f423d
- (id)partNumber;	// 0x346f611d
- (id)preservedHeaderValueForKey:(id)key;	// 0x346ef295
// converted property getter: - (NSRange)range;	// 0x346efb89
- (id)rfc822DecodedMessageBody;	// 0x346f177d
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x346ef211
// converted property setter: - (void)setContentDescription:(id)description;	// 0x346ef4f5
// converted property setter: - (void)setContentID:(id)anId;	// 0x346ef545
// converted property setter: - (void)setContentLocation:(id)location;	// 0x346ef595
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x346ef2c5
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x346ef30d
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x346ef401
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x346f3db1
// converted property setter: - (void)setLanguages:(id)languages;	// 0x346ef5e5
// converted property setter: - (void)setMimeBody:(id)body;	// 0x346efded
// converted property setter: - (void)setRange:(NSRange)range;	// 0x346efba1
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x346ef831
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x346ef1b9
// converted property setter: - (void)setType:(id)type;	// 0x346ef109
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x346f0ded
- (id)signedData;	// 0x346f1eb5
- (id)startPart;	// 0x346f1a29
- (id)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x346f276d
- (id)subpartAtIndex:(int)index;	// 0x346ef7e5
// converted property getter: - (id)subparts;	// 0x346ef721
// converted property getter: - (id)subtype;	// 0x346ef125
- (unsigned long)textEncoding;	// 0x346f092d
- (id)textHtmlPart;	// 0x346f1f0d
- (unsigned)totalTextSize;	// 0x346f18a9
// converted property getter: - (id)type;	// 0x346ef0e5
- (BOOL)usesKnownSignatureProtocol;	// 0x346f13c1
@end
