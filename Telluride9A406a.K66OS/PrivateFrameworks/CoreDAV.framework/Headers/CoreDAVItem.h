/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "CoreDAVItem.h"

@class NSData, NSString, NSMutableSet, NSMutableArray;

@protocol CoreDAVItem <NSObject>
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
}
@property(retain) NSMutableSet *attributes;	// G=0x31c520f9; S=0x31c5210d; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x31c52131; S=0x31c52145; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x31c52089; S=0x31c5209d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x31c520c1; S=0x31c520d5; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x31c52169; S=0x31c5217d; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x31c51f49; S=0x31c51fa9; converted property
- (id)init;	// 0x31c519d9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x31c519dd
// declared property getter: - (id)attributes;	// 0x31c520f9
- (id)childrenToWrite;	// 0x31c51dbd
- (id)copyParseRules;	// 0x31c51d39
- (void)dealloc;	// 0x31c51ad9
- (id)description;	// 0x31c51b75
// declared property getter: - (id)extraChildItems;	// 0x31c52131
- (id)generateXMLString;	// 0x31c51fe1
- (id)hashString;	// 0x31c51c35
// declared property getter: - (id)name;	// 0x31c52089
// declared property getter: - (id)nameSpace;	// 0x31c520c1
- (void)parserFoundAttributes:(id)attributes;	// 0x31c51d79
- (void)parserFoundPayload:(id)payload;	// 0x31c51d69
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x31c51d3d
- (void)parserSuggestsBaseURL:(id)url;	// 0x31c51fdd
// declared property getter: - (id)payload;	// 0x31c52169
// converted property getter: - (id)payloadAsString;	// 0x31c51f49
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x31c5210d
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x31c52145
// declared property setter: - (void)setName:(id)name;	// 0x31c5209d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x31c520d5
// declared property setter: - (void)setPayload:(id)payload;	// 0x31c5217d
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x31c51fa9
- (BOOL)validate;	// 0x31c51f45
- (void)write:(id)write;	// 0x31c51dcd
@end

