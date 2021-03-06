/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (MPNonRetainingDelayedPerforms)
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)nonRetainedTarget;	// 0x36eb1de5
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)nonRetainedTarget selector:(SEL)selector object:(id)object;	// 0x36eb1c41
+ (void)performSelectorWithNonRetainedTarget:(id)nonRetainedTarget selector:(SEL)selector withObject:(id)object afterDelay:(double)delay;	// 0x36eb1be9
- (void)_nonRetainingPerformSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;	// 0x36eb1739
@end

@interface NSObject (MPTimeMakerHelper)
- (void)__crossedTimeMarkerNotification:(id)notification;	// 0x36ecbbe1
- (void)registerForTimeMarkerNotificationsIfNecessaryForPlayer:(id)player;	// 0x36ecbc7d
- (void)unregisterForTimeMarkerNotifications;	// 0x36ecbcfd
@end

@interface NSObject (MPMediaLibraryDataProviderSystemML3StringCoercion)
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;	// 0x36f52061
@end

