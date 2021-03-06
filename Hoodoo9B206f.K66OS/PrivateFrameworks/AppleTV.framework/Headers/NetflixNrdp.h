/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	BOOL isReady_;	// 12 = 0xc
	BOOL isError_;	// 13 = 0xd
	NSMutableDictionary *eventListeners_;	// 16 = 0x10
	NSMutableDictionary *syncData_;	// 20 = 0x14
	NSMutableDictionary *setPropertyPending_;	// 24 = 0x18
	NSMutableDictionary *setPropertyCurrent_;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x36940931; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x3694093d; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x36940955; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x36940949; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x36940925; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x36941e79; S=0x36941e8d; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x36941e59; S=0x36941e69; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x36941e39; S=0x36941e49; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x36941f21; S=0x36941f35; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x36941ee9; S=0x36941efd; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x36941eb1; S=0x36941ec5; @synthesize=syncData_
+ (id)sharedInstance;	// 0x369406bd
- (id)init;	// 0x3694079d
// declared property getter: - (id)ACTION_ID;	// 0x36940931
// declared property getter: - (id)COMPLETE;	// 0x3694093d
// declared property getter: - (id)ERROR;	// 0x36940955
// declared property getter: - (id)NETWORK_ERROR;	// 0x36940949
// declared property getter: - (id)READY;	// 0x36940925
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x369412fd
- (void)addEventListener:(id)listener name:(id)name;	// 0x369412a5
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x369415e9
- (void)dealloc;	// 0x36940879
// declared property getter: - (id)eventListeners;	// 0x36941e79
- (id)getSubObject:(id)object;	// 0x36941da1
- (void)gotEvent:(id)event;	// 0x36940961
- (BOOL)handleEvent:(id)event;	// 0x369411b9
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x36941b0d
// declared property getter: - (BOOL)isError;	// 0x36941e59
// declared property getter: - (BOOL)isReady;	// 0x36941e39
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x36941725
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x36941421
- (void)removeEventListener:(id)listener name:(id)name;	// 0x369412d1
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x36941e8d
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x36941e69
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x36941e49
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x36941831
// declared property getter: - (id)setPropertyCurrent;	// 0x36941f21
// declared property getter: - (id)setPropertyPending;	// 0x36941ee9
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x36941f35
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x36941efd
// declared property setter: - (void)setSyncData:(id)data;	// 0x36941ec5
// declared property getter: - (id)syncData;	// 0x36941eb1
- (id)syncDataForObject:(id)object;	// 0x36941a11
@end

