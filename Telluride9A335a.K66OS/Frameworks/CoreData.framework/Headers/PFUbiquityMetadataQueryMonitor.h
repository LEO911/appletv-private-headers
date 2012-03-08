/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMetadataQuery, NSURL;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataQueryMonitor : NSObject {
@private
	NSMetadataQuery *_query;	// 4 = 0x4
	NSURL *_ubiquityRootURL;	// 8 = 0x8
}
@property(readonly, assign) NSMetadataQuery *query;	// G=0x331eaac5; @synthesize=_query
@property(readonly, assign) NSURL *ubiquityRootURL;	// G=0x331eaab5; @synthesize=_ubiquityRootURL
+ (void)initialize;	// 0x331eac21
- (id)init;	// 0x331eaad5
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x331eb22d
- (void)dealloc;	// 0x331eb165
- (id)description;	// 0x331eb0ed
- (void)pollForNewFiles:(id)newFiles;	// 0x331eac69
// declared property getter: - (id)query;	// 0x331eaac5
- (void)startMonitoringQuery;	// 0x331eb095
// declared property getter: - (id)ubiquityRootURL;	// 0x331eaab5
@end
