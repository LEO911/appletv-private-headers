/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol ATVRouteDelegate;

__attribute__((visibility("hidden")))
@interface ATVRoute : XXUnknownSuperclass {
	NStatSource *_statSource;	// 4 = 0x4
	NStatCounts _statCounts;	// 8 = 0x8
	NStatCounts _previouStatCounts;	// 84 = 0x54
	unsigned long long _routeID;	// 160 = 0xa0
	unsigned long long _parentRouteID;	// 168 = 0xa8
	unsigned long long _gatewayID;	// 176 = 0xb0
	sockaddr _hostAddress;	// 184 = 0xb8
	union {
		sockaddr sa;
		sockaddr_in sin;
		sockaddr_in6 sin6;
	} _gatewayAddress;	// 200 = 0xc8
	NSString *_interfaceName;	// 228 = 0xe4
	unsigned _flags;	// 232 = 0xe8
	id<ATVRouteDelegate> _delegate;	// 236 = 0xec
	NSString *_destinationIPAddress;	// 240 = 0xf0
	NSString *_gatewayIPAddress;	// 244 = 0xf4
}
@property(assign) id<ATVRouteDelegate> delegate;	// G=0x20dd51; S=0x20dd65; @synthesize=_delegate
@property(retain) NSString *destinationIPAddress;	// G=0x20ddc5; S=0x20ddd9; @synthesize=_destinationIPAddress
@property(retain) NSString *gatewayIPAddress;	// G=0x20dda1; S=0x20ddb5; @synthesize=_gatewayIPAddress
@property(retain) NSString *interfaceName;	// G=0x20dd7d; S=0x20dd91; @synthesize=_interfaceName
- (id)initWithStatSource:(NStatSource *)statSource;	// 0x20ce85
- (void)asyncUpdateCounts;	// 0x20dd39
- (void)configureRoute;	// 0x20d21d
- (id)cumulativeDescription;	// 0x20d6e1
- (id)cumulativeStatsDictionary;	// 0x20d7b5
- (void)dealloc;	// 0x20cdfd
// declared property getter: - (id)delegate;	// 0x20dd51
- (id)deltaDescription;	// 0x20d5b9
- (id)deltaStatsDictionary;	// 0x20d971
- (id)description;	// 0x20d6d1
// declared property getter: - (id)destinationIPAddress;	// 0x20ddc5
// declared property getter: - (id)gatewayIPAddress;	// 0x20dda1
// declared property getter: - (id)interfaceName;	// 0x20dd7d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x20dd65
// declared property setter: - (void)setDestinationIPAddress:(id)address;	// 0x20ddd9
// declared property setter: - (void)setGatewayIPAddress:(id)address;	// 0x20ddb5
// declared property setter: - (void)setInterfaceName:(id)name;	// 0x20dd91
- (id)statsDictionary;	// 0x20d7a5
- (void)updateCounts;	// 0x20dcd9
@end

