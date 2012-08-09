/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@protocol GQHXMLOutput;

@interface GQHXML : NSObject {
	id<GQHXMLOutput> mOutput;	// 4 = 0x4
	BOOL mUseExternalCss;	// 8 = 0x8
	CFStringRef mFilename;	// 12 = 0xc
	CFStringRef mCssFilename;	// 16 = 0x10
	CFStringRef mCss;	// 20 = 0x14
	CFStringRef mLastCss;	// 24 = 0x18
	bool isProgressive;	// 28 = 0x1c
}
@property(readonly, assign) bool isProgressive;	// G=0x3583e35d; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x3583d819
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x3583d8d1
- (void)addCharRef:(const char *)ref;	// 0x3583debd
- (void)addContent:(CFStringRef)content;	// 0x3583ddf5
- (void)addStyleClass:(CFStringRef)aClass;	// 0x3583dedd
- (void)addStyleClassLast:(CFStringRef)last;	// 0x3583def1
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x3583df1d
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x3583dfd9
- (void)addXmlCharContent:(const char *)content;	// 0x3583de9d
- (CFDataRef)createProgressiveHtml;	// 0x3583e285
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x3583e2a5
- (CFStringRef)cssFilename;	// 0x3583df0d
- (void)dealloc;	// 0x3583db69
- (void)endElement;	// 0x3583dc39
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x3583dc59
// declared property getter: - (bool)isProgressive;	// 0x3583e35d
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x3583dc99
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x3583dda1
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x3583dd4d
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x3583dc79
- (void)startElement:(const char *)element;	// 0x3583dc19
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x3583e0a1
@end
