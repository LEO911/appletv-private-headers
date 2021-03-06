/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface MPTimedMetadata : NSObject {
	void *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *allMetadata;	// G=0x31d58d79; 
@property(readonly, assign, nonatomic) NSString *key;	// G=0x31d58bed; 
@property(readonly, assign, nonatomic) NSString *keyspace;	// G=0x31d58c19; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x31d58d21; 
@property(readonly, assign, nonatomic) id value;	// G=0x31d58c45; 
- (id)init;	// 0x31d58aad
- (id)_initWithMetadataItem:(id)metadataItem;	// 0x31d58af9
// declared property getter: - (id)allMetadata;	// 0x31d58d79
- (void)dealloc;	// 0x31d58b81
// declared property getter: - (id)key;	// 0x31d58bed
// declared property getter: - (id)keyspace;	// 0x31d58c19
// declared property getter: - (double)timestamp;	// 0x31d58d21
// declared property getter: - (id)value;	// 0x31d58c45
@end

