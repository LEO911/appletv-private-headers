/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTableCellBodyProperties : NSObject {
}
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x33be35b5
+ (void)mapProperties:(id)properties toWordProperties:(WrdTableProperties *)wordProperties index:(int)index;	// 0x33be35d1
+ (void)mapWordProperties:(WrdTableProperties *)properties toProperties:(id)properties2 index:(int)index;	// 0x33aa2dbd
+ (void)readFrom:(WrdTableProperties *)from tracked:(WrdTableProperties *)tracked properties:(id)properties index:(int)index;	// 0x33aa2c5d
+ (void)write:(id)write wrdProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked index:(int)index;	// 0x33be352d
@end
