/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
@private
	WebResourcePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x364df7d5
- (id)initWithCoder:(id)coder;	// 0x364dfb71
- (id)initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5;	// 0x364e0265
- (id)MIMEType;	// 0x364df925
- (id)URL;	// 0x364df965
- (ArchiveResource *)_coreResource;	// 0x364df639
- (void)_ignoreWhenUnarchiving;	// 0x364df659
- (id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>)coreResource;	// 0x364e0315
- (id)_initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5 response:(id)response copyData:(BOOL)data7;	// 0x364e0495
- (id)_initWithData:(id)data URL:(id)url response:(id)response;	// 0x364e02a9
- (id)_response;	// 0x364e0909
- (id)_stringValue;	// 0x364e09b9
- (id)_suggestedFilename;	// 0x364e0975
- (id)copyWithZone:(NSZone *)zone;	// 0x364df9dd
- (id)data;	// 0x364df995
- (void)dealloc;	// 0x364df9ed
- (id)description;	// 0x364df839
- (void)encodeWithCoder:(id)coder;	// 0x364dfa39
- (id)frameName;	// 0x364df8a5
- (id)textEncodingName;	// 0x364df8e5
@end
