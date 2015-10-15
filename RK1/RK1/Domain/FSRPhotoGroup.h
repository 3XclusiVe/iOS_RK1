//
// Created by Дмитрий on 15.10.15.
// Copyright (c) 2015 DMA. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FSRCollage;


@interface FSRPhotoGroup : NSObject

/// Имя пользователя. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSString *userName;

/// Дата публикации. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSDate *publicationDate;

- (void)addPhoto:(FSRCollage *)photo;

- (void)deletePhoto:(FSRCollage *)photo;

- (instancetype)initWithPhoto:(FSRCollage *)photo;

@end