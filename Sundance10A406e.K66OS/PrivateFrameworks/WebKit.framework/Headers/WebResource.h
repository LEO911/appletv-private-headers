/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
	WebResourcePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x3084861d
- (id)initWithCoder:(id)coder;	// 0x308486b9
- (id)initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5;	// 0x30848685
- (id)MIMEType;	// 0x30849071
- (id)URL;	// 0x30849045
- (ArchiveResource *)_coreResource;	// 0x30849315
- (void)_ignoreWhenUnarchiving;	// 0x30849335
- (id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>)coreResource;	// 0x30849195
- (id)_initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5 response:(id)response copyData:(BOOL)data7;	// 0x3084935d
- (id)_initWithData:(id)data URL:(id)url response:(id)response;	// 0x308498e1
- (id)_response;	// 0x30849991
- (id)_stringValue;	// 0x308499fd
- (id)_suggestedFilename;	// 0x30849945
- (id)copyWithZone:(NSZone *)zone;	// 0x30848fed
- (id)data;	// 0x30848ffd
- (void)dealloc;	// 0x30848fa1
- (id)description;	// 0x30849131
- (void)encodeWithCoder:(id)coder;	// 0x30848e59
- (id)frameName;	// 0x308490f1
- (id)textEncodingName;	// 0x308490b1
@end

