/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSDate, NSString, NSData, NSURL;

@interface IMFileTransfer : NSObject {
	NSURL *_localURL;	// 4 = 0x4
	NSData *_localBookmark;	// 8 = 0x8
	double _lastUpdatedInterval;	// 12 = 0xc
	double _lastAveragedInterval;	// 20 = 0x14
	unsigned long long _lastAveragedBytes;	// 28 = 0x1c
	NSString *_guid;	// 36 = 0x24
	NSString *_messageGUID;	// 40 = 0x28
	NSDate *_startDate;	// 44 = 0x2c
	NSDate *_createdDate;	// 48 = 0x30
	int _transferState;	// 52 = 0x34
	BOOL _isIncoming;	// 56 = 0x38
	NSString *_filename;	// 60 = 0x3c
	NSURL *_transferDataURL;	// 64 = 0x40
	NSString *_utiType;	// 68 = 0x44
	NSString *_mimeType;	// 72 = 0x48
	unsigned long _hfsType;	// 76 = 0x4c
	unsigned short _hfsFlags;	// 80 = 0x50
	unsigned long _hfsCreator;	// 84 = 0x54
	NSString *_accountID;	// 88 = 0x58
	NSString *_otherPerson;	// 92 = 0x5c
	unsigned long long _currentBytes;	// 96 = 0x60
	unsigned long long _totalBytes;	// 104 = 0x68
	unsigned long long _averageTransferRate;	// 112 = 0x70
	BOOL _isDirectory;	// 120 = 0x78
	BOOL _shouldAttemptToResume;	// 121 = 0x79
	int _error;	// 124 = 0x7c
	NSString *_errorDescription;	// 128 = 0x80
	BOOL _wasRegisteredAsStandalone;	// 132 = 0x84
	BOOL _shouldForceArchive;	// 133 = 0x85
	NSDictionary *_localUserInfo;	// 136 = 0x88
	NSString *_transferredFilename;	// 140 = 0x8c
	NSDictionary *_transcoderUserInfo;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) unsigned long long _lastAveragedBytes;	// G=0x341a7795; @synthesize
