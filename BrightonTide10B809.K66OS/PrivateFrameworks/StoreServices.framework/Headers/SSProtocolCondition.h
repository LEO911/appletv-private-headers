/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library


@interface SSProtocolCondition : NSObject {
	int _operator;	// 4 = 0x4
	id _value;	// 8 = 0x8
}
+ (id)newConditionWithDictionary:(id)dictionary;	// 0x354d3d85
- (id)initWithDictionary:(id)dictionary;	// 0x354d3e3d
- (void)dealloc;	// 0x354d3f09
- (BOOL)evaluateWithContext:(id)context;	// 0x354d3f55
@end

