/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSCoding> {
	id<MSBackoffManagerDelegate> _delegate;	// 4 = 0x4
	double _initialInterval;	// 8 = 0x8
	double _backoffFactor;	// 16 = 0x10
	double _randomizeFactor;	// 24 = 0x18
	double _maxBackoffInterval;	// 32 = 0x20
	double _currentInterval;	// 40 = 0x28
	NSDate *_nextExpiryDate;	// 48 = 0x30
	NSDate *_retryAfterDate;	// 52 = 0x34
}
@property(assign, nonatomic) double backoffFactor;	// G=0x3075e6d5; S=0x3075e6ed; @synthesize=_backoffFactor
@property(assign, nonatomic) double currentInterval;	// G=0x3075e759; S=0x3075db55; @synthesize=_currentInterval
@property(assign, nonatomic) id<MSBackoffManagerDelegate> delegate;	// G=0x3075e689; S=0x3075e699; @synthesize=_delegate
@property(assign, nonatomic) double initialInterval;	// G=0x3075e6a9; S=0x3075e6c1; @synthesize=_initialInterval
@property(assign, nonatomic) double maxBackoffInterval;	// G=0x3075e72d; S=0x3075e745; @synthesize=_maxBackoffInterval
@property(retain, nonatomic) NSDate *nextExpiryDate;	// G=0x3075dc11; S=0x3075e771; @synthesize=_nextExpiryDate
@property(assign, nonatomic) double randomizeFactor;	// G=0x3075e701; S=0x3075e719; @synthesize=_randomizeFactor
@property(retain, nonatomic) NSDate *retryAfterDate;	// G=0x3075e799; S=0x3075e7a9; @synthesize=_retryAfterDate
- (id)initWithCoder:(id)coder;	// 0x3075e349
- (id)initWithInitialInterval:(double)initialInterval backoffFactor:(double)factor randomizeFactor:(double)factor3 maxBackoffInterval:(double)interval retryAfterDate:(id)date;	// 0x3075da71
- (void).cxx_destruct;	// 0x3075e7d1
- (void)_complainAboutMissingKeyInArchive:(id)archive;	// 0x3075e30d
- (void)backoff;	// 0x3075de11
// declared property getter: - (double)backoffFactor;	// 0x3075e6d5
- (id)copyParameters;	// 0x3075e0ed
// declared property getter: - (double)currentInterval;	// 0x3075e759
// declared property getter: - (id)delegate;	// 0x3075e689
- (void)didReceiveRetryAfterDate:(id)date;	// 0x3075dcbd
- (void)encodeWithCoder:(id)coder;	// 0x3075df81
// declared property getter: - (double)initialInterval;	// 0x3075e6a9
// declared property getter: - (double)maxBackoffInterval;	// 0x3075e72d
// declared property getter: - (id)nextExpiryDate;	// 0x3075dc11
// declared property getter: - (double)randomizeFactor;	// 0x3075e701
- (void)reset;	// 0x3075dd91
// declared property getter: - (id)retryAfterDate;	// 0x3075e799
// declared property setter: - (void)setBackoffFactor:(double)factor;	// 0x3075e6ed
// declared property setter: - (void)setCurrentInterval:(double)interval;	// 0x3075db55
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3075e699
// declared property setter: - (void)setInitialInterval:(double)interval;	// 0x3075e6c1
// declared property setter: - (void)setMaxBackoffInterval:(double)interval;	// 0x3075e745
// declared property setter: - (void)setNextExpiryDate:(id)date;	// 0x3075e771
// declared property setter: - (void)setRandomizeFactor:(double)factor;	// 0x3075e719
// declared property setter: - (void)setRetryAfterDate:(id)date;	// 0x3075e7a9
@end
