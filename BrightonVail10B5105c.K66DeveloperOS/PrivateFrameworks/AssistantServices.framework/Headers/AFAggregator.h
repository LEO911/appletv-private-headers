/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library


@interface AFAggregator : NSObject {
	int _type;	// 4 = 0x4
	double _startTime;	// 8 = 0x8
	BOOL _hasActiveRequest;	// 16 = 0x10
	BOOL _sessionIsRetrying;	// 17 = 0x11
	BOOL _retryPrefersWWAN;	// 18 = 0x12
}
@property(assign) int connectionType;	// G=0x33c70d61; S=0x33c70d75; @synthesize=_type
@property(assign) BOOL hasActiveRequest;	// G=0x33c70d8d; S=0x33c70da5; @synthesize=_hasActiveRequest
+ (void)logRequestCancelAfterSeconds:(double)seconds;	// 0x33c70939
+ (void)logRequestCancelled;	// 0x33c70ce1
+ (void)logRequestCompleted;	// 0x33c70c61
+ (void)logRequestCompletedWithDuration:(double)duration;	// 0x33c70851
+ (void)logRequestFailed;	// 0x33c70be1
+ (void)logRequestStarted;	// 0x33c70b61
+ (void)missedAlertContextForRequest;	// 0x33c70925
+ (void)missedAppContextForRequest;	// 0x33c70911
- (void)beginSessionRetryPreferringWWAN:(BOOL)wwan;	// 0x33c70761
- (void)connectionDidDrop;	// 0x33c70719
- (void)connectionDidFail;	// 0x33c706d1
// declared property getter: - (int)connectionType;	// 0x33c70d61
// declared property getter: - (BOOL)hasActiveRequest;	// 0x33c70d8d
- (void)recordFailure:(int)failure forConnectionType:(int)connectionType;	// 0x33c70571
- (void)recordSessionRetrySuccess;	// 0x33c70601
- (void)recordSuccessForConnectionType:(int)connectionType isWarm:(BOOL)warm forTimeInterval:(double)timeInterval;	// 0x33c70459
// declared property setter: - (void)setConnectionType:(int)type;	// 0x33c70d75
// declared property setter: - (void)setHasActiveRequest:(BOOL)request;	// 0x33c70da5
- (void)speechResponseFailure;	// 0x33c70849
- (void)speechResponseReceived;	// 0x33c707b5
- (void)startWaitingForSpeechResponse;	// 0x33c70785
@end

