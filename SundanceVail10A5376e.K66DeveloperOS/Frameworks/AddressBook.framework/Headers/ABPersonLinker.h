/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSMutableDictionary *_peopleByFirstName;	// 8 = 0x8
	NSMutableDictionary *_peopleByLastName;	// 12 = 0xc
	NSMutableDictionary *_peopleByOrganization;	// 16 = 0x10
}
+ (BOOL)isLinkDataValidForAddressBook:(void *)addressBook;	// 0x32bf9a45
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)addressBook inProcess:(BOOL)process;	// 0x32bf9a65
- (id)init;	// 0x32bf9bb1
- (id)initWithAddressBook:(void *)addressBook;	// 0x32bf9b65
- (void)addPerson:(void *)person toDictionary:(id)dictionary withProperty:(int)property;	// 0x32bfac79
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)rowidgreatThan withLimit:(int)limit;	// 0x32bfb635
- (void)dealloc;	// 0x32bf9c2d
- (void)linkNewlyAddedPerson:(void *)person;	// 0x32bfb841
- (void)linkRecentlyAddedPeople;	// 0x32bfb82d
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)limit;	// 0x32bfb6dd
- (void)makeInitialLinks;	// 0x32bfb621
- (void)makeInitialLinksCountingOuterIterations:(int *)iterations;	// 0x32bfb601
- (void)makeLinksForAddedPeople:(id)addedPeople inInitialLinking:(BOOL)initialLinking countingOuterIterations:(int *)iterations;	// 0x32bfaf01
- (id)otherPeopleInArray:(id)array matchingPerson:(void *)person;	// 0x32bfa4a9
- (id)otherPeopleInDatabaseMatchingPerson:(void *)databaseMatchingPerson notIncludingPeople:(id)people;	// 0x32bf9cb9
- (void)presortPeople:(id)people;	// 0x32bfad39
- (void)removeAllLinks;	// 0x32bfb4c9
- (BOOL)shouldLinkPerson:(void *)person toPeopleInDatabase:(id)database andNewlyAddedPeople:(id)people inInitialLinking:(BOOL)initialLinking;	// 0x32bfa815
- (id)suggestedPeopleToLinkWithPerson:(void *)person isInitialLinking:(BOOL)linking;	// 0x32bfac25
@end
