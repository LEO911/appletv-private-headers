/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSError, NSString, NSArray;
@protocol NSCopying, OS_xpc_object, NSCoding;

@interface MBMessage : NSObject {
	NSObject<OS_xpc_object> *_xpcObject;	// 4 = 0x4
	NSMutableDictionary *_messageInfo;	// 8 = 0x8
	NSMutableDictionary *_replyInfo;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *arguments;	// G=0x345d4b81; 
@property(copy, nonatomic) NSError *error;	// G=0x345d4ba9; S=0x345d4bd1; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x345d4b59; 
@property(copy, nonatomic) NSObject<NSCopying, NSCoding> *reply;	// G=0x345d4d01; S=0x345d4ca9; 
@property(copy, nonatomic) NSError *replyError;	// G=0x345d4d51; S=0x345d4d29; 
+ (id)messageWithName:(id)name arguments:(id)arguments;	// 0x345d4925
- (id)initWithName:(id)name arguments:(id)arguments;	// 0x345d4971
- (id)_initWithXPCObject:(id)xpcobject;	// 0x345d4751
- (id)_xpcObject;	// 0x345d4d79
// declared property getter: - (id)arguments;	// 0x345d4b81
- (void)dealloc;	// 0x345d4ae1
- (id)description;	// 0x345d4e29
// declared property getter: - (id)error;	// 0x345d4ba9
// declared property getter: - (id)name;	// 0x345d4b59
// declared property getter: - (id)reply;	// 0x345d4d01
// declared property getter: - (id)replyError;	// 0x345d4d51
- (void)sendReply;	// 0x345d4bf9
// declared property setter: - (void)setError:(id)error;	// 0x345d4bd1
// declared property setter: - (void)setReply:(id)reply;	// 0x345d4ca9
// declared property setter: - (void)setReplyError:(id)error;	// 0x345d4d29
@end

