/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
@private
	NSURLFileTypeMappingsInternal *_internal;	// 4 = 0x4
}
+ (id)sharedMappings;	// 0x3277304d
- (id)MIMETypeForExtension:(id)extension;	// 0x3277330d
- (id)_UTIMIMETypeForExtension:(id)extension;	// 0x32773365
- (id)_UTIextensionForMIMEType:(id)mimetype;	// 0x327d7f1d
- (id)_init;	// 0x327730a9
- (id)extensionsForMIMEType:(id)mimetype;	// 0x327d7e3d
- (id)preferredExtensionForMIMEType:(id)mimetype;	// 0x327d7eb5
@end

