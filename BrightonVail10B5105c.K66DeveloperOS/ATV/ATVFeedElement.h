/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVFeedDocument, NSString, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedElement : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	ATVFeedMerchant *_merchant;	// 8 = 0x8
	NSString *_type;	// 12 = 0xc
	ATVFeedElement *_parent;	// 16 = 0x10
	NSDictionary *_eventHandlerScripts;	// 20 = 0x14
}
@property(retain, nonatomic) NSDictionary *eventHandlerScripts;	// G=0x1620a1; S=0x1620b1; @synthesize=_eventHandlerScripts
@property(copy, nonatomic) NSString *identifier;	// G=0x162029; S=0x16203d; @synthesize=_identifier
@property(retain, nonatomic) ATVFeedMerchant *merchant;	// G=0x161f3d; S=0x16204d; @synthesize=_merchant
@property(readonly, assign, nonatomic) ATVFeedDocument *ownerDocument;	// G=0x161f7d; 
@property(assign, nonatomic) ATVFeedElement *parent;	// G=0x162081; S=0x162091; @synthesize=_parent
@property(copy, nonatomic) NSString *type;	// G=0x16205d; S=0x162071; @synthesize=_type
+ (id)elementWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x161d21
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x161d79
- (void)dealloc;	// 0x161f9d
// declared property getter: - (id)eventHandlerScripts;	// 0x1620a1
// declared property getter: - (id)identifier;	// 0x162029
// declared property getter: - (id)merchant;	// 0x161f3d
// declared property getter: - (id)ownerDocument;	// 0x161f7d
// declared property getter: - (id)parent;	// 0x162081
// declared property setter: - (void)setEventHandlerScripts:(id)scripts;	// 0x1620b1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x16203d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16204d
// declared property setter: - (void)setParent:(id)parent;	// 0x162091
// declared property setter: - (void)setType:(id)type;	// 0x162071
// declared property getter: - (id)type;	// 0x16205d
@end

