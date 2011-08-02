/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GMMImage : PBCodable {
@private
	NSString *_key;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSData *_imageData;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasImageData;	// G=0x32b8ed69; 
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x32b8ed55; 
@property(retain, nonatomic) NSData *imageData;	// G=0x32b8ed7d; S=0x32b8f1f9; @synthesize=_imageData
@property(retain, nonatomic) NSString *key;	// G=0x32b8edad; S=0x32b8f1d1; @synthesize=_key
@property(assign, nonatomic) int type;	// G=0x32b8ed8d; S=0x32b8ed9d; @synthesize=_type
- (id)init;	// 0x32b8edbd
- (void)dealloc;	// 0x32b8f175
- (id)description;	// 0x32b8ee91
- (id)dictionaryRepresentation;	// 0x32b8ede9
// declared property getter: - (BOOL)hasImageData;	// 0x32b8ed69
// declared property getter: - (BOOL)hasKey;	// 0x32b8ed55
// declared property getter: - (id)imageData;	// 0x32b8ed7d
// declared property getter: - (id)key;	// 0x32b8edad
- (BOOL)readFrom:(id)from;	// 0x32b8f041
// declared property setter: - (void)setImageData:(id)data;	// 0x32b8f1f9
// declared property setter: - (void)setKey:(id)key;	// 0x32b8f1d1
// declared property setter: - (void)setType:(int)type;	// 0x32b8ed9d
// declared property getter: - (int)type;	// 0x32b8ed8d
- (void)writeTo:(id)to;	// 0x32b8efa9
@end
