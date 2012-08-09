/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface AFAccount : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSString *_label;	// 8 = 0x8
	NSString *_assistantIdentifier;	// 12 = 0xc
	NSString *_speechIdentifier;	// 16 = 0x10
	NSString *_hostname;	// 20 = 0x14
	NSString *_predefinedServer;	// 24 = 0x18
	NSString *_aceHost;	// 28 = 0x1c
	NSDictionary *_lastSyncDates;	// 32 = 0x20
	NSString *_localeIdentifier;	// 36 = 0x24
	BOOL _isActive;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *aceHost;	// G=0x33f78cc1; S=0x33f78cd5; @synthesize=_aceHost
@property(copy, nonatomic) NSString *assistantIdentifier;	// G=0x33f78c31; S=0x33f78c45; @synthesize=_assistantIdentifier
@property(copy, nonatomic) NSString *hostname;	// G=0x33f78c79; S=0x33f78c8d; @synthesize=_hostname
@property(copy, nonatomic) NSString *identifier;	// G=0x33f78be9; S=0x33f78bfd; @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isActive;	// G=0x33f78d09; @synthesize=_isActive
@property(copy, nonatomic) NSString *label;	// G=0x33f78c0d; S=0x33f78c21; @synthesize=_label
@property(copy, nonatomic) NSDictionary *lastSyncDates;	// G=0x33f78ce5; S=0x33f78cf9; @synthesize=_lastSyncDates
@property(copy, nonatomic) NSString *localeIdentifier;	// G=0x33f78d19; S=0x33f78d2d; @synthesize=_localeIdentifier
@property(copy, nonatomic) NSString *predefinedServer;	// G=0x33f78c9d; S=0x33f78cb1; @synthesize=_predefinedServer
@property(copy, nonatomic) NSString *speechIdentifier;	// G=0x33f78c55; S=0x33f78c69; @synthesize=_speechIdentifier
- (id)initWithMessageDictionary:(id)messageDictionary;	// 0x33f787a5
- (void).cxx_destruct;	// 0x33f78d3d
// declared property getter: - (id)aceHost;	// 0x33f78cc1
// declared property getter: - (id)assistantIdentifier;	// 0x33f78c31
- (id)description;	// 0x33f786f5
// declared property getter: - (id)hostname;	// 0x33f78c79
// declared property getter: - (id)identifier;	// 0x33f78be9
// declared property getter: - (BOOL)isActive;	// 0x33f78d09
// declared property getter: - (id)label;	// 0x33f78c0d
// declared property getter: - (id)lastSyncDates;	// 0x33f78ce5
// declared property getter: - (id)localeIdentifier;	// 0x33f78d19
- (id)messageDictionary;	// 0x33f78a31
// declared property getter: - (id)predefinedServer;	// 0x33f78c9d
// declared property setter: - (void)setAceHost:(id)host;	// 0x33f78cd5
// declared property setter: - (void)setAssistantIdentifier:(id)identifier;	// 0x33f78c45
// declared property setter: - (void)setHostname:(id)hostname;	// 0x33f78c8d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x33f78bfd
// declared property setter: - (void)setLabel:(id)label;	// 0x33f78c21
// declared property setter: - (void)setLastSyncDates:(id)dates;	// 0x33f78cf9
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0x33f78d2d
// declared property setter: - (void)setPredefinedServer:(id)server;	// 0x33f78cb1
// declared property setter: - (void)setSpeechIdentifier:(id)identifier;	// 0x33f78c69
// declared property getter: - (id)speechIdentifier;	// 0x33f78c55
@end
