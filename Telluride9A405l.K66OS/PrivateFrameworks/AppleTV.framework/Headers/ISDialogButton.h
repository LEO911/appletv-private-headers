/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ISDialogButton : NSObject {
@private
	int _actionType;	// 4 = 0x4
	id _parameter;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	int _urlType;	// 16 = 0x10
}
@property(assign) int actionType;	// G=0x35f46609; S=0x35f46619; @synthesize=_actionType
@property(retain) id parameter;	// G=0x35f46629; S=0x35f4663d; @synthesize=_parameter
@property(retain) NSString *title;	// G=0x35f46661; S=0x35f46675; @synthesize=_title
@property(assign) int urlType;	// G=0x35f46699; S=0x35f466a9; @synthesize=_urlType
+ (id)buttonWithTitle:(id)title;	// 0x35f45df1
- (id)_accountURLForURL:(id)url authenticationContext:(id)context;	// 0x35f462f5
- (int)_actionTypeForString:(id)string;	// 0x35f46455
- (void)_openURLWithRequest:(id)request;	// 0x35f46535
- (int)_urlTypeForString:(id)string;	// 0x35f465b1
// declared property getter: - (int)actionType;	// 0x35f46609
- (void)dealloc;	// 0x35f45d99
- (BOOL)isEqual:(id)equal superficial:(BOOL)superficial;	// 0x35f45e55
- (void)loadFromDictionary:(id)dictionary;	// 0x35f45f7d
// declared property getter: - (id)parameter;	// 0x35f46629
- (void)performDefaultActionForDialog:(id)dialog;	// 0x35f461c1
// declared property setter: - (void)setActionType:(int)type;	// 0x35f46619
- (void)setActionTypeWithString:(id)string;	// 0x35f462c5
// declared property setter: - (void)setParameter:(id)parameter;	// 0x35f4663d
// declared property setter: - (void)setTitle:(id)title;	// 0x35f46675
// declared property setter: - (void)setUrlType:(int)type;	// 0x35f466a9
// declared property getter: - (id)title;	// 0x35f46661
// declared property getter: - (int)urlType;	// 0x35f46699
@end

