/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString, ASEventUID, NSDate;

@interface ASMeetingResponseItem : NSObject {
	NSString *_deliveryItemFolderId;	// 4 = 0x4
	NSString *_deliveryItemServerId;	// 8 = 0x8
	int _meetingResponse;	// 12 = 0xc
	ASEventUID *_eventUID;	// 16 = 0x10
	NSString *_instanceId;	// 20 = 0x14
	NSString *_calEventServerId;	// 24 = 0x18
	int _status;	// 28 = 0x1c
	id _context;	// 32 = 0x20
	NSDate *_instanceDate;	// 36 = 0x24
}
@property(retain) NSString *calEventServerId;	// G=0x32267e65; S=0x32267e79; @synthesize=_calEventServerId
@property(retain) id context;	// G=0x32267eb5; S=0x32267ec9; @synthesize=_context
@property(readonly, assign) NSString *deliveryItemFolderId;	// G=0x32267e01; @synthesize=_deliveryItemFolderId
@property(readonly, assign) NSString *deliveryItemServerId;	// G=0x32267e15; @synthesize=_deliveryItemServerId
@property(readonly, assign) ASEventUID *eventUID;	// G=0x32267e51; @synthesize=_eventUID
@property(readonly, assign) NSDate *instanceDate;	// G=0x32267e29; @synthesize=_instanceDate
@property(readonly, assign) int meetingResponse;	// G=0x32267e3d; @synthesize=_meetingResponse
@property(assign) int status;	// G=0x32267e89; S=0x32267e9d; @synthesize=_status
- (id)initWithDeliveryItemFolderId:(id)deliveryItemFolderId deliveryItemServerId:(id)anId instanceDate:(id)date meetingResponse:(int)response eventUID:(id)uid;	// 0x32267bb5
// declared property getter: - (id)calEventServerId;	// 0x32267e65
// declared property getter: - (id)context;	// 0x32267eb5
- (void)dealloc;	// 0x32267d4d
// declared property getter: - (id)deliveryItemFolderId;	// 0x32267e01
// declared property getter: - (id)deliveryItemServerId;	// 0x32267e15
- (id)description;	// 0x32267c71
// declared property getter: - (id)eventUID;	// 0x32267e51
// declared property getter: - (id)instanceDate;	// 0x32267e29
// declared property getter: - (int)meetingResponse;	// 0x32267e3d
// declared property setter: - (void)setCalEventServerId:(id)anId;	// 0x32267e79
// declared property setter: - (void)setContext:(id)context;	// 0x32267ec9
// declared property setter: - (void)setStatus:(int)status;	// 0x32267e9d
// declared property getter: - (int)status;	// 0x32267e89
@end

