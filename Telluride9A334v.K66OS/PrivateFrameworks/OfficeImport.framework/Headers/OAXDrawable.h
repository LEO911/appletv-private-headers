/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXDrawable : NSObject {
}
+ (id)readDrawableFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x3568ea35
+ (id)readDrawablesFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x3568e9ad
+ (void)readNonVisualPropertiesFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace toDrawable:(id)drawable drawingState:(id)state;	// 0x35674bc1
@end

