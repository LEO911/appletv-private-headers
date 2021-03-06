/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQSDocument, SFUZipInflateInputStream, SFUCryptoKey, GQZArchive;

@interface GQPProcessor : NSObject {
	xmlTextReader *mReader;	// 4 = 0x4
	xmlParserInputBuffer *mParserInputBuffer;	// 8 = 0x8
	GQZArchive *mArchive;	// 12 = 0xc
	SFUCryptoKey *mCryptoKey;	// 16 = 0x10
	unsigned long long mTotalBytesToConsume;	// 20 = 0x14
	SFUZipInflateInputStream *mInputStream;	// 28 = 0x1c
	stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > *mStateStack;	// 32 = 0x20
	stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > *mActionStack;	// 36 = 0x24
	GQSDocument *mDocumentState;	// 40 = 0x28
	QLPreviewRequestRef mOutputPreviewRequest;	// 44 = 0x2c
	CFBundleRef mBundle;	// 48 = 0x30
	CGSize mThumbnailSize;	// 52 = 0x34
	BOOL mWrongFormat;	// 60 = 0x3c
	unsigned char mIsProgressive;	// 61 = 0x3d
}
@property(assign) CFBundleRef bundle;	// G=0x35d2af1d; S=0x35d2af41; converted property
@property(assign) CGSize thumbnailSize;	// G=0x35d2b09d; S=0x35d2b0b5; converted property
@property(assign, getter=isWrongFormat) BOOL wrongFormat;	// G=0x35d2b0d9; S=0x35d2b0e9; converted property
+ (xmlTextReader *)createXmlReaderWithPath:(id)path indexFileName:(id)name cryptoKey:(id)key;	// 0x35d2aa4d
+ (xmlTextReader *)createXmlReaderWithZipArchive:(id)zipArchive indexFileName:(id)name cryptoKey:(id)key indexEntry:(id *)entry zipInputStream:(id *)stream;	// 0x35d2a981
+ (void)initialize;	// 0x35d29c39
- (id)initWithPath:(id)path indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request cryptoKey:(id)key;	// 0x35d29c6d
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request;	// 0x35d2a3bd
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request cryptoKey:(id)key;	// 0x35d2a6c9
- (id).cxx_construct;	// 0x35d2b0f9
- (stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > *)actionStack;	// 0x35d2b06d
- (id)archive;	// 0x35d2af0d
// converted property getter: - (CFBundleRef)bundle;	// 0x35d2af1d
- (id)cryptoKey;	// 0x35d2b08d
- (void)dealloc;	// 0x35d2ad91
- (id)documentState;	// 0x35d2b07d
- (BOOL)go;	// 0x35d2af51
// converted property getter: - (BOOL)isWrongFormat;	// 0x35d2b0d9
- (void)pushInitialState;	// 0x35d2af09
// converted property setter: - (void)setBundle:(CFBundleRef)bundle;	// 0x35d2af41
- (void)setProgressiveMode:(unsigned char)mode;	// 0x35d2b0c9
// converted property setter: - (void)setThumbnailSize:(CGSize)size;	// 0x35d2b0b5
// converted property setter: - (void)setWrongFormat:(BOOL)format;	// 0x35d2b0e9
- (stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > *)stateStack;	// 0x35d2b05d
// converted property getter: - (CGSize)thumbnailSize;	// 0x35d2b09d
@end

