/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSURL, NSData;

@interface MCFontPayload : MCPayload {
	NSData *_fontData;	// 44 = 0x2c
	NSString *_name;	// 48 = 0x30
	NSURL *_persistentURL;	// 52 = 0x34
}
@property(retain, nonatomic) NSData *fontData;	// G=0x313d6525; S=0x313d6535; @synthesize=_fontData
@property(retain, nonatomic) NSString *name;	// G=0x313d655d; S=0x313d656d; @synthesize=_name
@property(retain, nonatomic) NSURL *persistentURL;	// G=0x313d6595; S=0x313d65a5; @synthesize=_persistentURL
+ (id)localizedPluralForm;	// 0x313d5dc5
+ (id)localizedSingularForm;	// 0x313d5db1
+ (id)typeStrings;	// 0x313d5d79
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x313d5dd9
- (void).cxx_destruct;	// 0x313d65cd
- (id)description;	// 0x313d6385
// declared property getter: - (id)fontData;	// 0x313d6525
// declared property getter: - (id)name;	// 0x313d655d
// declared property getter: - (id)persistentURL;	// 0x313d6595
// declared property setter: - (void)setFontData:(id)data;	// 0x313d6535
// declared property setter: - (void)setName:(id)name;	// 0x313d656d
// declared property setter: - (void)setPersistentURL:(id)url;	// 0x313d65a5
- (id)stubDictionary;	// 0x313d6271
- (id)subtitle1Description;	// 0x313d64e5
- (id)subtitle1Label;	// 0x313d64a5
- (id)title;	// 0x313d6491
@end

