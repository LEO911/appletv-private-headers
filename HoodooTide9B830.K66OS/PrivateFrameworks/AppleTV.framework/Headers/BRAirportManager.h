/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


@interface BRAirportManager : NSObject {
}
+ (id)_wirelessInterfaceNameForDeviceClient:(WiFiDeviceClient *)deviceClient;	// 0x32a65445
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x32a65ba1
+ (void)checkAirportPower;	// 0x32a652b9
+ (void)collectWirelessNetworks;	// 0x32a654e1
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x32a65501
+ (WiFiDeviceClient *)copyCurrentWiFiDeviceClient;	// 0x32a65459
+ (id)currentWirelessBSSID;	// 0x32a65a7d
+ (int)currentWirelessChannel;	// 0x32a65975
+ (BOOL)forgetCurrentNetworkWithError:(id *)error;	// 0x32a66035
+ (BOOL)forgetNetwork:(id)network error:(id *)error;	// 0x32a660ed
+ (BOOL)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x32a6612d
+ (float)getCurrentRawWirelessSignalStrength;	// 0x32a65875
+ (int)getCurrentWirelessSignalStrength;	// 0x32a65909
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x32a65929
+ (void)initialize;	// 0x32a6512d
+ (id)wirelessInterfaceName;	// 0x32a65435
@end
