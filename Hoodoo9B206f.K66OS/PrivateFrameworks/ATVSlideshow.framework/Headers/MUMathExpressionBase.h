/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSError;

@interface MUMathExpressionBase : NSObject {
	NSMutableDictionary *_indicesForVariables;	// 4 = 0x4
	NSError *_lastError;	// 8 = 0x8
}
@property(readonly, retain) NSError *lastError;	// G=0x30af60a1; converted property
+ (id)parserErrorToString:(XXStruct_HETg$A *)string;	// 0x30af60b1
- (id)init;	// 0x30af5f79
- (void)_cleanup;	// 0x30af5fdd
- (void)dealloc;	// 0x30af6021
- (void)finalize;	// 0x30af6061
// converted property getter: - (id)lastError;	// 0x30af60a1
- (void)setLastError:(XXStruct_HETg$A *)error;	// 0x30af6235
@end
