/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface CPDumpBinaryToXmlState : NSObject {
	NSString *mCurrentFieldName;	// 4 = 0x4
	NSMutableDictionary *mFieldNameToValueMap;	// 8 = 0x8
}
- (id)init;	// 0x34b04405
- (void)cacheValueforCurrentField:(id)field;	// 0x34b0450d
- (void)dealloc;	// 0x34b04469
- (void)setCurrentField:(id)field;	// 0x34b044cd
- (id)valueForCurrentField;	// 0x34b0453d
- (id)valueForField:(id)field;	// 0x34b04569
@end

