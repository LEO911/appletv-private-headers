/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SAFmfGeoFence, NSNumber, NSString, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet {
}
@property(retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;	// G=0x304fe9e1; S=0x304fea35; 
@property(copy, nonatomic) NSNumber *enable;	// G=0x304fea71; S=0x304fea8d; 
@property(copy, nonatomic) NSString *fenceType;	// G=0x304feadd; S=0x304feaf9; 
@property(copy, nonatomic) NSNumber *oneTimeOnly;	// G=0x304feb49; S=0x304feb65; 
@property(copy, nonatomic) NSURL *searchContext;	// G=0x304febb5; S=0x304fec31; 
+ (id)geoFenceSnippet;	// 0x304fe951
+ (id)geoFenceSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x304fe995
// declared property getter: - (id)aceFmfGeoFence;	// 0x304fe9e1
// declared property getter: - (id)enable;	// 0x304fea71
- (id)encodedClassName;	// 0x304fe945
// declared property getter: - (id)fenceType;	// 0x304feadd
- (id)groupIdentifier;	// 0x304fe935
// declared property getter: - (id)oneTimeOnly;	// 0x304feb49
// declared property getter: - (id)searchContext;	// 0x304febb5
// declared property setter: - (void)setAceFmfGeoFence:(id)fence;	// 0x304fea35
// declared property setter: - (void)setEnable:(id)enable;	// 0x304fea8d
// declared property setter: - (void)setFenceType:(id)type;	// 0x304feaf9
// declared property setter: - (void)setOneTimeOnly:(id)only;	// 0x304feb65
// declared property setter: - (void)setSearchContext:(id)context;	// 0x304fec31
@end
