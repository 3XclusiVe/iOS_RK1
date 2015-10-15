//
// Created by Дмитрий on 15.10.15.
// Copyright (c) 2015 DMA. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FSRPhoto;

@interface FSRCollage : NSObject

/// Имя пользователя. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSString *userName;

/// Дата публикации. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSDate *publicationDate;

- (void)addPhoto:(FSRPhoto *)photo;

- (void)deletePhoto:(FSRPhoto *)photo;

- (instancetype)initWithPhoto:(FSRPhoto *)photo;

@end