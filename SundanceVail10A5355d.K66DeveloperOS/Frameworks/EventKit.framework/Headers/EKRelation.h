/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKRelation : NSObject {
	NSString *_entityName;	// 4 = 0x4
	BOOL _toMany;	// 8 = 0x8
	BOOL _ownsRelated;	// 9 = 0x9
	NSString *_inversePropertyName;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *inversePropertyName;	// G=0x31f6f619; 
@property(readonly, assign, nonatomic) BOOL ownsRelatedObject;	// G=0x31f6f629; 
@property(readonly, assign, nonatomic) BOOL toMany;	// G=0x31f622bd; 
+ (id)relationWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name;	// 0x31f62185
+ (id)relationWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name ownsRelated:(BOOL)related;	// 0x31f62271
- (id)initWithEntityName:(id)entityName toMany:(BOOL)many inversePropertyName:(id)name ownsRelated:(BOOL)related;	// 0x31f621d1
- (void)dealloc;	// 0x31fccb11
// declared property getter: - (id)inversePropertyName;	// 0x31f6f619
// declared property getter: - (BOOL)ownsRelatedObject;	// 0x31f6f629
// declared property getter: - (BOOL)toMany;	// 0x31f622bd
@end

