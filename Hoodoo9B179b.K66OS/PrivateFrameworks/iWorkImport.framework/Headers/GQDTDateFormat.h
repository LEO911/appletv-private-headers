/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDTDateFormat : NSObject <GQDNameMappable> {
@private
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x359c1501
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x359c153d
- (void)dealloc;	// 0x359c158d
- (CFStringRef)formatString;	// 0x359c150d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x359c15d1
@end