@property(assign, nonatomic, setter=_setLastAveragedInterval:) double _lastAveragedInterval;	// G=0x341a7769; S=0x341a7781; @synthesize
@property(assign, nonatomic, setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;	// G=0x341a773d; S=0x341a7755; @synthesize
@property(retain, nonatomic) NSString *accountID;	// G=0x34196481; S=0x341a788d; @synthesize=_accountID
@property(assign, nonatomic) unsigned long long averageTransferRate;	// G=0x341a78d5; S=0x341a78ed; @synthesize=_averageTransferRate
@property(readonly, assign, nonatomic) BOOL canBeAccepted;	// G=0x341a73f1; 
@property(retain, nonatomic) NSDate *createdDate;	// G=0x34199165; S=0x341a77ed; @synthesize=_createdDate
@property(assign, nonatomic) unsigned long long currentBytes;	// G=0x341990f5; S=0x341a78ad; @synthesize=_currentBytes
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x341a7421; 
@property(assign, nonatomic) int error;	// G=0x3419922d; @synthesize=_error
@property(retain, nonatomic) NSString *errorDescription;	// G=0x341a7941; @synthesize=_errorDescription
@property(readonly, assign, nonatomic) BOOL existsAtLocalPath;	// G=0x341a7485; 
@property(retain, nonatomic) NSString *filename;	// G=0x34198d8d; S=0x341a780d; @synthesize=_filename
@property(retain, nonatomic) NSString *guid;	// G=0x34196491; S=0x341a77ad; @synthesize=_guid
@property(assign, nonatomic) unsigned long hfsCreator;	// G=0x341a786d; S=0x341a787d; @synthesize=_hfsCreator
@property(assign, nonatomic) unsigned short hfsFlags;	// G=0x341a784d; S=0x341a785d; @synthesize=_hfsFlags
@property(assign, nonatomic) unsigned long hfsType;	// G=0x341a75d9; S=0x341a783d; @synthesize=_hfsType
@property(assign, nonatomic) BOOL isDirectory;	// G=0x341a7901; S=0x341a7911; @synthesize=_isDirectory
@property(assign, nonatomic) BOOL isIncoming;	// G=0x34196a55; S=0x341a77fd; @synthesize=_isIncoming
@property(retain, nonatomic) NSData *localBookmark;	// G=0x34199185; S=0x341a772d; @synthesize=_localBookmark
@property(retain, nonatomic) NSString *localPath;	// G=0x34198f61; 
@property(retain, nonatomic) NSURL *localURL;	// G=0x34198f89; 
@property(readonly, assign, nonatomic) NSURL *localURLWithoutBookmarkResolution;	// G=0x34199175; @synthesize=_localURL
@property(retain, nonatomic) NSString *messageGUID;	// G=0x341a77bd; S=0x341a77cd; @synthesize=_messageGUID
@property(readonly, assign, nonatomic) NSString *mimeType;	// G=0x341a7589; @synthesize=_mimeType
@property(retain, nonatomic) NSString *otherPerson;	// G=0x34196a45; S=0x341a789d; @synthesize=_otherPerson
@property(assign, nonatomic) BOOL shouldAttemptToResume;	// G=0x341a7921; S=0x341a7931; @synthesize=_shouldAttemptToResume
@property(assign, nonatomic) BOOL shouldForceArchive;	// G=0x341a7971; @synthesize=_shouldForceArchive
@property(retain, nonatomic) NSDate *startDate;	// G=0x341a77dd; @synthesize=_startDate
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x341990cd; S=0x341a78c1; @synthesize=_totalBytes
@property(retain, nonatomic) NSDictionary *transcoderUserInfo;	// G=0x341a79d1; S=0x341a79e1; @synthesize=_transcoderUserInfo
@property(retain, nonatomic) NSURL *transferDataURL;	// G=0x341a781d; @synthesize=_transferDataURL
@property(assign, nonatomic) int transferState;	// G=0x34196471; @synthesize=_transferState
@property(retain, nonatomic) NSString *transferredFilename;	// G=0x341a79b1; S=0x341a79c1; @synthesize=_transferredFilename
@property(retain, nonatomic) NSString *type;	// G=0x341a75b1; S=0x341a782d; @synthesize=_utiType
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x341a7991; S=0x341a79a1; @synthesize=_localUserInfo
@property(assign, nonatomic, setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone;	// G=0x341990e5; S=0x341a7961; @synthesize=_wasRegisteredAsStandalone
+ (BOOL)_doesLocalURLRequireArchiving:(id)archiving;	// 0x341a6dd9
+ (id)_invalidCharactersForFileTransferName;	// 0x341a6d89
- (void)_calculateTypeInformation;	// 0x341a72a1
- (void)_clear;	// 0x341962d1
- (id)_dictionaryRepresentation;	// 0x341964a1
- (id)_initWithGUID:(id)guid filename:(id)filename isDirectory:(BOOL)directory localURL:(id)url account:(id)account otherPerson:(id)person totalBytes:(unsigned long long)bytes hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags isIncoming:(BOOL)incoming;	// 0x341a70c5
// declared property getter: - (unsigned long long)_lastAveragedBytes;	// 0x341a7795
// declared property getter: - (double)_lastAveragedInterval;	// 0x341a7769
// declared property getter: - (double)_lastUpdatedInterval;	// 0x341a773d
- (void)_setAccount:(id)account otherPerson:(id)person;	// 0x34198ed5
- (void)_setAveragedTransferRate:(unsigned long long)rate lastAveragedInterval:(double)interval lastAveragedBytes:(unsigned long long)bytes;	// 0x341a721d
- (void)_setCurrentBytes:(unsigned long long)bytes totalBytes:(unsigned long long)bytes2;	// 0x34199099
- (void)_setDirectory:(BOOL)directory hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x341a7261
- (void)_setError:(int)error;	// 0x3419921d
- (void)_setErrorDescription:(id)description;	// 0x341a7951
- (void)_setForceArchive:(BOOL)archive;	// 0x341a7981
// declared property setter: - (void)_setLastAveragedInterval:(double)interval;	// 0x341a7781
// declared property setter: - (void)_setLastUpdatedInterval:(double)interval;	// 0x341a7755
- (void)_setLocalPath:(id)path;	// 0x341a7549
- (void)_setLocalURL:(id)url;	// 0x34198ced
- (void)_setStartDate:(id)date;	// 0x34199031
- (void)_setTransferDataURL:(id)url;	// 0x341a7505
- (void)_setTransferState:(int)state;	// 0x34199021
- (BOOL)_updateWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x34195c95
// declared property getter: - (id)accountID;	// 0x34196481
// declared property getter: - (unsigned long long)averageTransferRate;	// 0x341a78d5
// declared property getter: - (BOOL)canBeAccepted;	// 0x341a73f1
// declared property getter: - (id)createdDate;	// 0x34199165
// declared property getter: - (unsigned long long)currentBytes;	// 0x341990f5
- (void)dealloc;	// 0x341a6d49
- (id)description;	// 0x341a7601
// declared property getter: - (id)displayName;	// 0x341a7421
// declared property getter: - (int)error;	// 0x3419922d
// declared property getter: - (id)errorDescription;	// 0x341a7941
// declared property getter: - (BOOL)existsAtLocalPath;	// 0x341a7485
// declared property getter: - (id)filename;	// 0x34198d8d
// declared property getter: - (id)guid;	// 0x34196491
// declared property getter: - (unsigned long)hfsCreator;	// 0x341a786d
// declared property getter: - (unsigned short)hfsFlags;	// 0x341a784d
// declared property getter: - (unsigned long)hfsType;	// 0x341a75d9
// declared property getter: - (BOOL)isDirectory;	// 0x341a7901
// declared property getter: - (BOOL)isIncoming;	// 0x34196a55
// declared property getter: - (id)localBookmark;	// 0x34199185
// declared property getter: - (id)localPath;	// 0x34198f61
// declared property getter: - (id)localURL;	// 0x34198f89
// declared property getter: - (id)localURLWithoutBookmarkResolution;	// 0x34199175
// declared property getter: - (id)messageGUID;	// 0x341a77bd
// declared property getter: - (id)mimeType;	// 0x341a7589
// declared property getter: - (id)otherPerson;	// 0x34196a45
// declared property setter: - (void)setAccountID:(id)anId;	// 0x341a788d
// declared property setter: - (void)setAverageTransferRate:(unsigned long long)rate;	// 0x341a78ed
// declared property setter: - (void)setCreatedDate:(id)date;	// 0x341a77ed
// declared property setter: - (void)setCurrentBytes:(unsigned long long)bytes;	// 0x341a78ad
// declared property setter: - (void)setFilename:(id)filename;	// 0x341a780d
// declared property setter: - (void)setGuid:(id)guid;	// 0x341a77ad
// declared property setter: - (void)setHfsCreator:(unsigned long)creator;	// 0x341a787d
// declared property setter: - (void)setHfsFlags:(unsigned short)flags;	// 0x341a785d
// declared property setter: - (void)setHfsType:(unsigned long)type;	// 0x341a783d
// declared property setter: - (void)setIsDirectory:(BOOL)directory;	// 0x341a7911
// declared property setter: - (void)setIsIncoming:(BOOL)incoming;	// 0x341a77fd
// declared property setter: - (void)setLocalBookmark:(id)bookmark;	// 0x341a772d
// declared property setter: - (void)setMessageGUID:(id)guid;	// 0x341a77cd
// declared property setter: - (void)setOtherPerson:(id)person;	// 0x341a789d
// declared property setter: - (void)setRegisteredAsStandalone:(BOOL)standalone;	// 0x341a7961
// declared property setter: - (void)setShouldAttemptToResume:(BOOL)attemptToResume;	// 0x341a7931
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x341a78c1
// declared property setter: - (void)setTranscoderUserInfo:(id)info;	// 0x341a79e1
// declared property setter: - (void)setTransferredFilename:(id)filename;	// 0x341a79c1
// declared property setter: - (void)setType:(id)type;	// 0x341a782d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x341a79a1
// declared property getter: - (BOOL)shouldAttemptToResume;	// 0x341a7921
// declared property getter: - (BOOL)shouldForceArchive;	// 0x341a7971
// declared property getter: - (id)startDate;	// 0x341a77dd
// declared property getter: - (unsigned long long)totalBytes;	// 0x341990cd
// declared property getter: - (id)transcoderUserInfo;	// 0x341a79d1
// declared property getter: - (id)transferDataURL;	// 0x341a781d
// declared property getter: - (int)transferState;	// 0x34196471
// declared property getter: - (id)transferredFilename;	// 0x341a79b1
// declared property getter: - (id)type;	// 0x341a75b1
// declared property getter: - (id)userInfo;	// 0x341a7991
// declared property getter: - (BOOL)wasRegisteredAsStandalone;	// 0x341990e5
@end

