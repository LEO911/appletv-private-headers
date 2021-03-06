/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMediaProvider.h"
#import "BRMediaLoading.h"


@interface BRBaseMediaProvider : NSObject <BRMediaProvider, BRMediaLoading> {
@private
	int _providerStatus;	// 4 = 0x4
	BOOL _passwordProtected;	// 8 = 0x8
}
@property(assign) BOOL isPasswordProtected;	// G=0x30335045; S=0x30335055; converted property
@property(assign) int status;	// G=0x30334ebd; S=0x30334ee5; converted property
+ (id)errorStateOfProvider:(id)provider;	// 0x30334c09
+ (id)mediaProvider;	// 0x30334c49
- (BOOL)autoload;	// 0x3033502d
- (long)countOfObjectsWithMediaType:(id)mediaType;	// 0x30335081
- (void)dealloc;	// 0x30334c85
- (int)errorCodeForProvider;	// 0x30334ee1
- (void)flush;	// 0x3033507d
// converted property getter: - (BOOL)isPasswordProtected;	// 0x30335045
- (int)load;	// 0x30334ffd
- (int)loadWithUsername:(id)username password:(id)password;	// 0x3033500d
- (id)mediaForEntityName:(id)entityName;	// 0x30334d11
- (id)mediaTypes;	// 0x30334cf5
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x30334d2d
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x30334d5d
- (id)providerID;	// 0x30334ce1
- (id)providerName;	// 0x30334ce5
- (void)reset;	// 0x30335031
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;	// 0x30335055
// converted property setter: - (void)setStatus:(int)status;	// 0x30334ee5
// converted property getter: - (int)status;	// 0x30334ebd
- (int)unload;	// 0x3033501d
@end

