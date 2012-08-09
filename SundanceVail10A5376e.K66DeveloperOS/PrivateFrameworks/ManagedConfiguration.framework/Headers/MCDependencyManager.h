/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MCDependencyManager : NSObject {
	NSMutableDictionary *_domainsDict;	// 4 = 0x4
	NSMutableDictionary *_orphansDict;	// 8 = 0x8
}
+ (void)_setDependencyFilePath:(id)path;	// 0x32b95001
+ (id)sharedManager;	// 0x32b94621
- (id)init;	// 0x32b94179
- (void).cxx_destruct;	// 0x32b95025
- (void)_addOrphanParent:(id)parent forDomain:(id)domain;	// 0x32b9482d
- (id)_domainsDict;	// 0x32b94219
- (id)_domainsDictionaryForDomain:(id)domain parent:(id)parent outParentsDict:(id *)dict outDependents:(id *)dependents;	// 0x32b94675
- (id)_init;	// 0x32b941a1
- (void)_removeOrphanParent:(id)parent fromDomain:(id)domain;	// 0x32b94931
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain;	// 0x32b94a45
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x32b94d39
- (void)commitChanges;	// 0x32b9434d
- (id)dependentsOfParent:(id)parent inDomain:(id)domain;	// 0x32b94fb5
- (id)orphanedParentsForDomain:(id)domain;	// 0x32b94a25
- (id)parentsInDomain:(id)domain;	// 0x32b94e31
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain;	// 0x32b94b61
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x32b94db5
- (void)removeParent:(id)parent fromDomain:(id)domain;	// 0x32b94e89
@end
