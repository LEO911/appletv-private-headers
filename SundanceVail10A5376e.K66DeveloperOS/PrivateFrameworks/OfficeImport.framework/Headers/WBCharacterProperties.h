/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBCharacterProperties : NSObject {
}
+ (WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(id)needed;	// 0x37185b61
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x37184ea9
+ (void)prepareForWriting:(id)writing properties:(id)properties wrdProperties:(WrdCharacterProperties *)properties3 tracked:(WrdCharacterProperties *)tracked;	// 0x37184ec5
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties document:(id)document properties:(id)properties4;	// 0x3702056d
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties tracked:(WrdCharacterProperties *)tracked document:(id)document properties:(id)properties5;	// 0x370204e1
+ (void)write:(id)write properties:(id)properties wrdProperties:(WrdCharacterProperties *)properties3 document:(id)document;	// 0x37184f75
@end

