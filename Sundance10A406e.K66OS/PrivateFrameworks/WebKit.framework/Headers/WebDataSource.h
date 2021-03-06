/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


@interface WebDataSource : NSObject {
	void *_private;	// 4 = 0x4
}
@property(assign) id dataSourceDelegate;	// G=0x30803329; S=0x30803315; converted property
+ (id)_repTypesAllowImageTypeOmission:(BOOL)omission;	// 0x307e8ed5
+ (Class)_representationClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x307e9849
+ (void)initialize;	// 0x30802cf1
- (id)initWithRequest:(id)request;	// 0x308037c9
- (id)_URL;	// 0x30803799
- (void)_addSubframeArchives:(id)archives;	// 0x30802d3d
- (id)_documentFragmentWithArchive:(id)archive;	// 0x308033a1
- (id)_documentFragmentWithImageResource:(id)imageResource;	// 0x30803661
- (DocumentLoader *)_documentLoader;	// 0x307e12dd
- (void)_finishedLoading;	// 0x307ecf45
- (id)_imageElementWithImageResource:(id)imageResource;	// 0x308036cd
- (id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>)documentLoader;	// 0x307e0225
- (BOOL)_isDocumentHTML;	// 0x307d4469
- (id)_mainDocumentError;	// 0x30802d25
- (void)_makeRepresentation;	// 0x307e9571
- (void)_receivedData:(id)data;	// 0x307ebc11
- (void)_replaceSelectionWithArchive:(id)archive selectReplacement:(BOOL)replacement;	// 0x30803351
- (id)_responseMIMEType;	// 0x307d449d
- (void)_revertToProvisionalState;	// 0x3080333d
- (void)_setAllowToBeMemoryMapped;	// 0x308030fd
- (void)_setDeferMainResourceDataLoad:(BOOL)load;	// 0x30802f31
- (void)_setMainDocumentError:(id)error;	// 0x307f5d35
- (void)_setOverrideTextEncodingName:(id)name;	// 0x30802f55
- (void)_setRepresentation:(id)representation;	// 0x307e98ed
- (BOOL)_transferApplicationCache:(id)cache;	// 0x30802db1
- (id)_webView;	// 0x307d6281
- (void)addSubresource:(id)subresource;	// 0x30804411
- (id)data;	// 0x30803add
// converted property getter: - (id)dataSourceDelegate;	// 0x30803329
- (void)dealloc;	// 0x307eb755
- (void)finalize;	// 0x308039e5
- (id)initialRequest;	// 0x307ec335
- (BOOL)isLoading;	// 0x30803c95
- (id)mainResource;	// 0x30803e21
- (id)pageTitle;	// 0x307e12f1
- (id)representation;	// 0x307e1319
- (id)request;	// 0x307d4f49
- (id)response;	// 0x307d44c5
// converted property setter: - (void)setDataSourceDelegate:(id)delegate;	// 0x30803315
- (id)subresourceForURL:(id)url;	// 0x308041b9
- (id)subresources;	// 0x30803fa5
- (id)textEncodingName;	// 0x30803c39
- (id)unreachableURL;	// 0x307d4f19
- (id)webArchive;	// 0x30803cb1
- (id)webFrame;	// 0x307d62a9
@end

