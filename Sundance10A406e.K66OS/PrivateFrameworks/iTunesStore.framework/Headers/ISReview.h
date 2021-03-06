/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISReview : NSObject <NSCoding, NSCopying> {
	int _assetType;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
	unsigned _bodyMaxLength;	// 12 = 0xc
	NSURL *_infoURL;	// 16 = 0x10
	unsigned long long _itemIdentifier;	// 20 = 0x14
	NSString *_nickname;	// 28 = 0x1c
	BOOL _nicknameIsConfirmed;	// 32 = 0x20
	unsigned _nicknameMaxLength;	// 36 = 0x24
	float _rating;	// 40 = 0x28
	NSURL *_submitURL;	// 44 = 0x2c
	NSString *_title;	// 48 = 0x30
	unsigned _titleMaxLength;	// 52 = 0x34
}
@property(assign, nonatomic) int assetType;	// G=0x3693cff9; S=0x3693d009; @synthesize=_assetType
@property(retain, nonatomic) NSString *body;	// G=0x3693d019; S=0x3693d029; @synthesize=_body
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x3693d039; S=0x3693d049; @synthesize=_bodyMaxLength
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x3693c42d; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x3693d059; S=0x3693d069; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x3693d079; S=0x3693d091; @synthesize=_itemIdentifier
@property(retain, nonatomic) NSString *nickname;	// G=0x3693d0a5; S=0x3693d0b5; @synthesize=_nickname
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x3693d0c5; S=0x3693d0d5; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x3693d0e5; S=0x3693d0f5; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) float rating;	// G=0x3693d105; S=0x3693d115; @synthesize=_rating
@property(retain, nonatomic) NSURL *submitURL;	// G=0x3693d125; S=0x3693d135; @synthesize=_submitURL
@property(retain, nonatomic) NSString *title;	// G=0x3693d145; S=0x3693d155; @synthesize=_title
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x3693d165; S=0x3693d175; @synthesize=_titleMaxLength
- (id)initWithCoder:(id)coder;	// 0x3693bdd1
- (id)_draftFileName;	// 0x3693cf5d
- (id)_draftsDirectoryPath;	// 0x3693cfa9
// declared property getter: - (int)assetType;	// 0x3693cff9
// declared property getter: - (id)body;	// 0x3693d019
// declared property getter: - (unsigned)bodyMaxLength;	// 0x3693d039
- (id)copyWithZone:(NSZone *)zone;	// 0x3693c0c5
- (void)dealloc;	// 0x3693c005
- (void)encodeWithCoder:(id)coder;	// 0x3693c219
// declared property getter: - (BOOL)hasSavedDraft;	// 0x3693c42d
// declared property getter: - (id)infoURL;	// 0x3693d059
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x3693d079
- (void)loadFromDictionary:(id)dictionary;	// 0x3693c4b1
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x3693c8e5
// declared property getter: - (id)nickname;	// 0x3693d0a5
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x3693d0c5
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x3693d0e5
// declared property getter: - (float)rating;	// 0x3693d105
- (BOOL)removeDraft;	// 0x3693cc8d
- (BOOL)restoreFromDraft;	// 0x3693cd61
- (BOOL)saveAsDraft;	// 0x3693ce5d
// declared property setter: - (void)setAssetType:(int)type;	// 0x3693d009
// declared property setter: - (void)setBody:(id)body;	// 0x3693d029
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x3693d049
// declared property setter: - (void)setInfoURL:(id)url;	// 0x3693d069
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x3693d091
// declared property setter: - (void)setNickname:(id)nickname;	// 0x3693d0b5
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x3693d0d5
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x3693d0f5
// declared property setter: - (void)setRating:(float)rating;	// 0x3693d115
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x3693d135
// declared property setter: - (void)setTitle:(id)title;	// 0x3693d155
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x3693d175
// declared property getter: - (id)submitURL;	// 0x3693d125
// declared property getter: - (id)title;	// 0x3693d145
// declared property getter: - (unsigned)titleMaxLength;	// 0x3693d165
@end

