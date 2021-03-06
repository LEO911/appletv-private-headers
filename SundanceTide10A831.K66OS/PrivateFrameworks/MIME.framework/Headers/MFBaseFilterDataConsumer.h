/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
	NSMutableArray *_consumers;	// 4 = 0x4
	BOOL _serialAppend;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *consumers;	// G=0x328b8441; @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// G=0x328b8421; S=0x328b8431; @synthesize=_serialAppend
+ (id)filterWithConsumer:(id)consumer;	// 0x328b7ffd
+ (id)filterWithConsumers:(id)consumers;	// 0x328b7fc1
- (id)initWithConsumer:(id)consumer;	// 0x328b8079
- (id)initWithConsumers:(id)consumers;	// 0x328b8039
- (int)appendData:(id)data;	// 0x328b80e5
// declared property getter: - (id)consumers;	// 0x328b8441
- (void)dealloc;	// 0x328b83d5
- (void)done;	// 0x328b82fd
// declared property getter: - (BOOL)isSerialAppend;	// 0x328b8421
// declared property setter: - (void)setSerialAppend:(BOOL)append;	// 0x328b8431
@end

