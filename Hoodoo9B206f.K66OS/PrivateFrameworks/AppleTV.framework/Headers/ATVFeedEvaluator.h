/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDateFormatter, NSNumberFormatter;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : NSObject {
@private
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x366040e5; S=0x366040f9; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x36603f99
- (id)init;	// 0x36604001
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x36604d31
- (id)_evaluateFunctionString:(id)string;	// 0x36604841
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x3660411d
- (id)_evaluateStoreCoverArts:(id)arts;	// 0x36604a51
- (id)_ifElse:(id)anElse;	// 0x36605105
- (id)_localtime:(id)localtime;	// 0x36605281
- (id)_lookup:(id)lookup;	// 0x36605209
- (id)_removePreferences:(id)preferences;	// 0x366056b9
- (id)_setPreference:(id)preference;	// 0x3660558d
- (void)dealloc;	// 0x3660405d
// declared property getter: - (id)feedResource;	// 0x366040e5
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x366040f9
@end
