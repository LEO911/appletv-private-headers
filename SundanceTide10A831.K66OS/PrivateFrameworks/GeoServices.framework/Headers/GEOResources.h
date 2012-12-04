/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOResources : PBCodable {
	NSMutableArray *_attributionBadges;	// 4 = 0x4
	NSMutableArray *_attributions;	// 8 = 0x8
	NSString *_authToken;	// 12 = 0xc
	NSMutableArray *_fonts;	// 16 = 0x10
	NSMutableArray *_icons;	// 20 = 0x14
	NSMutableArray *_regionalResources;	// 24 = 0x18
	NSString *_resourcesURL;	// 28 = 0x1c
	NSMutableArray *_styleSheets;	// 32 = 0x20
	NSMutableArray *_textures;	// 36 = 0x24
	NSMutableArray *_tileGroups;	// 40 = 0x28
	NSMutableArray *_tileSets;	// 44 = 0x2c
	NSMutableArray *_xmls;	// 48 = 0x30
}
@property(retain, nonatomic) NSMutableArray *attributionBadges;	// G=0x302899d5; S=0x302899e5; @synthesize=_attributionBadges
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x302899f5; S=0x30289a05; @synthesize=_attributions
@property(retain, nonatomic) NSString *authToken;	// G=0x30289a15; S=0x30289a25; @synthesize=_authToken
@property(retain, nonatomic) NSMutableArray *fonts;	// G=0x30289955; S=0x30289965; @synthesize=_fonts
@property(readonly, assign, nonatomic) BOOL hasAuthToken;	// G=0x30287cc5; 
@property(readonly, assign, nonatomic) BOOL hasResourcesURL;	// G=0x30287cdd; 
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x30289975; S=0x30289985; @synthesize=_icons
@property(retain, nonatomic) NSMutableArray *regionalResources;	// G=0x30289995; S=0x302899a5; @synthesize=_regionalResources
@property(retain, nonatomic) NSString *resourcesURL;	// G=0x30289a35; S=0x30289a45; @synthesize=_resourcesURL
@property(retain, nonatomic) NSMutableArray *styleSheets;	// G=0x30289915; S=0x30289925; @synthesize=_styleSheets
@property(retain, nonatomic) NSMutableArray *textures;	// G=0x30289935; S=0x30289945; @synthesize=_textures
@property(retain, nonatomic) NSMutableArray *tileGroups;	// G=0x302898d5; S=0x302898e5; @synthesize=_tileGroups
@property(retain, nonatomic) NSMutableArray *tileSets;	// G=0x302898f5; S=0x30289905; @synthesize=_tileSets
@property(retain, nonatomic) NSMutableArray *xmls;	// G=0x302899b5; S=0x302899c5; @synthesize=_xmls
- (void)addAttribution:(id)attribution;	// 0x30287c19
- (void)addAttributionBadge:(id)badge;	// 0x30287b4d
- (void)addFont:(id)font;	// 0x3028781d
- (void)addIcon:(id)icon;	// 0x302878e9
- (void)addRegionalResource:(id)resource;	// 0x302879b5
- (void)addStyleSheet:(id)sheet;	// 0x30287685
- (void)addTexture:(id)texture;	// 0x30287751
- (void)addTileGroup:(id)group;	// 0x302874ed
- (void)addTileSet:(id)set;	// 0x302875b9
- (void)addXml:(id)xml;	// 0x30287a81
- (id)attributionAtIndex:(unsigned)index;	// 0x30287ca5
- (id)attributionBadgeAtIndex:(unsigned)index;	// 0x30287bd9
// declared property getter: - (id)attributionBadges;	// 0x302899d5
- (unsigned)attributionBadgesCount;	// 0x30287bb9
// declared property getter: - (id)attributions;	// 0x302899f5
- (unsigned)attributionsCount;	// 0x30287c85
// declared property getter: - (id)authToken;	// 0x30289a15
- (void)clearAttributionBadges;	// 0x30287b2d
- (void)clearAttributions;	// 0x30287bf9
- (void)clearFonts;	// 0x302877fd
- (void)clearIcons;	// 0x302878c9
- (void)clearRegionalResources;	// 0x30287995
- (void)clearStyleSheets;	// 0x30287665
- (void)clearTextures;	// 0x30287731
- (void)clearTileGroups;	// 0x302874cd
- (void)clearTileSets;	// 0x30287599
- (void)clearXmls;	// 0x30287a61
- (void)copyTo:(id)to;	// 0x30289021
- (void)dealloc;	// 0x302873ad
- (id)description;	// 0x30287cf5
- (id)dictionaryRepresentation;	// 0x30287d65
- (id)fontAtIndex:(unsigned)index;	// 0x302878a9
// declared property getter: - (id)fonts;	// 0x30289955
- (unsigned)fontsCount;	// 0x30287889
// declared property getter: - (BOOL)hasAuthToken;	// 0x30287cc5
// declared property getter: - (BOOL)hasResourcesURL;	// 0x30287cdd
- (unsigned)hash;	// 0x30289781
- (id)iconAtIndex:(unsigned)index;	// 0x30287975
// declared property getter: - (id)icons;	// 0x30289975
- (unsigned)iconsCount;	// 0x30287955
- (BOOL)isEqual:(id)equal;	// 0x302894f1
- (BOOL)readFrom:(id)from;	// 0x30288859
- (id)regionalResourceAtIndex:(unsigned)index;	// 0x30287a41
// declared property getter: - (id)regionalResources;	// 0x30289995
- (unsigned)regionalResourcesCount;	// 0x30287a21
// declared property getter: - (id)resourcesURL;	// 0x30289a35
// declared property setter: - (void)setAttributionBadges:(id)badges;	// 0x302899e5
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x30289a05
// declared property setter: - (void)setAuthToken:(id)token;	// 0x30289a25
// declared property setter: - (void)setFonts:(id)fonts;	// 0x30289965
// declared property setter: - (void)setIcons:(id)icons;	// 0x30289985
// declared property setter: - (void)setRegionalResources:(id)resources;	// 0x302899a5
// declared property setter: - (void)setResourcesURL:(id)url;	// 0x30289a45
// declared property setter: - (void)setStyleSheets:(id)sheets;	// 0x30289925
// declared property setter: - (void)setTextures:(id)textures;	// 0x30289945
// declared property setter: - (void)setTileGroups:(id)groups;	// 0x302898e5
// declared property setter: - (void)setTileSets:(id)sets;	// 0x30289905
// declared property setter: - (void)setXmls:(id)xmls;	// 0x302899c5
- (id)styleSheetAtIndex:(unsigned)index;	// 0x30287711
// declared property getter: - (id)styleSheets;	// 0x30289915
- (unsigned)styleSheetsCount;	// 0x302876f1
- (id)textureAtIndex:(unsigned)index;	// 0x302877dd
// declared property getter: - (id)textures;	// 0x30289935
- (unsigned)texturesCount;	// 0x302877bd
- (id)tileGroupAtIndex:(unsigned)index;	// 0x30287579
// declared property getter: - (id)tileGroups;	// 0x302898d5
- (unsigned)tileGroupsCount;	// 0x30287559
- (id)tileSetAtIndex:(unsigned)index;	// 0x30287645
// declared property getter: - (id)tileSets;	// 0x302898f5
- (unsigned)tileSetsCount;	// 0x30287625
- (void)writeTo:(id)to;	// 0x30288865
- (id)xmlAtIndex:(unsigned)index;	// 0x30287b0d
// declared property getter: - (id)xmls;	// 0x302899b5
- (unsigned)xmlsCount;	// 0x30287aed
@end
