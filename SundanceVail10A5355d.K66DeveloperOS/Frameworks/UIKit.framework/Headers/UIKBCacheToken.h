/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _emptyFields;	// 12 = 0xc
}
@property(assign, nonatomic) int displayHint;	// G=0x33db1741; S=0x33db1779; 
@property(assign, nonatomic) int emptyFields;	// G=0x33db2059; S=0x33db2069; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x33db17c5; 
@property(retain, nonatomic) NSString *name;	// G=0x33db2039; S=0x33db2049; @synthesize=_name
@property(assign, nonatomic) int rowHint;	// G=0x33db16bd; S=0x33db16f5; 
@property(assign, nonatomic) CGSize size;	// G=0x33db15d9; S=0x33db1641; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x33adc1d9; 
+ (id)tokenForKey:(id)key style:(int)style state:(int)state;	// 0x33adbe8d
+ (id)tokenForKey:(id)key style:(int)style state:(int)state clipCorners:(int)corners;	// 0x33db1af1
+ (id)tokenForKeyplane:(id)keyplane;	// 0x33db1995
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33db1e91
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x33db1d35
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33db1ce9
- (id)initWithComponents:(id)components name:(id)name;	// 0x33adc129
- (id)initWithComponents:(id)components name:(id)name emptyFields:(int)fields;	// 0x33adc14d
- (id)copyWithZone:(NSZone *)zone;	// 0x33db15c9
- (void)dealloc;	// 0x33adc201
// declared property getter: - (int)displayHint;	// 0x33db1741
// declared property getter: - (int)emptyFields;	// 0x33db2059
// declared property getter: - (BOOL)hasKey;	// 0x33db17c5
// declared property getter: - (id)name;	// 0x33db2039
// declared property getter: - (int)rowHint;	// 0x33db16bd
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x33db1779
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x33db2069
// declared property setter: - (void)setName:(id)name;	// 0x33db2049
// declared property setter: - (void)setRowHint:(int)hint;	// 0x33db16f5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33db1641
// declared property getter: - (CGSize)size;	// 0x33db15d9
// declared property getter: - (id)string;	// 0x33adc1d9
- (id)stringForKey:(id)key state:(int)state;	// 0x33db181d
- (id)stringForSplitState:(BOOL)splitState;	// 0x33db1909
- (id)stringForState:(int)state;	// 0x33db18cd
@end
