//
//  MovieDetailController.h
//  rotten-tomatoes
//
//  Created by Guanqun Mao on 9/15/15.
//  Copyright (c) 2015 Guanqun Mao. All rights reserved.
//

#import "ViewController.h"
#import "Movie.h"
#import <UIImageView+AFNetworking.h>

@interface MovieDetailController : ViewController
@property (weak, nonatomic) IBOutlet UILabel *movieTitle;
@property (weak, nonatomic) IBOutlet UILabel *synopsis;
@property (weak, nonatomic) IBOutlet UILabel *cast;
@property (weak, nonatomic) IBOutlet UILabel *rating;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property Movie *movieDetail;

-(void)reload;
@end
