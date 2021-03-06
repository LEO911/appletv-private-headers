/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDStyle;

@interface EMCellNumberMapper : CMMapper {
	double edValue;	// 8 = 0x8
	EDStyle *edStyle;	// 16 = 0x10
}
- (id)initWithDoubleValue:(double)doubleValue style:(id)style parent:(id)parent;	// 0x37962ef1
- (id)formatValueAsNumber;	// 0x3796d8f1
- (id)insertRedSpanIfNegativeAt:(id)at;	// 0x3796bef9
- (void)mapAt:(id)at withState:(id)state;	// 0x37962f49
@end

