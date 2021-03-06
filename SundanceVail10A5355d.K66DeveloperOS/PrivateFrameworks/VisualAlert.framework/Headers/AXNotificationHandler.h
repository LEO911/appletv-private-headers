/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXNotificationHandler : NSObject {
	NSString *_notificationName;	// 4 = 0x4
	id _target;	// 8 = 0x8
	id _dispatcher;	// 12 = 0xc
	unsigned _observerIdentifier;	// 16 = 0x10
	BOOL _valid;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;	// G=0x37aa6879; S=0x37aa6889; 
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;	// G=0x37aa7151; S=0x37aa7161; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x37aa7171; S=0x37aa7181; @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x37aa7141; @synthesize=_valid
+ (id)_safelyGetObserverForIdentifier:(unsigned)identifier;	// 0x37aa6f5d
+ (unsigned)_safelyRegisterObserver:(id)observer;	// 0x37aa6c8d
+ (void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;	// 0x37aa6e89
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;	// 0x37aa66cd
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x37aa66f1
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x37aa6671
// declared property getter: - (id)_dispatcher;	// 0x37aa6879
- (void)_handleNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x37aa6c49
// declared property getter: - (id)_notificationName;	// 0x37aa7151
- (id)_notificationTypeDescription;	// 0x37aa6949
// declared property setter: - (void)_setDispatcher:(id)dispatcher;	// 0x37aa6889
// declared property setter: - (void)_setNotificationName:(id)name;	// 0x37aa7161
// declared property setter: - (void)_setTarget:(id)target;	// 0x37aa7181
- (void)_startObserving;	// 0x37aa6afd
- (void)_stopObserving;	// 0x37aa6b31
// declared property getter: - (id)_target;	// 0x37aa7171
- (void)dealloc;	// 0x37aa6839
- (id)description;	// 0x37aa68bd
- (void)invalidate;	// 0x37aa697d
// declared property getter: - (BOOL)isValid;	// 0x37aa7141
- (void)processHandler:(SEL)handler;	// 0x37aa6b65
@end

