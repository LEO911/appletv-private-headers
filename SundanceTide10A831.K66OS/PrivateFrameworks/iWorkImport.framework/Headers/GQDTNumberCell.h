/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDTComputedFormatSpec;

@interface GQDTNumberCell : GQDTCell {
	double mValue;	// 16 = 0x10
	GQDTComputedFormatSpec *mComputedFormat;	// 24 = 0x18
}
- (CFStringRef)createStringValue;	// 0x35d01a39
- (void)dealloc;	// 0x35d019d5
- (int)readAttributesForNCell:(xmlTextReader *)ncell;	// 0x35d01b61
- (int)readAttributesForNumberCell:(xmlTextReader *)numberCell;	// 0x35d01b09
- (double)value;	// 0x35d01a21
@end
