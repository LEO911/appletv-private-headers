/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSError, NSURL, NSNumber;

@interface SKDownloadChangeset : NSObject <NSCopying> {
	NSNumber *_contentLength;	// 4 = 0x4
	NSURL *_contentURL;	// 8 = 0x8
	NSNumber *_downloadID;	// 12 = 0xc
	NSNumber *_downloadState;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSNumber *_progress;	// 24 = 0x18
	NSNumber *_timeRemaining;	// 28 = 0x1c
}
@property(copy, nonatomic) NSNumber *contentLength;	// G=0x32c36ef9; S=0x32c36f0d; @synthesize=_contentLength
@property(copy, nonatomic) NSURL *contentURL;	// G=0x32c36f1d; S=0x32c36f31; @synthesize=_contentURL
@property(copy, nonatomic) NSNumber *downloadID;	// G=0x32c36f41; S=0x32c36f55; @synthesize=_downloadID
@property(copy, nonatomic) NSNumber *downloadState;	// G=0x32c36f65; S=0x32c36f79; @synthesize=_downloadState
@property(copy, nonatomic) NSError *error;	// G=0x32c36f89; S=0x32c36f9d; @synthesize=_error
@property(copy, nonatomic) NSNumber *progress;	// G=0x32c36fad; S=0x32c36fc1; @synthesize=_progress
@property(copy, nonatomic) NSNumber *timeRemaining;	// G=0x32c36fd1; S=0x32c36fe5; @synthesize=_timeRemaining
+ (id)changesetWithDownloadID:(id)downloadID state:(int)state;	// 0x32c36a35
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32c36ac9
// declared property getter: - (id)contentLength;	// 0x32c36ef9
// declared property getter: - (id)contentURL;	// 0x32c36f1d
- (id)copyWithZone:(NSZone *)zone;	// 0x32c36ded
- (id)copyXPCEncoding;	// 0x32c36ced
- (void)dealloc;	// 0x32c3696d
// declared property getter: - (id)downloadID;	// 0x32c36f41
// declared property getter: - (id)downloadState;	// 0x32c36f65
// declared property getter: - (id)error;	// 0x32c36f89
// declared property getter: - (id)progress;	// 0x32c36fad
// declared property setter: - (void)setContentLength:(id)length;	// 0x32c36f0d
// declared property setter: - (void)setContentURL:(id)url;	// 0x32c36f31
// declared property setter: - (void)setDownloadID:(id)anId;	// 0x32c36f55
// declared property setter: - (void)setDownloadState:(id)state;	// 0x32c36f79
// declared property setter: - (void)setError:(id)error;	// 0x32c36f9d
// declared property setter: - (void)setProgress:(id)progress;	// 0x32c36fc1
// declared property setter: - (void)setTimeRemaining:(id)remaining;	// 0x32c36fe5
// declared property getter: - (id)timeRemaining;	// 0x32c36fd1
@end

