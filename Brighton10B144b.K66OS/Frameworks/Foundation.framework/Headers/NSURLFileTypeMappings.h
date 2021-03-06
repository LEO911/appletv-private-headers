/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
	NSURLFileTypeMappingsInternal *_internal;	// 4 = 0x4
}
+ (id)sharedMappings;	// 0x318f6685
- (id)MIMETypeForExtension:(id)extension;	// 0x318f697d
- (id)_UTIMIMETypeForExtension:(id)extension;	// 0x318f69e5
- (id)_UTIextensionForMIMEType:(id)mimetype;	// 0x3196df41
- (id)_init;	// 0x318f66f1
- (id)extensionsForMIMEType:(id)mimetype;	// 0x3196e055
- (id)preferredExtensionForMIMEType:(id)mimetype;	// 0x3196dfdd
@end

