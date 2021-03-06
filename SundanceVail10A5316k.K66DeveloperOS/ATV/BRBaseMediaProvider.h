/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaProvider.h"
#import "BRMediaLoading.h"


__attribute__((visibility("hidden")))
@interface BRBaseMediaProvider : XXUnknownSuperclass <BRMediaProvider, BRMediaLoading> {
	int _providerStatus;	// 4 = 0x4
	BOOL _passwordProtected;	// 8 = 0x8
}
@property(assign) BOOL isPasswordProtected;	// G=0x33edbd; S=0x33edcd; converted property
@property(assign) int status;	// G=0x33ec89; S=0x33ecb1; converted property
+ (id)errorStateOfProvider:(id)provider;	// 0x33e9b9
+ (id)mediaProvider;	// 0x33e9f9
- (BOOL)autoload;	// 0x33eda5
- (long)countOfObjectsWithMediaType:(id)mediaType;	// 0x33edf5
- (void)dealloc;	// 0x33ea35
- (int)errorCodeForProvider;	// 0x33ecad
- (void)flush;	// 0x33edf1
// converted property getter: - (BOOL)isPasswordProtected;	// 0x33edbd
- (int)load;	// 0x33ed75
- (int)loadWithUsername:(id)username password:(id)password;	// 0x33ed85
- (id)mediaForEntityName:(id)entityName;	// 0x33eac1
- (id)mediaTypes;	// 0x33eaa5
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x33eadd
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x33eb0d
- (id)providerID;	// 0x33ea91
- (id)providerName;	// 0x33ea95
- (void)reset;	// 0x33eda9
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;	// 0x33edcd
// converted property setter: - (void)setStatus:(int)status;	// 0x33ecb1
// converted property getter: - (int)status;	// 0x33ec89
- (int)unload;	// 0x33ed95
@end

