/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSBundle, NSMutableDictionary;

@interface UIStoryboard : NSObject {
	NSBundle *bundle;	// 4 = 0x4
	NSString *storyboardFileName;	// 8 = 0x8
	NSDictionary *identifierToNibNameMap;	// 12 = 0xc
	NSString *designatedEntryPointIdentifier;	// 16 = 0x10
	NSMutableDictionary *identifierToUINibMap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSBundle *bundle;	// G=0x32e6f9c5; @synthesize
@property(readonly, assign, nonatomic) NSString *designatedEntryPointIdentifier;	// G=0x32e6f9f5; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *identifierToNibNameMap;	// G=0x32e6f9e5; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *identifierToUINibMap;	// G=0x32e6fa05; @synthesize
@property(readonly, assign) NSString *name;	// G=0x32e6f43d; 
@property(readonly, assign, nonatomic) NSString *storyboardFileName;	// G=0x32e6f9d5; @synthesize
+ (id)storyboardWithName:(id)name bundle:(id)bundle;	// 0x32e6f1c9
- (id)initWithBundle:(id)bundle storyboardFileName:(id)name identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;	// 0x32e6ef99
// declared property getter: - (id)bundle;	// 0x32e6f9c5
- (BOOL)containsNibNamed:(id)named;	// 0x32e6f465
- (void)dealloc;	// 0x32e6eef9
// declared property getter: - (id)designatedEntryPointIdentifier;	// 0x32e6f9f5
- (id)identifierForStringsFile;	// 0x32e6f4c1
// declared property getter: - (id)identifierToNibNameMap;	// 0x32e6f9e5
// declared property getter: - (id)identifierToUINibMap;	// 0x32e6fa05
- (id)instantiateInitialViewController;	// 0x32e6f985
- (id)instantiateViewControllerWithIdentifier:(id)identifier;	// 0x32e6f7a5
// declared property getter: - (id)name;	// 0x32e6f43d
- (id)nibForStoryboardNibNamed:(id)storyboardNibNamed;	// 0x32e6f511
- (id)nibForViewControllerWithIdentifier:(id)identifier;	// 0x32e6f63d
// declared property getter: - (id)storyboardFileName;	// 0x32e6f9d5
@end

