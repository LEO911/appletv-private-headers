/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSString *_fileReference;	// 44 = 0x2c
}
@property(retain) NSString *fileReference;	// G=0x336b5889; S=0x336b589d; @synthesize=_fileReference
@property(retain) NSNumber *status;	// G=0x336b5865; S=0x336b5879; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x336b545d
+ (id)asParseRules;	// 0x336b5601
+ (BOOL)frontingBasicTypes;	// 0x336b5559
+ (BOOL)notifyOfUnknownTokens;	// 0x336b55ad
+ (BOOL)parsingLeafNode;	// 0x336b54b1
+ (BOOL)parsingWithSubItems;	// 0x336b5505
// declared property getter: - (id)fileReference;	// 0x336b5889
// declared property setter: - (void)setFileReference:(id)reference;	// 0x336b589d
// declared property setter: - (void)setStatus:(id)status;	// 0x336b5879
// declared property getter: - (id)status;	// 0x336b5865
@end
