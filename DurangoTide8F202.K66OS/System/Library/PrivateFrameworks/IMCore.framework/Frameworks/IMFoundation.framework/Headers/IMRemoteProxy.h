/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSProtocolChecker, NSString, Protocol;

@interface IMRemoteProxy : NSObject {
@private
	NSProtocolChecker *_protocolChecker;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	id _target;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
}
@property(assign) SEL action;	// G=0x31218281; S=0x31218291; @synthesize=_selector
@property(copy) NSString *identifier;	// G=0x312184b1; S=0x312184c9; @synthesize=_identifier
@property(copy) Protocol *remoteProtocol;	// G=0x31218345; S=0x312182e1; 
@property(assign) id target;	// G=0x312182a1; S=0x312182b1; @synthesize=_target
- (id)initWithIdentifier:(id)identifier;	// 0x312183bd
// declared property getter: - (SEL)action;	// 0x31218281
- (void)dealloc;	// 0x31218365
- (void)forwardInvocation:(id)invocation;	// 0x31218401
// declared property getter: - (id)identifier;	// 0x312184b1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x312182c1
// declared property getter: - (id)remoteProtocol;	// 0x31218345
// declared property setter: - (void)setAction:(SEL)action;	// 0x31218291
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x312184c9
// declared property setter: - (void)setRemoteProtocol:(id)protocol;	// 0x312182e1
// declared property setter: - (void)setTarget:(id)target;	// 0x312182b1
// declared property getter: - (id)target;	// 0x312182a1
@end

