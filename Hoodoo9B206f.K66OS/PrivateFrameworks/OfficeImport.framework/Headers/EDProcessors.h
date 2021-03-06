/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x3444cd31
- (void)addProcessorClass:(Class)aClass;	// 0x3444cead
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x3446b355
- (void)dealloc;	// 0x3448509d
- (bool)hasProcessors;	// 0x345c5dcd
- (void)markObject:(id)object processor:(Class)processor;	// 0x34461bd1
- (void)removeAllObjects;	// 0x3444ce8d
- (void)removeProcessorClass:(Class)aClass;	// 0x345c5d31
@end

