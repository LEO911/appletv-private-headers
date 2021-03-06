/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SAStockObject, NSString, NSArray, NSURL;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAStockObject *aceStock;	// G=0x32f426ad; S=0x32f42701; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x32f4273d; S=0x32f427b9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f42819; S=0x32f428b9; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x32f42939; S=0x32f429b5; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x32f42a1d; S=0x32f42a99; 
+ (id)addCompleted;	// 0x32f4261d
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f42661
// declared property getter: - (id)aceStock;	// 0x32f426ad
- (id)encodedClassName;	// 0x32f42611
- (id)groupIdentifier;	// 0x32f42601
// declared property getter: - (id)identifier;	// 0x32f4273d
// declared property getter: - (id)results;	// 0x32f42819
// declared property setter: - (void)setAceStock:(id)stock;	// 0x32f42701
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32f427b9
// declared property setter: - (void)setResults:(id)results;	// 0x32f428b9
// declared property setter: - (void)setStockReferences:(id)references;	// 0x32f429b5
// declared property setter: - (void)setStocks:(id)stocks;	// 0x32f42a99
// declared property getter: - (id)stockReferences;	// 0x32f42939
// declared property getter: - (id)stocks;	// 0x32f42a1d
@end

