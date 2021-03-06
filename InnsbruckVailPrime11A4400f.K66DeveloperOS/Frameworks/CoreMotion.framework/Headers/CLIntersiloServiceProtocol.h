/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */



@protocol CLIntersiloServiceProtocol
+ (id)getSilo;
@optional
- (void)beginService;
- (void)endService;
@required
- (void)heartAttack;
@optional
- (void)registerDelegate:(id)delegate inSilo:(id)silo;
- (oneway void)release;
- (id)retain;
@end

