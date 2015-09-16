//
//  Movie.h
//  rotten-tomatoes
//
//  Created by Guanqun Mao on 9/15/15.
//  Copyright (c) 2015 Guanqun Mao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *synopsis;
@property (nonatomic, strong) NSString *cast;
@property (nonatomic, strong) NSString *ratings;
@property (nonatomic, strong) NSString *imageURL;
@property (nonatomic, strong) NSString *imageURLLarge;

-(id)initWithDictionary: (NSDictionary*)dictionary;

@end
