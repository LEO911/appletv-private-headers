/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "ASParsing.h"

@class NSMutableDictionary, NSInvocation;

@interface ASItem : NSObject <ASParsing> {
	ASItem *_root;	// 4 = 0x4
	ASItem *_parent;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	NSObject<ASParsing> *_currentlyParsingSubItem;	// 20 = 0x14
	int _currentlyParsingCPTNumber;	// 24 = 0x18
	NSInvocation *_currentStreamInvocation;	// 28 = 0x1c
	int _parsingState;	// 32 = 0x20
	NSMutableDictionary *_parseRuleUsageNumbers;	// 36 = 0x24
}
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x322aeb29; S=0x322aeb39; converted property
@property(readonly, retain) ASItem *parent;	// G=0x322ae5f9; converted property
@property(readonly, assign) int parsingState;	// G=0x322aeb19; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x322aca91
+ (id)asParseRules;	// 0x322aea39
+ (BOOL)expectsContent;	// 0x322aeb7d
+ (BOOL)frontingBasicTypes;	// 0x322acc41
+ (BOOL)notifyOfUnknownTokens;	// 0x322accd1
+ (id)parseRuleCache;	// 0x322aeaad
+ (BOOL)parsingLeafNode;	// 0x322acb21
+ (BOOL)parsingWithSubItems;	// 0x322acbb1
- (id)init;	// 0x322acd61
- (int)_dataclass;	// 0x322adc49
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x322add71
- (BOOL)_itemPathMatches:(id)matches;	// 0x322ae609
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x322ae789
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x322addf1
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x322ae6c9
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x322adafd
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x322adb41
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x322adccd
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x322ace4d
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x322ae901
- (id)asParseRules;	// 0x322aea85
// converted property getter: - (id)currentStreamInvocation;	// 0x322aeb29
- (void)dealloc;	// 0x322acdd5
- (void)ignoreThisContent:(id)content;	// 0x322ae9f1
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x322ad2f9
// converted property getter: - (id)parent;	// 0x322ae5f9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x322ae209
// converted property getter: - (int)parsingState;	// 0x322aeb19
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x322aeb39
@end

