/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"
#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
@private
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x304f0971
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x304f097d
- (void)continue;	// 0x3052e305
- (void)dealloc;	// 0x304f2189
- (void)download;	// 0x3052e2ed
- (void)finalize;	// 0x3052e35d
- (void)ignore;	// 0x3052e2d5
- (void)invalidate;	// 0x3052e31d
- (void)receivedPolicyDecision:(int)decision;	// 0x304f0a69
- (void)use;	// 0x304f0a51
@end

