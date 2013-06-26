/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(retain, nonatomic) NSDate *simulatedDate;	// G=0x31487a59; S=0x31487a75; 
@property(readonly, assign, nonatomic) long time;	// G=0x31487a19; 
+ (id)defaultDebugContext;	// 0x31487911
- (id)init;	// 0x31487955
- (BOOL)boolForName:(id)name;	// 0x31487be5
- (void)dealloc;	// 0x314879cd
- (id)description;	// 0x31487de5
- (BOOL)eval:(id)eval;	// 0x31487da1
- (int)intForName:(id)name;	// 0x31487c5d
- (BOOL)isFlagSet:(id)set;	// 0x31487aad
- (id)performSelectorForName:(id)name;	// 0x31487cd9
- (id)performSelectorForName:(id)name withObject:(id)object;	// 0x31487d35
- (void)removeValueForName:(id)name;	// 0x31487b55
- (void)setBool:(BOOL)aBool forName:(id)name;	// 0x31487b95
- (void)setDelegate:(id)delegate andSelector:(SEL)selector forName:(id)name;	// 0x31487c85
- (void)setFlag:(id)flag;	// 0x31487ae5
- (void)setInt:(int)int forName:(id)name;	// 0x31487c1d
// declared property setter: - (void)setSimulatedDate:(id)date;	// 0x31487a75
- (void)setValue:(id)value forName:(id)name;	// 0x31487b35
// declared property getter: - (id)simulatedDate;	// 0x31487a59
// declared property getter: - (long)time;	// 0x31487a19
- (id)valueForName:(id)name;	// 0x31487b75
@end
