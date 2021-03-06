/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)scheme;	// 0x3048c929
+ (id)CDVURLWithScheme:(id)scheme host:(id)host port:(id)port path:(id)path;	// 0x3048c3d9
+ (id)CDVURLWithScheme:(id)scheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path;	// 0x3048c361
- (id)initWithCDVScheme:(id)cdvscheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path parameterString:(id)string query:(id)query fragment:(id)fragment;	// 0x3048c5b9
- (id)CDVFileSystemSafePath;	// 0x3048cfb9
- (BOOL)CDVIsEqualToURL:(id)url;	// 0x3048cf81
- (id)CDVPassword;	// 0x3048cd19
- (id)CDVRawLastPathComponent;	// 0x3048cd71
- (id)CDVRawPath;	// 0x3048cd45
- (id)CDVServerURL;	// 0x3048ce8d
- (id)CDVURLByDeletingLastPathComponent;	// 0x3048ce09
- (id)CDVURLWithPassword:(id)password;	// 0x3048cafd
- (id)CDVURLWithPath:(id)path;	// 0x3048cc09
- (id)CDVURLWithScheme:(id)scheme userandpass:(id)userandpass host:(id)host port:(id)port path:(id)path parameters:(id)parameters encodePercents:(BOOL)percents;	// 0x3048c441
- (id)CDVURLWithUser:(id)user;	// 0x3048c9f1
- (id)CDVfixedURLByAppendingPathComponent:(id)component;	// 0x3048d099
@end

