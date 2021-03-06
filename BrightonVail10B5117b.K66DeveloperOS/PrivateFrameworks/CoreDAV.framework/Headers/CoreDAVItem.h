/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "NSObject.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVItem.h"

@class NSMutableArray, NSData, NSString, NSMutableSet;

@protocol CoreDAVItem <NSObject>
+ (id)copyParseRules;
+ (id)parseRuleCache;
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (void)parserSuggestsBaseURL:(id)url;
- (BOOL)validate;
- (void)write:(id)write;
@end

@interface CoreDAVItem : NSObject <CoreDAVItem> {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSMutableSet *_attributes;	// 12 = 0xc
	NSMutableArray *_extraChildItems;	// 16 = 0x10
	NSData *_payload;	// 20 = 0x14
	BOOL _useCDATA;	// 24 = 0x18
}
@property(retain) NSMutableSet *attributes;	// G=0x338f98c1; S=0x338f98d5; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x338f98e5; S=0x338f98f9; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x338f9879; S=0x338f988d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x338f989d; S=0x338f98b1; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x338f9909; S=0x338f991d; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x338f9735; S=0x338f9795; converted property
@property(assign) BOOL useCDATA;	// G=0x338f992d; S=0x338f9945; @synthesize=_useCDATA
+ (id)copyParseRules;	// 0x338f943d
+ (id)parseRuleCache;	// 0x338f9469
- (id)init;	// 0x338f90d9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338f90dd
// declared property getter: - (id)attributes;	// 0x338f98c1
- (id)childrenToWrite;	// 0x338f9555
- (id)copyParseRules;	// 0x338f9441
- (void)dealloc;	// 0x338f91d5
- (id)description;	// 0x338f9275
// declared property getter: - (id)extraChildItems;	// 0x338f98e5
- (id)generateXMLString;	// 0x338f97cd
- (id)hashString;	// 0x338f9339
// declared property getter: - (id)name;	// 0x338f9879
// declared property getter: - (id)nameSpace;	// 0x338f989d
- (void)parserFoundAttributes:(id)attributes;	// 0x338f9511
- (void)parserFoundPayload:(id)payload;	// 0x338f9501
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x338f94d5
- (void)parserSuggestsBaseURL:(id)url;	// 0x338f97c9
// declared property getter: - (id)payload;	// 0x338f9909
// converted property getter: - (id)payloadAsString;	// 0x338f9735
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x338f98d5
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x338f98f9
// declared property setter: - (void)setName:(id)name;	// 0x338f988d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x338f98b1
// declared property setter: - (void)setPayload:(id)payload;	// 0x338f991d
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x338f9795
// declared property setter: - (void)setUseCDATA:(BOOL)cdata;	// 0x338f9945
// declared property getter: - (BOOL)useCDATA;	// 0x338f992d
- (BOOL)validate;	// 0x338f9731
- (void)write:(id)write;	// 0x338f9565
@end

