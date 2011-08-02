/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapInfo, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMSearchResponse : PBCodable {
@private
	int _status;	// 4 = 0x4
	NSString *_errorMessage;	// 8 = 0x8
	NSString *_originalQuery;	// 12 = 0xc
	NSString *_refinementQuery;	// 16 = 0x10
	BOOL _autoSpellingCorrected;	// 20 = 0x14
	BOOL _hasAutoSpellingCorrected;	// 21 = 0x15
	NSString *_spellingSuggestion;	// 24 = 0x18
	GMMMapInfo *_mapInfo;	// 28 = 0x1c
	NSMutableArray *_searchResults;	// 32 = 0x20
	NSMutableArray *_documentInfos;	// 36 = 0x24
	NSMutableArray *_categorys;	// 40 = 0x28
	int _resultOffset;	// 44 = 0x2c
	BOOL _hasResultOffset;	// 48 = 0x30
	int _payloadType;	// 52 = 0x34
	BOOL _hasPayloadType;	// 56 = 0x38
	int _totalResults;	// 60 = 0x3c
	BOOL _hasTotalResults;	// 64 = 0x40
	NSString *_splitQuerySearchPart;	// 68 = 0x44
	NSString *_splitQueryLocationPart;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL autoSpellingCorrected;	// G=0x34440c29; S=0x34440a89; @synthesize=_autoSpellingCorrected
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x34440bc9; S=0x34441e61; @synthesize=_categorys
@property(readonly, assign, nonatomic) int categorysCount;	// G=0x34441981; 
@property(retain, nonatomic) NSMutableArray *documentInfos;	// G=0x34440bd9; S=0x34441e39; @synthesize=_documentInfos
@property(readonly, assign, nonatomic) int documentInfosCount;	// G=0x34441aa1; 
@property(retain, nonatomic) NSString *errorMessage;	// G=0x34440c59; S=0x34441d49; @synthesize=_errorMessage
@property(readonly, assign, nonatomic) BOOL hasAutoSpellingCorrected;	// G=0x34440c19; @synthesize=_hasAutoSpellingCorrected
@property(readonly, assign, nonatomic) BOOL hasErrorMessage;	// G=0x34440a4d; 
@property(readonly, assign, nonatomic) BOOL hasMapInfo;	// G=0x34440ab9; 
@property(readonly, assign, nonatomic) BOOL hasOriginalQuery;	// G=0x34440a61; 
@property(readonly, assign, nonatomic) BOOL hasPayloadType;	// G=0x34440b89; @synthesize=_hasPayloadType
@property(readonly, assign, nonatomic) BOOL hasRefinementQuery;	// G=0x34440a75; 
@property(readonly, assign, nonatomic) BOOL hasResultOffset;	// G=0x34440ba9; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSpellingSuggestion;	// G=0x34440aa5; 
@property(readonly, assign, nonatomic) BOOL hasSplitQueryLocationPart;	// G=0x34440b35; 
@property(readonly, assign, nonatomic) BOOL hasSplitQuerySearchPart;	// G=0x34440b21; 
@property(readonly, assign, nonatomic) BOOL hasTotalResults;	// G=0x34440b69; @synthesize=_hasTotalResults
@property(retain, nonatomic) GMMMapInfo *mapInfo;	// G=0x34440bf9; S=0x34441de9; @synthesize=_mapInfo
@property(retain, nonatomic) NSString *originalQuery;	// G=0x34440c49; S=0x34441d71; @synthesize=_originalQuery
@property(assign, nonatomic) int payloadType;	// G=0x34440b99; S=0x34440ae9; @synthesize=_payloadType
@property(retain, nonatomic) NSString *refinementQuery;	// G=0x34440c39; S=0x34441d99; @synthesize=_refinementQuery
@property(assign, nonatomic) int resultOffset;	// G=0x34440bb9; S=0x34440acd; @synthesize=_resultOffset
@property(retain, nonatomic) NSMutableArray *searchResults;	// G=0x34440be9; S=0x34441e11; @synthesize=_searchResults
@property(readonly, assign, nonatomic) int searchResultsCount;	// G=0x34441bc1; 
@property(retain, nonatomic) NSString *spellingSuggestion;	// G=0x34440c09; S=0x34441dc1; @synthesize=_spellingSuggestion
@property(retain, nonatomic) NSString *splitQueryLocationPart;	// G=0x34440b49; S=0x34441eb1; @synthesize=_splitQueryLocationPart
@property(retain, nonatomic) NSString *splitQuerySearchPart;	// G=0x34440b59; S=0x34441e89; @synthesize=_splitQuerySearchPart
@property(assign, nonatomic) int status;	// G=0x34440c69; S=0x34440c79; @synthesize=_status
@property(assign, nonatomic) int totalResults;	// G=0x34440b79; S=0x34440b05; @synthesize=_totalResults
- (id)init;	// 0x34441cd1
- (void)addCategory:(id)category;	// 0x34441885
- (void)addDocumentInfo:(id)info;	// 0x344419a5
- (void)addSearchResult:(id)result;	// 0x34441ac5
// declared property getter: - (BOOL)autoSpellingCorrected;	// 0x34440c29
- (id)categoryAtIndex:(unsigned)index;	// 0x344418b5
// declared property getter: - (id)categorys;	// 0x34440bc9
// declared property getter: - (int)categorysCount;	// 0x34441981
- (void)dealloc;	// 0x34441be5
- (id)description;	// 0x34440c89
- (id)documentInfoAtIndex:(unsigned)index;	// 0x344419d5
// declared property getter: - (id)documentInfos;	// 0x34440bd9
// declared property getter: - (int)documentInfosCount;	// 0x34441aa1
// declared property getter: - (id)errorMessage;	// 0x34440c59
// declared property getter: - (BOOL)hasAutoSpellingCorrected;	// 0x34440c19
// declared property getter: - (BOOL)hasErrorMessage;	// 0x34440a4d
// declared property getter: - (BOOL)hasMapInfo;	// 0x34440ab9
// declared property getter: - (BOOL)hasOriginalQuery;	// 0x34440a61
// declared property getter: - (BOOL)hasPayloadType;	// 0x34440b89
// declared property getter: - (BOOL)hasRefinementQuery;	// 0x34440a75
// declared property getter: - (BOOL)hasResultOffset;	// 0x34440ba9
// declared property getter: - (BOOL)hasSpellingSuggestion;	// 0x34440aa5
// declared property getter: - (BOOL)hasSplitQueryLocationPart;	// 0x34440b35
// declared property getter: - (BOOL)hasSplitQuerySearchPart;	// 0x34440b21
// declared property getter: - (BOOL)hasTotalResults;	// 0x34440b69
// declared property getter: - (id)mapInfo;	// 0x34440bf9
// declared property getter: - (id)originalQuery;	// 0x34440c49
// declared property getter: - (int)payloadType;	// 0x34440b99
- (BOOL)readFrom:(id)from;	// 0x344414d9
// declared property getter: - (id)refinementQuery;	// 0x34440c39
// declared property getter: - (int)resultOffset;	// 0x34440bb9
- (id)searchResultAtIndex:(unsigned)index;	// 0x34441af5
// declared property getter: - (id)searchResults;	// 0x34440be9
// declared property getter: - (int)searchResultsCount;	// 0x34441bc1
// declared property setter: - (void)setAutoSpellingCorrected:(BOOL)corrected;	// 0x34440a89
- (void)setCategory:(id)category atIndex:(unsigned)index;	// 0x34441919
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x34441e61
- (void)setDocumentInfo:(id)info atIndex:(unsigned)index;	// 0x34441a39
// declared property setter: - (void)setDocumentInfos:(id)infos;	// 0x34441e39
// declared property setter: - (void)setErrorMessage:(id)message;	// 0x34441d49
// declared property setter: - (void)setMapInfo:(id)info;	// 0x34441de9
// declared property setter: - (void)setOriginalQuery:(id)query;	// 0x34441d71
// declared property setter: - (void)setPayloadType:(int)type;	// 0x34440ae9
// declared property setter: - (void)setRefinementQuery:(id)query;	// 0x34441d99
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x34440acd
- (void)setSearchResult:(id)result atIndex:(unsigned)index;	// 0x34441b59
// declared property setter: - (void)setSearchResults:(id)results;	// 0x34441e11
// declared property setter: - (void)setSpellingSuggestion:(id)suggestion;	// 0x34441dc1
// declared property setter: - (void)setSplitQueryLocationPart:(id)part;	// 0x34441eb1
// declared property setter: - (void)setSplitQuerySearchPart:(id)part;	// 0x34441e89
// declared property setter: - (void)setStatus:(int)status;	// 0x34440c79
// declared property setter: - (void)setTotalResults:(int)results;	// 0x34440b05
// declared property getter: - (id)spellingSuggestion;	// 0x34440c09
// declared property getter: - (id)splitQueryLocationPart;	// 0x34440b49
// declared property getter: - (id)splitQuerySearchPart;	// 0x34440b59
// declared property getter: - (int)status;	// 0x34440c69
// declared property getter: - (int)totalResults;	// 0x34440b79
- (void)writeTo:(id)to;	// 0x34440ff9
@end
