/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface GEOTileAttributionInfo : NSObject {
	NSString *_provider;	// 4 = 0x4
	int _type;	// 8 = 0x8
	int _year;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *provider;	// G=0x32d0acf9; S=0x32d0ad09; @synthesize=_provider
@property(assign, nonatomic) int type;	// G=0x32d0ad2d; S=0x32d0ad3d; @synthesize=_type
@property(assign, nonatomic) int year;	// G=0x32d0ad4d; S=0x32d0ad5d; @synthesize=_year
- (void)dealloc;	// 0x32d0ab85
- (unsigned)hash;	// 0x32d0acb1
- (BOOL)isEqual:(id)equal;	// 0x32d0abd1
// declared property getter: - (id)provider;	// 0x32d0acf9
// declared property setter: - (void)setProvider:(id)provider;	// 0x32d0ad09
// declared property setter: - (void)setType:(int)type;	// 0x32d0ad3d
// declared property setter: - (void)setYear:(int)year;	// 0x32d0ad5d
// declared property getter: - (int)type;	// 0x32d0ad2d
// declared property getter: - (int)year;	// 0x32d0ad4d
@end
