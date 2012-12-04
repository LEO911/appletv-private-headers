/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionListener : NSObject {
	NSString *_identifier;	// 4 = 0x4
	unsigned _version;	// 8 = 0x8
	NSMutableArray *_completionHandlers;	// 12 = 0xc
	NSMutableArray *_errorHandlers;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x341f6439; @synthesize=_identifier
@property(readonly, assign, nonatomic) unsigned version;	// G=0x341f6449; @synthesize=_version
- (id)initWithIdentifier:(id)identifier version:(unsigned)version;	// 0x341f60cd
- (void)addCompletionHandler:(id)handler errorHandler:(id)handler2;	// 0x341f61ad
- (void)dealloc;	// 0x341f6135
- (void)handleError:(id)error;	// 0x341f6381
- (void)handleInfo:(id)info updatedManifest:(BOOL)manifest;	// 0x341f62c1
// declared property getter: - (id)identifier;	// 0x341f6439
// declared property getter: - (unsigned)version;	// 0x341f6449
@end
