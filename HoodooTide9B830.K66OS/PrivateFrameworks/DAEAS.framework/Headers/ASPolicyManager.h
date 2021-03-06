/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _updatingPolicy;	// 8 = 0x8
}
@property(assign) id<ASPolicyManagerDelegate> delegate;	// G=0x318a6781; S=0x318a6791; @synthesize=_delegate
@property(readonly, assign) BOOL updatingPolicy;	// G=0x318a66d5; converted property
- (id)initWithAccount:(id)account;	// 0x318a6639
- (id)currentPolicyKey;	// 0x318a66ed
// declared property getter: - (id)delegate;	// 0x318a6781
- (void)policyKeyChanged:(id)changed;	// 0x318a66e9
- (void)requestPolicyUpdate;	// 0x318a66e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x318a6791
// converted property getter: - (BOOL)updatingPolicy;	// 0x318a66d5
@end

