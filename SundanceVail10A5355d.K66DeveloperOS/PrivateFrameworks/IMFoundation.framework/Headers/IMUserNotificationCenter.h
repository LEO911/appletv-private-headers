/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject {
	NSMutableDictionary *_identifierToIMUserNotificationQueueMap;	// 4 = 0x4
	NSMutableDictionary *_identifierToListenerQueueMap;	// 8 = 0x8
	NSMutableDictionary *_identifierToBlockQueueMap;	// 12 = 0xc
	NSMutableDictionary *_identifierToRunLoopSourcesMap;	// 16 = 0x10
	NSMutableDictionary *_identifierToCFUserNotificationMap;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;	// G=0x329a6b25; S=0x329a6b35; @synthesize=_identifierToBlockQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;	// G=0x329a6b65; S=0x329a6b75; @synthesize=_identifierToCFUserNotificationMap
@property(retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;	// G=0x329a6ae5; S=0x329a6af5; @synthesize=_identifierToIMUserNotificationQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;	// G=0x329a6b05; S=0x329a6b15; @synthesize=_identifierToListenerQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;	// G=0x329a6b45; S=0x329a6b55; @synthesize=_identifierToRunLoopSourcesMap
+ (id)sharedInstance;	// 0x329a58ed
- (void)_cancelActiveUserNotificationForIdentifier:(id)identifier;	// 0x329a6065
- (id)_dequeueBlockForIdentifier:(id)identifier;	// 0x329a5c6d
- (id)_dequeueListenerForIdentifier:(id)identifier;	// 0x329a5bb9
- (id)_dequeueUserNotificationForIdentifier:(id)identifier;	// 0x329a5ae1
- (void)_displayNextUserNotificationForIdentifier:(id)identifier;	// 0x329a617d
- (void)_enqueueBlock:(id)block forIdentifier:(id)identifier;	// 0x329a5f2d
- (void)_enqueueListener:(id)listener forIdentifier:(id)identifier;	// 0x329a5e49
- (void)_enqueueUserNotification:(id)notification forIdentifier:(id)identifier;	// 0x329a5d75
- (id)_frontBlockForIdentifier:(id)identifier;	// 0x329a5aa9
- (id)_frontListenerForIdentifier:(id)identifier;	// 0x329a5a71
- (id)_frontUserNotificationForIdentifier:(id)identifier;	// 0x329a5a39
- (void)_handleUserNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x329a6321
- (void)addUserNotification:(id)notification listener:(id)listener;	// 0x329a64dd
- (void)addUserNotification:(id)notification listener:(id)listener completionHandler:(id)handler;	// 0x329a6501
- (unsigned)countForIdentifier:(id)identifier;	// 0x329a65ad
- (void)dealloc;	// 0x329a5999
// declared property getter: - (id)identifierToBlockQueueMap;	// 0x329a6b25
// declared property getter: - (id)identifierToCFUserNotificationMap;	// 0x329a6b65
// declared property getter: - (id)identifierToIMUserNotificationQueueMap;	// 0x329a6ae5
// declared property getter: - (id)identifierToListenerQueueMap;	// 0x329a6b05
// declared property getter: - (id)identifierToRunLoopSourcesMap;	// 0x329a6b45
- (void)removeAllListeners;	// 0x329a6945
- (void)removeListener:(id)listener;	// 0x329a65e5
// declared property setter: - (void)setIdentifierToBlockQueueMap:(id)blockQueueMap;	// 0x329a6b35
// declared property setter: - (void)setIdentifierToCFUserNotificationMap:(id)cfuserNotificationMap;	// 0x329a6b75
// declared property setter: - (void)setIdentifierToIMUserNotificationQueueMap:(id)imuserNotificationQueueMap;	// 0x329a6af5
// declared property setter: - (void)setIdentifierToListenerQueueMap:(id)listenerQueueMap;	// 0x329a6b15
// declared property setter: - (void)setIdentifierToRunLoopSourcesMap:(id)runLoopSourcesMap;	// 0x329a6b55
@end

