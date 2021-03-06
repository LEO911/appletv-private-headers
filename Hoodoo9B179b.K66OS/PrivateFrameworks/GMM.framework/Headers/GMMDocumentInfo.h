/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMDocumentInfo : PBCodable {
	NSString *_author;	// 4 = 0x4
	NSString *_attributionUrl;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x31cec095; S=0x31cec0a5; @synthesize=_attributionUrl
@property(retain, nonatomic) NSString *author;	// G=0x31cec061; S=0x31cec071; @synthesize=_author
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x31cebe0d; 
@property(readonly, assign, nonatomic) BOOL hasAuthor;	// G=0x31cebdf5; 
// declared property getter: - (id)attributionUrl;	// 0x31cec095
// declared property getter: - (id)author;	// 0x31cec061
- (void)dealloc;	// 0x31cebd9d
- (id)description;	// 0x31cebe25
- (id)dictionaryRepresentation;	// 0x31cebe95
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x31cebe0d
// declared property getter: - (BOOL)hasAuthor;	// 0x31cebdf5
- (BOOL)readFrom:(id)from;	// 0x31cebf15
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x31cec0a5
// declared property setter: - (void)setAuthor:(id)author;	// 0x31cec071
- (void)writeTo:(id)to;	// 0x31cec009
@end

