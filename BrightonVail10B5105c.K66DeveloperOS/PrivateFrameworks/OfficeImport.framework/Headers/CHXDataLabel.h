/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHXDataLabel : NSObject {
}
+ (id)chdDataLabelFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement state:(id)state;	// 0x37a9aedd
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement;	// 0x37a9b419
+ (Class)chdDataValuePropertiesClassWithState:(id)state;	// 0x37a9b571
+ (void)readFrom:(xmlNode *)from dataValuePropertiesCollection:(id)collection state:(id)state;	// 0x37a9acdd
@end

