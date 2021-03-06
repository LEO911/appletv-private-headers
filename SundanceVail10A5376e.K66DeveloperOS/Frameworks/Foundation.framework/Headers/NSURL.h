/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSURL.h> // Unknown library


@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x34d3d3fd
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x34d3d411
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d36881
+ (id)fileURLWithPath:(id)path;	// 0x34d36841
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x34d62bbd
- (id)init;	// 0x34de3139
- (id)initFileURLWithPath:(id)path;	// 0x34d368f5
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x34d62c01
- (id)initWithCoder:(id)coder;	// 0x34d4aa91
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x34de3151
- (id)initWithString:(id)string;	// 0x34d3ed19
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x34d3d459
- (unsigned long)_cfTypeID;	// 0x34de2d35
- (CFURLRef)_cfurl;	// 0x34d2f10d
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x34de2da5
- (void)_freeClients;	// 0x34de2ded
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x34de2d39
- (BOOL)_isAbsolute;	// 0x34de2f65
- (BOOL)_isDeallocating;	// 0x34de2c4d
- (id)_relativeURLPath;	// 0x34de2f29
- (BOOL)_tryRetain;	// 0x34de2be1
- (id)absoluteString;	// 0x34d34f01
- (id)absoluteURL;	// 0x34d34a95
- (id)baseURL;	// 0x34d627a1
- (id)copyWithZone:(NSZone *)zone;	// 0x34d40d0d
- (void)dealloc;	// 0x34de2e29
- (id)description;	// 0x34d62719
- (void)encodeWithCoder:(id)coder;	// 0x34de3319
- (void)finalize;	// 0x34de2eb9
- (id)fragment;	// 0x34d75819
- (unsigned)hash;	// 0x34d40d49
- (id)host;	// 0x34d34ad1
- (BOOL)isEqual:(id)equal;	// 0x34d34fb1
- (BOOL)isFileURL;	// 0x34d34b0d
- (BOOL)isKindOfClass:(Class)aClass;	// 0x34d3501d
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x34de2cb5
- (id)parameterString;	// 0x34de38d1
- (id)password;	// 0x34de3801
- (id)path;	// 0x34d2f0c5
- (id)port;	// 0x34de3781
- (id)query;	// 0x34d4dbe5
- (id)relativePath;	// 0x34de3895
- (id)relativeString;	// 0x34d627bd
- (oneway void)release;	// 0x34d35d61
- (id)resourceSpecifier;	// 0x34de2fa1
- (id)retain;	// 0x34d34f49
- (unsigned)retainCount;	// 0x34de2b7d
- (id)scheme;	// 0x34d34b59
- (id)standardizedURL;	// 0x34de34ed
- (id)user;	// 0x34de37c5
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x34de4365
- (id)URLByAppendingPathComponent:(id)component;	// 0x34de4545
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x34de44b1
- (id)URLByAppendingPathExtension:(id)extension;	// 0x34de46a1
- (id)URLByDeletingLastPathComponent;	// 0x34de4665
- (id)URLByDeletingPathExtension;	// 0x34de4725
- (id)URLByResolvingSymlinksInPath;	// 0x34de4825
- (id)URLByStandardizingPath;	// 0x34de4761
- (id)lastPathComponent;	// 0x34de4461
- (id)pathComponents;	// 0x34de4439
- (id)pathExtension;	// 0x34de4489
@end

@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34de48e9
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x34dedec1
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x34dedea5
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x34dedfd1
- (BOOL)_web_isJavaScriptURL;	// 0x34dee7dd
- (id)_web_scriptIfJavaScriptURL;	// 0x34dee535
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x34dee599
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x34deece5
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x34deec99
- (id)_URLByEscapingSpacesAndControlChars;	// 0x34deeb35
- (id)_hostString;	// 0x34deedd1
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x34dee805
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x34dee93d
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x34dee9f5
@end

