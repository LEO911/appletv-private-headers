/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x329c6749
- (id)initWithParagraph:(id)paragraph;	// 0x32867c19
- (void)clearProperties;	// 0x329c6745
- (void)dealloc;	// 0x327d6cc1
- (BOOL)isEmpty;	// 0x329c6741
- (id)paragraph;	// 0x327d194d
- (int)runType;	// 0x329c673d
@end
