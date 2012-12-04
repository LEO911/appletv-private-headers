/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString;

@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(readonly, assign, nonatomic) NSString *NO_DEVICE_ACCOUNT;	// G=0x4b1d8d; 
+ (id)sharedInstance;	// 0x4b1ca1
// declared property getter: - (id)NO_DEVICE_ACCOUNT;	// 0x4b1d8d
- (void)clear:(id)clear;	// 0x4b2319
- (void)clearAll;	// 0x4b23a1
- (id)data;	// 0x4b1d99
- (id)getData:(id)data;	// 0x4b1ec9
- (id)getItem:(id)item key:(id)key;	// 0x4b21b5
- (unsigned)length:(id)length;	// 0x4b20d1
- (void)removeItem:(id)item key:(id)key;	// 0x4b228d
- (void)setItem:(id)item key:(id)key value:(id)value;	// 0x4b2201
- (void)updateProperty:(id)property value:(id)value;	// 0x4b2421
@end
