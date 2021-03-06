/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class NSString, DOMMessagePort, DOMAbstractView;

@interface DOMMessageEvent : DOMEvent {
}
@property(readonly, assign) NSString *data;	// G=0x31b24e75; 
@property(readonly, assign) NSString *lastEventId;	// G=0x31b24c61; 
@property(readonly, assign) DOMMessagePort *messagePort;	// G=0x31b2503d; 
@property(readonly, assign) NSString *origin;	// G=0x31b24b51; 
@property(readonly, assign) DOMAbstractView *source;	// G=0x31b24d71; 
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x31b25149
// declared property getter: - (id)data;	// 0x31b24e75
// declared property getter: - (id)lastEventId;	// 0x31b24c61
// declared property getter: - (id)messagePort;	// 0x31b2503d
// declared property getter: - (id)origin;	// 0x31b24b51
// declared property getter: - (id)source;	// 0x31b24d71
@end

