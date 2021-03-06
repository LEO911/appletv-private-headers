/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "AXHearingAidDevice.h"

@class NSMutableArray, NSString;

@interface AXHearingAidFakeDevice : AXHearingAidDevice {
	NSMutableArray *_leftFakePrograms;	// 160 = 0xa0
	NSMutableArray *_rightFakePrograms;	// 164 = 0xa4
	int updateCount;	// 168 = 0xa8
	BOOL _connected;	// 172 = 0xac
	int _type;	// 176 = 0xb0
}
@property(assign, nonatomic) BOOL connected;	// G=0x3336a755; S=0x3336a765; @synthesize=_connected
@property(readonly, assign, getter=isConnected) BOOL connected;	// G=0x33369a31; converted property
@property(assign, nonatomic) BOOL isConnecting;
@property(assign, nonatomic) BOOL isPaired;	// G=0x33369a49; 
@property(assign, nonatomic) float leftBatteryLevel;
@property(retain, nonatomic) NSString *leftUUID;
@property(retain, nonatomic) NSString *manufacturer;
@property(retain, nonatomic) NSString *model;
@property(retain, nonatomic) NSString *name;
@property(assign, nonatomic) float rightBatteryLevel;
@property(retain, nonatomic) NSString *rightUUID;
@property(assign, nonatomic) int type;	// G=0x3336a775; S=0x3336a785; @synthesize=_type
@property(assign, nonatomic) int updateCount;	// G=0x3336a735; S=0x3336a745; @synthesize
- (id)initWithDeviceType:(int)deviceType;	// 0x333693bd
- (void)connect;	// 0x3336980d
// declared property getter: - (BOOL)connected;	// 0x3336a755
- (void)createPrograms;	// 0x33369a61
- (void)dealloc;	// 0x333695f5
- (BOOL)didLoadBasicProperties;	// 0x3336a27d
- (BOOL)didLoadRequiredProperties;	// 0x3336a281
- (void)disconnect;	// 0x333698f9
// converted property getter: - (BOOL)isConnected;	// 0x33369a31
// declared property getter: - (BOOL)isPaired;	// 0x33369a49
- (BOOL)leftAvailable;	// 0x33369959
- (id)leftPrograms;	// 0x3336a205
- (id)manufacturerForType;	// 0x33369751
- (id)modelForType;	// 0x33369785
- (id)persistentRepresentation;	// 0x3336a261
- (void)reload;	// 0x3336a225
- (BOOL)rightAvailable;	// 0x333699c5
- (id)rightPrograms;	// 0x3336a215
- (void)selectProgram:(id)program;	// 0x3336a285
- (id)selectedPrograms;	// 0x3336a3e1
- (void)sendUpdates;	// 0x33369659
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3336a765
// declared property setter: - (void)setType:(int)type;	// 0x3336a785
// declared property setter: - (void)setUpdateCount:(int)count;	// 0x3336a745
// declared property getter: - (int)type;	// 0x3336a775
// declared property getter: - (int)updateCount;	// 0x3336a735
- (void)writeInt:(unsigned char)int toPeripheral:(id)peripheral forProperty:(int)property;	// 0x3336a25d
@end

