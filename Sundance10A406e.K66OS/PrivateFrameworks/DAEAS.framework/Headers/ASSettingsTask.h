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
@property(retain) NSArray *getters;	// G=0x36c23971; S=0x36c23985; @synthesize=_getters
@property(retain) NSDictionary *setters;	// G=0x36c23995; S=0x36c239a9; @synthesize=_setters
- (id)init;	// 0x36c22dbd
- (int)commandCode;	// 0x36c22e6d
- (void)dealloc;	// 0x36c22e09
- (void)finishWithError:(id)error;	// 0x36c23519
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x36c232d1
// declared property getter: - (id)getters;	// 0x36c23971
- (BOOL)processContext:(id)context;	// 0x36c232e5
- (id)requestBody;	// 0x36c22e71
// declared property setter: - (void)setGetters:(id)getters;	// 0x36c23985
// declared property setter: - (void)setSetters:(id)setters;	// 0x36c239a9
// declared property getter: - (id)setters;	// 0x36c23995
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x36c238ed
@end

