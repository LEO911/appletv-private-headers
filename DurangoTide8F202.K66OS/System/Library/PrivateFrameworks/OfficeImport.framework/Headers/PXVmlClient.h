/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OAVClient.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PXVmlClient : NSObject <OAVClient> {
}
+ (id)colorWithRecolorInfoColorString:(id)recolorInfoColorString;	// 0x31af639d
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x31af6399
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x31a62809
+ (int)vmlSupportLevel;	// 0x31a626cd
@end
