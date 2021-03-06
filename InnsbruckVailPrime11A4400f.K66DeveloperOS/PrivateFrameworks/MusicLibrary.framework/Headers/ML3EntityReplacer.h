/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>
#import "MusicLibrary-Structs.h"

@class ML3DatabaseConnection, NSMutableArray, ML3MusicLibrary;

@interface ML3EntityReplacer : NSObject {
	CFDictionaryRef _propertyToIndexPair;	// 4 = 0x4
	NSMutableArray *_naturalStatements;	// 8 = 0x8
	ML3DatabaseConnection *_connection;	// 12 = 0xc
	ML3MusicLibrary *_library;	// 16 = 0x10
}
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x3157ad6d; 
- (id)initWithEntityClass:(Class)entityClass properties:(id)properties library:(id)library;	// 0x3157a06d
- (void).cxx_destruct;	// 0x3157b07d
- (void)bindDouble:(double)aDouble forProperty:(id)property;	// 0x3157a8f1
- (void)bindInt:(int)int forProperty:(id)property;	// 0x3157a889
- (void)bindNullForProperty:(id)property;	// 0x3157a825
- (void)bindPersistentID:(long long)anId;	// 0x3157ad85
- (void)bindValue:(id)value forProperty:(id)property;	// 0x3157a95d
- (void)clearBindings;	// 0x3157af1d
- (void)close;	// 0x3157b009
- (void)dealloc;	// 0x3157a02d
// declared property getter: - (BOOL)isOpen;	// 0x3157ad6d
- (BOOL)perform;	// 0x3157ab85
@end

