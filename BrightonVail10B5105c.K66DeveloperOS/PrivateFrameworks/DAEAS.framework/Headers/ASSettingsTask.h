/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, NSDictionary;

@interface ASSettingsTask : ASTask {
	NSArray *_getters;	// 108 = 0x6c
	NSDictionary *_setters;	// 112 = 0x70
}
@property(retain) NSArray *getters;	// G=0x336653b1; S=0x336653c5; @synthesize=_getters
@property(retain) NSDictionary *setters;	// G=0x336653d5; S=0x336653e9; @synthesize=_setters
- (id)init;	// 0x336647fd
- (int)commandCode;	// 0x336648ad
- (void)dealloc;	// 0x33664849
- (void)finishWithError:(id)error;	// 0x33664f59
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x33664d11
// declared property getter: - (id)getters;	// 0x336653b1
- (BOOL)processContext:(id)context;	// 0x33664d25
- (id)requestBody;	// 0x336648b1
// declared property setter: - (void)setGetters:(id)getters;	// 0x336653c5
// declared property setter: - (void)setSetters:(id)setters;	// 0x336653e9
// declared property getter: - (id)setters;	// 0x336653d5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x3366532d
@end
