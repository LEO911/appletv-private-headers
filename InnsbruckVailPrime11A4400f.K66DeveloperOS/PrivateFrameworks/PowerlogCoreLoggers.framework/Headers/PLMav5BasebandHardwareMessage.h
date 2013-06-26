/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import "PowerlogCoreLoggers-Structs.h"
#import "PLMav4BasebandHardwareMessage.h"


@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage {
	PLMav5BasebandHWStatsRPM *_mav5_rpm;	// 152 = 0x98
	PLMav5BasebandHWStatsAPPSPerf *_mav5_apps;	// 156 = 0x9c
	PLMav5BasebandHWStatsSleep *_mav5_apps_sleep;	// 160 = 0xa0
	PLMav5BasebandHWAPPSSleepVeto *_mav5_apps_sleep_veto;	// 164 = 0xa4
	PLMav4BasebandHWOnOffComponentStats *_mav5_lpass;	// 168 = 0xa8
	PLMav5BasebandHWStatsMDSP *_mav5_mdsp;	// 172 = 0xac
	PLMav5BasebandHWStatsQDSP *_mav5_qdsp;	// 176 = 0xb0
	PLMav5BasebandHWStatsSleep *_mav5_mpss_sleep;	// 180 = 0xb4
	PLMav5BasebandHWMPSSSleepVeto *_mav5_mpss_sleep_veto;	// 184 = 0xb8
	PLMav5BasebandHWStatsUSB *_mav5_usb;	// 188 = 0xbc
	PLMav4BasebandHWOnOffComponentStats *_mav5_gps_dpo;	// 192 = 0xc0
	PLMav5BasebandHWStatsRX *_mav5_rx;	// 196 = 0xc4
	PLMav5BasebandHWStatsTX *_mav5_tx;	// 200 = 0xc8
	PLMav5BasebandHWStatsRXSQA *_mav5_rx_sqa;	// 204 = 0xcc
	PLMav5BasebandHWStatsProtocol *_mav5_protocol;	// 208 = 0xd0
	PLMav5BasebandHWClocksDuration *_mav5_clock;	// 212 = 0xd4
	PLMav5BasebandHWStatsSleep *_mav4_mpss_sleep;	// 216 = 0xd8
	PLMav5BasebandHWMPSSSleepVeto *_mav4_mpss_sleep_veto;	// 220 = 0xdc
}
@property(assign, nonatomic) PLMav5BasebandHWStatsAPPSPerf *apps;	// G=0x32425e31; S=0x32425e41; @synthesize=_mav5_apps
@property(assign, nonatomic) PLMav5BasebandHWStatsSleep *apps_sleep;	// G=0x32425e51; S=0x32425e61; @synthesize=_mav5_apps_sleep
@property(assign, nonatomic) PLMav5BasebandHWAPPSSleepVeto *apps_sleep_veto;	// G=0x32425e71; S=0x32425e81; @synthesize=_mav5_apps_sleep_veto
@property(assign, nonatomic) PLMav5BasebandHWClocksDuration *clock;	// G=0x32425ff1; S=0x32426001; @synthesize=_mav5_clock
@property(assign, nonatomic) PLMav4BasebandHWOnOffComponentStats *gps_dpo;	// G=0x32425f51; S=0x32425f61; @synthesize=_mav5_gps_dpo
@property(assign, nonatomic) PLMav4BasebandHWOnOffComponentStats *lpass;	// G=0x32425e91; S=0x32425ea1; @synthesize=_mav5_lpass
@property(assign, nonatomic) PLMav5BasebandHWStatsMDSP *mdsp;	// G=0x32425eb1; S=0x32425ec1; @synthesize=_mav5_mdsp
@property(assign, nonatomic) PLMav5BasebandHWStatsSleep *mpss_sleep;	// G=0x32425ef1; S=0x32425f01; @synthesize=_mav4_mpss_sleep
@property(assign, nonatomic) PLMav5BasebandHWMPSSSleepVeto *mpss_sleep_veto;	// G=0x32425f11; S=0x32425f21; @synthesize=_mav4_mpss_sleep_veto
@property(assign, nonatomic) PLMav5BasebandHWStatsProtocol *protocol;	// G=0x32425fd1; S=0x32425fe1; @synthesize=_mav5_protocol
@property(assign, nonatomic) PLMav5BasebandHWStatsQDSP *qdsp;	// G=0x32425ed1; S=0x32425ee1; @synthesize=_mav5_qdsp
@property(assign, nonatomic) PLMav5BasebandHWStatsRPM *rpm;	// G=0x32425e11; S=0x32425e21; @synthesize=_mav5_rpm
@property(assign, nonatomic) PLMav5BasebandHWStatsRX *rx;	// G=0x32425f71; S=0x32425f81; @synthesize=_mav5_rx
@property(assign, nonatomic) PLMav5BasebandHWStatsRXSQA *rx_sqa;	// G=0x32425f91; S=0x32425fa1; @synthesize=_mav5_rx_sqa
@property(assign, nonatomic) PLMav5BasebandHWStatsTX *tx;	// G=0x32425fb1; S=0x32425fc1; @synthesize=_mav5_tx
@property(assign, nonatomic) PLMav5BasebandHWStatsUSB *usb;	// G=0x32425f31; S=0x32425f41; @synthesize=_mav5_usb
- (id)initWithData:(id)data;	// 0x324244d1
// declared property getter: - (PLMav5BasebandHWStatsAPPSPerf *)apps;	// 0x32425e31
// declared property getter: - (PLMav5BasebandHWStatsSleep *)apps_sleep;	// 0x32425e51
// declared property getter: - (PLMav5BasebandHWAPPSSleepVeto *)apps_sleep_veto;	// 0x32425e71
// declared property getter: - (PLMav5BasebandHWClocksDuration *)clock;	// 0x32425ff1
- (void)formatDurationandCount:(unsigned)count withCount:(unsigned)count2 inString:(id)string;	// 0x32425d21
// declared property getter: - (PLMav4BasebandHWOnOffComponentStats *)gps_dpo;	// 0x32425f51
- (id)indexToRAT:(unsigned)rat;	// 0x32425db9
- (void)logAPPSWithLogger:(id)logger;	// 0x32424c09
- (void)logClockWithLogger:(id)logger;	// 0x32425ae9
- (void)logLPASSWithLogger:(id)logger;	// 0x32424d8d
- (void)logModemAppWithLogger:(id)logger;	// 0x32424e61
- (void)logPeripheralsWithLogger:(id)logger;	// 0x324250c5
- (void)logProtocolWithLogger:(id)logger withCount:(unsigned)count;	// 0x324257b9
- (void)logRFWithLogger:(id)logger;	// 0x32425321
- (void)logRPMWithLogger:(id)logger;	// 0x32424af1
- (void)logWithLogger:(id)logger;	// 0x32424901
// declared property getter: - (PLMav4BasebandHWOnOffComponentStats *)lpass;	// 0x32425e91
// declared property getter: - (PLMav5BasebandHWStatsMDSP *)mdsp;	// 0x32425eb1
// declared property getter: - (PLMav5BasebandHWStatsSleep *)mpss_sleep;	// 0x32425ef1
// declared property getter: - (PLMav5BasebandHWMPSSSleepVeto *)mpss_sleep_veto;	// 0x32425f11
- (void)parseData:(id)data;	// 0x32424661
// declared property getter: - (PLMav5BasebandHWStatsProtocol *)protocol;	// 0x32425fd1
// declared property getter: - (PLMav5BasebandHWStatsQDSP *)qdsp;	// 0x32425ed1
// declared property getter: - (PLMav5BasebandHWStatsRPM *)rpm;	// 0x32425e11
// declared property getter: - (PLMav5BasebandHWStatsRX *)rx;	// 0x32425f71
// declared property getter: - (PLMav5BasebandHWStatsRXSQA *)rx_sqa;	// 0x32425f91
// declared property setter: - (void)setApps:(PLMav5BasebandHWStatsAPPSPerf *)apps;	// 0x32425e41
// declared property setter: - (void)setApps_sleep:(PLMav5BasebandHWStatsSleep *)sleep;	// 0x32425e61
// declared property setter: - (void)setApps_sleep_veto:(PLMav5BasebandHWAPPSSleepVeto *)veto;	// 0x32425e81
// declared property setter: - (void)setClock:(PLMav5BasebandHWClocksDuration *)clock;	// 0x32426001
// declared property setter: - (void)setGps_dpo:(PLMav4BasebandHWOnOffComponentStats *)dpo;	// 0x32425f61
// declared property setter: - (void)setLpass:(PLMav4BasebandHWOnOffComponentStats *)lpass;	// 0x32425ea1
// declared property setter: - (void)setMdsp:(PLMav5BasebandHWStatsMDSP *)mdsp;	// 0x32425ec1
// declared property setter: - (void)setMpss_sleep:(PLMav5BasebandHWStatsSleep *)sleep;	// 0x32425f01
// declared property setter: - (void)setMpss_sleep_veto:(PLMav5BasebandHWMPSSSleepVeto *)veto;	// 0x32425f21
// declared property setter: - (void)setProtocol:(PLMav5BasebandHWStatsProtocol *)protocol;	// 0x32425fe1
// declared property setter: - (void)setQdsp:(PLMav5BasebandHWStatsQDSP *)qdsp;	// 0x32425ee1
// declared property setter: - (void)setRpm:(PLMav5BasebandHWStatsRPM *)rpm;	// 0x32425e21
// declared property setter: - (void)setRx:(PLMav5BasebandHWStatsRX *)rx;	// 0x32425f81
// declared property setter: - (void)setRx_sqa:(PLMav5BasebandHWStatsRXSQA *)sqa;	// 0x32425fa1
// declared property setter: - (void)setTx:(PLMav5BasebandHWStatsTX *)tx;	// 0x32425fc1
// declared property setter: - (void)setUsb:(PLMav5BasebandHWStatsUSB *)usb;	// 0x32425f41
// declared property getter: - (PLMav5BasebandHWStatsTX *)tx;	// 0x32425fb1
// declared property getter: - (PLMav5BasebandHWStatsUSB *)usb;	// 0x32425f31
@end
