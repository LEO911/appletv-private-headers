/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASEvent.h"

@class NSNumber, NSMutableDictionary, NSDate;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_isDeleted;	// 172 = 0xac
	NSDate *_exceptionStartTime;	// 176 = 0xb0
	NSMutableDictionary *_placeHolder;	// 180 = 0xb4
	ASEvent *_originalEvent;	// 184 = 0xb8
}
@property(retain) id exceptionDate;	// G=0x33a12725; S=0x33a12735; converted property
@property(retain) NSDate *exceptionStartTime;	// G=0x33a12ad5; S=0x33a12b0d; converted property
@property(retain) NSNumber *isDeleted;	// G=0x33a12a59; S=0x33a12a91; converted property
@property(retain) ASEvent *originalEvent;	// G=0x33a12a39; S=0x33a12a49; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a1091d
+ (id)asParseRules;	// 0x33a10b81
+ (BOOL)frontingBasicTypes;	// 0x33a10a19
+ (BOOL)notifyOfUnknownTokens;	// 0x33a10a6d
+ (BOOL)parsingLeafNode;	// 0x33a10971
+ (BOOL)parsingWithSubItems;	// 0x33a109c5
- (id)initWithCalEvent:(void *)calEvent originalEvent:(id)event account:(id)account;	// 0x33a12025
- (id)initWithCoder:(id)coder;	// 0x33a12745
- (id)initWithExceptionStartTime:(id)exceptionStartTime;	// 0x33a121b1
- (void)_loadAttributesFromCalEvent:(void *)calEvent withKnownExceptionDate:(id)knownExceptionDate forAccount:(id)account;	// 0x33a11f69
- (id)_transformedExceptionStartDateForActiveSync:(id)activeSync isFloating:(BOOL)floating;	// 0x33a11199
- (id)_transformedExceptionStartDateForCalFramework:(id)calFramework;	// 0x33a11145
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x33a1224d
- (void)applyPlaceHolder;	// 0x33a10ac1
- (void)clearPlaceHolder;	// 0x33a10ae1
- (void)dealloc;	// 0x33a126ad
- (BOOL)deleteFromCalendar;	// 0x33a1222d
- (id)description;	// 0x33a125fd
- (void)encodeWithCoder:(id)coder;	// 0x33a12871
// converted property getter: - (id)exceptionDate;	// 0x33a12725
// converted property getter: - (id)exceptionStartTime;	// 0x33a12ad5
- (BOOL)hasOccurrenceInTheFuture;	// 0x33a1297d
// converted property getter: - (id)isDeleted;	// 0x33a12a59
- (void)loadClientIDs;	// 0x33a12599
// converted property getter: - (id)originalEvent;	// 0x33a12a39
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33a110c9
- (void)postProcessApplicationData;	// 0x33a11591
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33a1144d
- (id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;	// 0x33a11215
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x33a12735
// converted property setter: - (void)setExceptionStartTime:(id)time;	// 0x33a12b0d
// converted property setter: - (void)setIsDeleted:(id)deleted;	// 0x33a12a91
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x33a10b0d
// converted property setter: - (void)setOriginalEvent:(id)event;	// 0x33a12a49
- (void)takeValuesFromParentForAccount:(id)account;	// 0x33a118d5
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x33a11745
- (BOOL)verifyExternalIds;	// 0x33a11291
@end

