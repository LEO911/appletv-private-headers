/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADVector3D, OADPoint3D;

@interface OADBackdrop : NSObject <NSCopying> {
	OADPoint3D *mAnchor;	// 4 = 0x4
	OADVector3D *mNormal;	// 8 = 0x8
	OADVector3D *mUp;	// 12 = 0xc
}
@property(retain) id anchor;	// G=0x34a5060d; S=0x34a5061d; converted property
@property(retain) id normal;	// G=0x34a50659; S=0x34a50669; converted property
@property(retain) id up;	// G=0x34a506a5; S=0x34a506b5; converted property
- (id)init;	// 0x34a50495
// converted property getter: - (id)anchor;	// 0x34a5060d
- (id)copyWithZone:(NSZone *)zone;	// 0x34a50569
- (void)dealloc;	// 0x34a504f1
- (unsigned)hash;	// 0x34a506f1
- (BOOL)isEqual:(id)equal;	// 0x34a5074d
// converted property getter: - (id)normal;	// 0x34a50659
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x34a5061d
// converted property setter: - (void)setNormal:(id)normal;	// 0x34a50669
// converted property setter: - (void)setUp:(id)up;	// 0x34a506b5
// converted property getter: - (id)up;	// 0x34a506a5
@end
