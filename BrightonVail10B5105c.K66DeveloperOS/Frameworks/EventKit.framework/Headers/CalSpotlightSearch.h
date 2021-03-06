/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol CalSearchDataSink;

@interface CalSpotlightSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	NSString *_titleString;	// 8 = 0x8
	NSString *_locationString;	// 12 = 0xc
	NSString *_descriptionString;	// 16 = 0x10
	NSString *_participantString;	// 20 = 0x14
	id<CalSearchDataSink> _dataSink;	// 24 = 0x18
	bool _moreResultsAvailable;	// 28 = 0x1c
	bool _onlySearchEvents;	// 29 = 0x1d
	CFArrayRef _partialResults;	// 32 = 0x20
	CFSetRef _matchedEventsSet;	// 36 = 0x24
	CFSetRef _matchedParticipantsSet;	// 40 = 0x28
	CFSetRef _matchedLocationsSet;	// 44 = 0x2c
	bool _implementsCancellationCallback;	// 48 = 0x30
	CFDictionaryRef _closestEventOccurrences;	// 52 = 0x34
	bool _cancelled;	// 56 = 0x38
}
+ (CFDictionaryRef)newQueryCache;	// 0x35b571f9
- (id)initWithDatabase:(CalDatabase *)database searchString:(CFStringRef)string dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x35b57211
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x35b573a9
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 queryCache:(CFDictionaryRef)cache;	// 0x35b57241
- (void)_addMatchedLocationIds:(CFArrayRef)ids;	// 0x35b57859
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x35b5765d
- (CalLocationIdsSearchContext *)_createLocationIdsSearchContext;	// 0x35b577e1
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x35b57769
- (CalEventSpotlightContext *)_createSpotlightEventsContext;	// 0x35b57bb1
- (void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext *)context;	// 0x35b57835
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x35b577bd
- (void)_deleteSpotlightEventsContext:(CalEventSpotlightContext *)context;	// 0x35b57d41
- (void)_getLocationSearchResults:(CalLocationIdsSearchContext *)results;	// 0x35b5789d
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x35b576a1
- (void)_getSpotlightEvents:(CalEventSpotlightContext *)events callback:(id)callback;	// 0x35b57961
- (void)_startLoadingResults:(id)results;	// 0x35b57531
- (void)calculateSearchWindow:(CalEventSpotlightContext *)window;	// 0x35b57abd
- (void)dealloc;	// 0x35b57279
- (void)performWithBlock:(id)block;	// 0x35b57399
- (void)startSearching;	// 0x35b57371
- (void)stopSearching;	// 0x35b57385
@end

