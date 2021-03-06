/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSHTTPURLResponse, NSNumber;

@interface SSAuthenticationResponse : NSObject {
@private
	NSDictionary *_responseDictionary;	// 4 = 0x4
	int _urlBagType;	// 8 = 0x8
	NSHTTPURLResponse *_urlResponse;	// 12 = 0xc
}
@property(assign) int URLBagType;	// G=0x36530999; S=0x365309a9; @synthesize=_urlBagType
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x36530801; 
@property(readonly, assign) int accountKind;	// G=0x3652fed1; 
@property(readonly, assign) NSString *accountName;	// G=0x3652ff89; 
@property(readonly, assign) NSNumber *accountUniqueIdentifier;	// G=0x36530075; 
@property(readonly, assign) int availableServiceTypes;	// G=0x365300c9; 
@property(readonly, assign) NSString *creditsString;	// G=0x365301ed; 
@property(readonly, assign) int enabledServiceTypes;	// G=0x3653027d; 
@property(readonly, assign) NSNumber *failureType;	// G=0x36530465; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x36530989; @synthesize=_responseDictionary
@property(readonly, assign) int responseType;	// G=0x36530685; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x36530705; 
@property(readonly, assign) NSString *token;	// G=0x36530771; 
@property(readonly, assign) NSString *userMessage;	// G=0x36530839; 
- (id)initWithURLResponse:(id)urlresponse dictionary:(id)dictionary;	// 0x3652fe11
// declared property getter: - (int)URLBagType;	// 0x36530999
// declared property getter: - (id)URLResponse;	// 0x36530801
- (int)_responseTypeForFailureType:(int)failureType;	// 0x365308c9
- (int)_responseTypeForStatusValue:(int)statusValue;	// 0x365308e5
- (id)_statusValue;	// 0x36530905
// declared property getter: - (int)accountKind;	// 0x3652fed1
// declared property getter: - (id)accountName;	// 0x3652ff89
// declared property getter: - (id)accountUniqueIdentifier;	// 0x36530075
// declared property getter: - (int)availableServiceTypes;	// 0x365300c9
// declared property getter: - (id)creditsString;	// 0x365301ed
- (void)dealloc;	// 0x3652fe85
// declared property getter: - (int)enabledServiceTypes;	// 0x3653027d
// declared property getter: - (id)failureType;	// 0x36530465
- (id)newAccount;	// 0x365304e9
// declared property getter: - (id)responseDictionary;	// 0x36530989
// declared property getter: - (int)responseType;	// 0x36530685
// declared property setter: - (void)setURLBagType:(int)type;	// 0x365309a9
// declared property getter: - (id)storeFrontIdentifier;	// 0x36530705
// declared property getter: - (id)token;	// 0x36530771
// declared property getter: - (id)userMessage;	// 0x36530839
@end

