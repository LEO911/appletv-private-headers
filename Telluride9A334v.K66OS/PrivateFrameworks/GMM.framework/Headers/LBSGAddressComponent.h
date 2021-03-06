/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGAddressComponent : PBCodable {
	NSString *_name;	// 4 = 0x4
	int _featureType;	// 8 = 0x8
	NSString *_locale;	// 12 = 0xc
}
@property(assign, nonatomic) int featureType;	// G=0x35b9a909; S=0x35b9a919; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasLocale;	// G=0x35b9a609; 
@property(retain, nonatomic) NSString *locale;	// G=0x35b9a929; S=0x35b9a939; @synthesize=_locale
@property(retain, nonatomic) NSString *name;	// G=0x35b9a8d5; S=0x35b9a8e5; @synthesize=_name
- (void)dealloc;	// 0x35b9a5b1
- (id)description;	// 0x35b9a621
- (id)dictionaryRepresentation;	// 0x35b9a691
// declared property getter: - (int)featureType;	// 0x35b9a909
// declared property getter: - (BOOL)hasLocale;	// 0x35b9a609
// declared property getter: - (id)locale;	// 0x35b9a929
// declared property getter: - (id)name;	// 0x35b9a8d5
- (BOOL)readFrom:(id)from;	// 0x35b9a751
// declared property setter: - (void)setFeatureType:(int)type;	// 0x35b9a919
// declared property setter: - (void)setLocale:(id)locale;	// 0x35b9a939
// declared property setter: - (void)setName:(id)name;	// 0x35b9a8e5
- (void)writeTo:(id)to;	// 0x35b9a869
@end

