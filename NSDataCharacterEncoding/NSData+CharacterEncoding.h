//
// Created by WDY on 2016/11/24.
// Copyright (c) 2016 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (CharacterEncoding)

- (NSData *)UTF8Data;

- (NSString *)utf8String;

- (NSData *)GBKData;

- (NSString *)gbkString;

@end
