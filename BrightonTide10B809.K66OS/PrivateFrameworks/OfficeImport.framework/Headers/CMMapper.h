/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "CMMapperRootArchiver.h"


@interface CMMapper : NSObject <CMMapperRootArchiver> {
	CMMapper *mParent;	// 4 = 0x4
}
@property(retain) id parent;	// G=0x348796e9; S=0x349dfcfd; converted property
- (id)initWithParent:(id)parent;	// 0x348756b9
- (void)addAttribute:(id)attribute toNode:(id)node value:(id)value;	// 0x34876841
- (void)addStyle:(id)style withName:(id)name;	// 0x349dfd0d
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style;	// 0x34876535
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style embedStyle:(BOOL)style3;	// 0x34879015
- (id)archiver;	// 0x3487a829
- (void)finishMappingWithState:(id)state;	// 0x349dfd61
- (void)mapAt:(id)at withState:(id)state;	// 0x349dfd55
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x349dfd5d
- (void)mapStylesheetAt:(id)at stylesheet:(id)stylesheet;	// 0x348c2d49
// converted property getter: - (id)parent;	// 0x348796e9
- (id)root;	// 0x348796bd
// converted property setter: - (void)setParent:(id)parent;	// 0x349dfcfd
- (void)startMappingWithState:(id)state;	// 0x349dfd59
@end

