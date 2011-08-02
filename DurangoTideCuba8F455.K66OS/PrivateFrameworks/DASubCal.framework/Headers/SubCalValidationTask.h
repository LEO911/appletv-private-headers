/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "SubCalDATask.h"

@class NSURL, SubCalURLRequest, NSMutableData, NSString;
@protocol SubCalValidationTaskDelegate;

@interface SubCalValidationTask : SubCalDATask {
	id<SubCalValidationTaskDelegate> _delegate;	// 16 = 0x10
	SubCalURLRequest *_request;	// 20 = 0x14
	NSURL *_subscriptionURL;	// 24 = 0x18
	NSString *_username;	// 28 = 0x1c
	NSString *_password;	// 32 = 0x20
	BOOL _performQuickValidation;	// 36 = 0x24
	NSMutableData *_icsData;	// 40 = 0x28
	NSString *_calendarName;	// 44 = 0x2c
	BOOL _foundBeginVCal;	// 48 = 0x30
	BOOL _foundCalName;	// 49 = 0x31
	unsigned _searchIndex;	// 52 = 0x34
}
@property(assign) id<SubCalValidationTaskDelegate> delegate;	// G=0x33c63631; S=0x33c63641; @synthesize=_delegate
@property(retain, nonatomic) NSString *password;	// G=0x33c63601; S=0x33c63df5; @synthesize=_password
@property(assign) BOOL performQuickValidation;	// G=0x33c635e1; S=0x33c635f1; @synthesize=_performQuickValidation
@property(retain, nonatomic) NSURL *subscriptionURL;	// G=0x33c63621; S=0x33c63da5; @synthesize=_subscriptionURL
@property(retain, nonatomic) NSString *username;	// G=0x33c63611; S=0x33c63dcd; @synthesize=_username
- (BOOL)_isInvalidVCalBeginningForData:(id)data;	// 0x33c63a71
- (id)_searchForCalNameInConnectionData:(id)connectionData;	// 0x33c63ae5
- (id)_stringBeforeNewline:(const char *)newline length:(unsigned)length;	// 0x33c63bdd
- (void)_tryQuickValidationCurrentData:(id)data;	// 0x33c63c7d
- (void)dealloc;	// 0x33c639cd
// declared property getter: - (id)delegate;	// 0x33c63631
- (void)didFinish;	// 0x33c638f5
- (void)handleTrustChallenge:(id)challenge forSubCalURLRequest:(id)subCalURLRequest;	// 0x33c6378d
// declared property getter: - (id)password;	// 0x33c63601
- (void)performDelegateCallbackWithError:(id)error;	// 0x33c63945
// declared property getter: - (BOOL)performQuickValidation;	// 0x33c635e1
- (void)performTask;	// 0x33c637b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c63641
// declared property setter: - (void)setPassword:(id)password;	// 0x33c63df5
// declared property setter: - (void)setPerformQuickValidation:(BOOL)validation;	// 0x33c635f1
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x33c63da5
// declared property setter: - (void)setUsername:(id)username;	// 0x33c63dcd
- (void)subCalURLRequest:(id)request finishedWithData:(id)data error:(id)error;	// 0x33c63651
- (void)subCalURLRequest:(id)request updatedData:(id)data;	// 0x33c63769
// declared property getter: - (id)subscriptionURL;	// 0x33c63621
// declared property getter: - (id)username;	// 0x33c63611
- (void)willFinish;	// 0x33c63991
@end
