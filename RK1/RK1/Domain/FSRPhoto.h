//
// Created by Дмитрий on 15.10.15.
// Copyright (c) 2015 DMA. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FSRPhoto : NSObject

/// Имя пользователя. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSString *userName;

/// Дата публикации. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSDate *publicationDate;

/// Ссылка на картинку. Не может быть нулевая.
@property(nonatomic, nonnull, readonly) NSURL *imageLink;

/// @brief Первичный инициализатор. Инициализатор "init" не поддерживатеся.
/// @param парметры не могут быть нулевыми.
- (nonnull instancetype)initWithUserName:(nonnull NSString *)userName
                         publicationDate:(nonnull NSDate *)publicationDate
                                  andUrl:(nonnull NSURL *)imageUrl;

@end