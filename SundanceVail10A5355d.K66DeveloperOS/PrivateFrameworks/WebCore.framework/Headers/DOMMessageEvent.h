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
@property(readonly, assign) NSString *data;	// G=0x30d6857d; 
@property(readonly, assign) NSString *lastEventId;	// G=0x30d68369; 
@property(readonly, assign) DOMMessagePort *messagePort;	// G=0x30d68745; 
@property(readonly, assign) NSString *origin;	// G=0x30d68259; 
@property(readonly, assign) DOMAbstractView *source;	// G=0x30d68479; 
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x30d68851
// declared property getter: - (id)data;	// 0x30d6857d
// declared property getter: - (id)lastEventId;	// 0x30d68369
// declared property getter: - (id)messagePort;	// 0x30d68745
// declared property getter: - (id)origin;	// 0x30d68259
// declared property getter: - (id)source;	// 0x30d68479
@end
