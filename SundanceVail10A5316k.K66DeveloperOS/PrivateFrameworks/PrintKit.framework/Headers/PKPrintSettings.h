/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {
@private
	NSMutableDictionary *_dict;	// 4 = 0x4
	PKPaper *paper;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableDictionary *dict;	// G=0x314ebd5d; S=0x314ebd6d; @synthesize=_dict
@property(retain, nonatomic) PKPaper *paper;	// G=0x314ebd7d; S=0x314ebd8d; @synthesize
+ (id)default;	// 0x314ebb05
+ (id)photo;	// 0x314ebbad
+ (id)printSettingsForPrinter:(id)printer;	// 0x314ebc85
- (id)init;	// 0x314eba29
- (void)dealloc;	// 0x314eb9d1
// declared property getter: - (id)dict;	// 0x314ebd5d
- (id)objectForKey:(id)key;	// 0x314ebae5
// declared property getter: - (id)paper;	// 0x314ebd7d
- (void)removeObjectForKey:(id)key;	// 0x314ebac5
// declared property setter: - (void)setDict:(id)dict;	// 0x314ebd6d
- (void)setObject:(id)object forKey:(id)key;	// 0x314ebaa5
// declared property setter: - (void)setPaper:(id)paper;	// 0x314ebd8d
- (id)settingsDict;	// 0x314eba95
@end
