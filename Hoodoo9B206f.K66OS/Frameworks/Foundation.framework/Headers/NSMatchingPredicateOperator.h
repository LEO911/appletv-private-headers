/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
@private
	int _contextLock;	// 16 = 0x10
	XXStruct_WqRe1B *_regexContext;	// 20 = 0x14
}
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x31dc86bd
- (void)_clearContext;	// 0x31dc8705
- (BOOL)_shouldEscapeForLike;	// 0x31dc8849
- (void)dealloc;	// 0x31dc8745
- (void)finalize;	// 0x31dc87a5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31dc884d
- (SEL)selector;	// 0x31dc8839
- (id)symbol;	// 0x31dc8805
@end

