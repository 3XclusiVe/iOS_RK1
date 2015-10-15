//
// Created by Дмитрий on 15.10.15.
// Copyright (c) 2015 DMA. All rights reserved.
//

#import "FSRPhoto.h"
#import "FSRCollage.h"

@implementation FSRCollage {
    NSMutableArray *_photos;
    int photoCount;
}

- (void)addPhoto:(FSRPhoto *)photo {

    ///Chech(photo == nil);
    ///Check(photoCount < 3);
    ///Check(Dayof(_publicationDate) == DayOf(photo.date));
    ///Check(_userName == photo.userName);
    photoCount++;

    [_photos addObject:photo];
}

- (void)deletePhoto:(FSRPhoto *)photo {

    ///check(photo == nil)
    /// check(photoCount > 1)
    photoCount--;

    for (id item in _photos) {
        if ([item isEqual:photo]) {
            [_photos removeObject:item];
            break;
        }
    }
}

- (instancetype)initWithPhoto:(FSRPhoto *)photo {

    /// Check(photo == nil);

    if (self = [super init]) {

        _publicationDate = photo.publicationDate;
        _userName = [photo.userName copy];

        _photos = [[NSMutableArray alloc] init];
        [self addPhoto:photo];

    }
    return self;
}


@end