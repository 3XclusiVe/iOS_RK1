//
// Created by Дмитрий on 15.10.15.
// Copyright (c) 2015 DMA. All rights reserved.
//

#import "FSRPhoto.h"


@implementation FSRPhoto {

}
- (instancetype)initWithUserName:(nonnull NSString *)userName
                 publicationDate:(nonnull NSDate *)publicationDate
                          andUrl:(nonnull NSURL *)imageUrl {

    if ((userName == nil) || (publicationDate == nil) || (imageUrl == nil)) {
        @throw [NSException
                exceptionWithName:NSInternalInconsistencyException
                           reason:@"precondition failed"
                         userInfo:nil];
    }

    if (self = [super init]) {
        _userName = [userName copy];
        _publicationDate = publicationDate;
        _imageLink = imageUrl;
    }
    return self;
}

- (instancetype)init {
    @throw [NSException
            exceptionWithName:NSInternalInconsistencyException
                       reason:@"deadly init"
                     userInfo:nil];
    return nil;
}

@end