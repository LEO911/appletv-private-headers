/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EDWarnings : NSObject {
	CFArrayRef mWarnings;	// 4 = 0x4
}
- (id)init;	// 0x34a6ec35
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x34b7e6a5
- (void)dealloc;	// 0x34a9d60d
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x34c0a7e9
@end

