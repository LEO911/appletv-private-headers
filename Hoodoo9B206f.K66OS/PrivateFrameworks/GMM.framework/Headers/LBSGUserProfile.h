/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGUserProfile : PBCodable {
	NSString *_userName;	// 4 = 0x4
	NSString *_authToken;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *authToken;	// G=0x33cde22d; S=0x33cde23d; @synthesize=_authToken
@property(readonly, assign, nonatomic) BOOL hasAuthToken;	// G=0x33cddfa5; 
@property(readonly, assign, nonatomic) BOOL hasUserName;	// G=0x33cddf8d; 
@property(retain, nonatomic) NSString *userName;	// G=0x33cde1f9; S=0x33cde209; @synthesize=_userName
// declared property getter: - (id)authToken;	// 0x33cde22d
- (void)dealloc;	// 0x33cddf35
- (id)description;	// 0x33cddfbd
- (id)dictionaryRepresentation;	// 0x33cde02d
// declared property getter: - (BOOL)hasAuthToken;	// 0x33cddfa5
// declared property getter: - (BOOL)hasUserName;	// 0x33cddf8d
- (BOOL)readFrom:(id)from;	// 0x33cde0ad
// declared property setter: - (void)setAuthToken:(id)token;	// 0x33cde23d
// declared property setter: - (void)setUserName:(id)name;	// 0x33cde209
// declared property getter: - (id)userName;	// 0x33cde1f9
- (void)writeTo:(id)to;	// 0x33cde1a1
@end
