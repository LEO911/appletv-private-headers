/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, TIUserDictionaryController;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionary : XXUnknownSuperclass {
	NSMutableDictionary *_inputStrings;	// 100 = 0x64
	NSDictionary *_topLevelDictionary;	// 104 = 0x68
	TIUserDictionaryController *delegate;	// 108 = 0x6c
}
@property(assign, nonatomic) TIUserDictionaryController *delegate;	// G=0x35b8a789; S=0x35b8a799; @synthesize
- (id)initWithFileURL:(id)fileURL;	// 0x35b89351
- (id)allWordsAsWordKeyPairs;	// 0x35b8a109
- (id)contentsForType:(id)type error:(id *)error;	// 0x35b8a6ad
- (void)dealloc;	// 0x35b894b5
// declared property getter: - (id)delegate;	// 0x35b8a789
- (void)documentStateChanged:(id)changed;	// 0x35b8a6ed
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;	// 0x35b8a62d
- (void)mergeConflictEntries:(id)entries intoCurrentEntries:(id)entries2;	// 0x35b8975d
- (void)mergeRevisionsFromConflictVersions:(id)conflictVersions;	// 0x35b89ad1
- (void)mergeRevisionsFromDictionary:(id)dictionary;	// 0x35b899c9
- (void)pullWordsFromDelegate;	// 0x35b8a2b5
- (void)pushWordsToDelegate;	// 0x35b89c85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35b8a799
- (id)setTarget:(id)target forShortcut:(id)shortcut;	// 0x35b89545
@end

