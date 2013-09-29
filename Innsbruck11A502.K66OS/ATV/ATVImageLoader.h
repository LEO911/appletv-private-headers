/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "NSObject.h"


@protocol ATVImageLoader <NSObject>
- (void)cancelLoad:(id)load;
- (id)imageKeyForObject:(id)object;
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;
@end
