/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
@private
	void *_addressBook;	// 4 = 0x4
	NSMutableDictionary *_peopleByFirstName;	// 8 = 0x8
	NSMutableDictionary *_peopleByLastName;	// 12 = 0xc
	NSMutableDictionary *_peopleByOrganization;	// 16 = 0x10
}
+ (BOOL)isLinkDataValidForAddressBook:(void *)addressBook;	// 0x36434429
+ (void)log:(id)log;	// 0x36434449
+ (BOOL)shouldLog;	// 0x364344d1
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)addressBook inProcess:(BOOL)process;	// 0x3643435d
- (id)init;	// 0x36435ecd
- (id)initWithAddressBook:(void *)addressBook;	// 0x36434311
- (void)addPerson:(void *)person toDictionary:(id)dictionary withProperty:(int)property;	// 0x36435065
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)rowidgreatThan withLimit:(int)limit;	// 0x364346f1
- (void)dealloc;	// 0x36435e41
- (void)linkNewlyAddedPerson:(void *)person;	// 0x364344f5
- (void)linkRecentlyAddedPeople;	// 0x364345a1
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)limit;	// 0x364345b5
- (void)makeInitialLinks;	// 0x3643476d
- (void)makeInitialLinksCountingOuterIterations:(int *)iterations;	// 0x36434781
- (void)makeLinksForAddedPeople:(id)addedPeople inInitialLinking:(BOOL)initialLinking countingOuterIterations:(int *)iterations;	// 0x36434899
- (id)otherPeopleInArray:(id)array matchingPerson:(void *)person;	// 0x3643557d
- (id)otherPeopleInDatabaseMatchingPerson:(void *)databaseMatchingPerson notIncludingPeople:(id)people;	// 0x364358c1
- (void)presortPeople:(id)people;	// 0x36434e49
- (void)removeAllLinks;	// 0x364347a1
- (BOOL)shouldLinkPerson:(void *)person toPeopleInDatabase:(id)database andNewlyAddedPeople:(id)people inInitialLinking:(BOOL)initialLinking;	// 0x3643516d
- (id)suggestedPeopleToLinkWithPerson:(void *)person isInitialLinking:(BOOL)linking;	// 0x36435115
@end
