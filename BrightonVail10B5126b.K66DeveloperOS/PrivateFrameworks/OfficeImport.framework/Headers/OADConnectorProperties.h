/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShapeProperties.h"

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
	OADConnection *mFrom;	// 52 = 0x34
	OADConnection *mTo;	// 56 = 0x38
}
+ (id)defaultProperties;	// 0x3493b915
- (id)init;	// 0x3493b885
- (id)initWithDefaults;	// 0x3493b95d
- (void)dealloc;	// 0x34941f49
- (id)from;	// 0x3493babd
- (id)to;	// 0x3493bb6d
@end
