/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSData.h> // Unknown library

@class NSString;

@interface NSData (FezAdditions)
+ (id)dataWithHexString:(id)hexString;	// 0x36875fe5
+ (id)dataWithRandomBytes:(unsigned)randomBytes;	// 0x368760d5
- (id)hexString;	// 0x36873c85
- (id)hexStringOfBytes:(char *)bytes withLength:(int)length;	// 0x36870bc9
@end

@interface NSData (FezSecurityAdditions)
@property(readonly, assign, nonatomic) NSData *SHA1Data;	// G=0x3687b975; 
@property(readonly, assign, nonatomic) NSString *SHA1HexString;	// G=0x36870b3d; 
// declared property getter: - (id)SHA1Data;	// 0x3687b975
// declared property getter: - (id)SHA1HexString;	// 0x36870b3d
@end

