//
//  MoviesTableViewController.h
//  rotten-tomatoes
//
//  Created by Guanqun Mao on 9/15/15.
//  Copyright (c) 2015 Guanqun Mao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIImageView+AFNetworking.h>
#import "MovieCell.h"
#import "MovieDetailController.h"
#import "Movie.h"

@interface MoviesTableViewController : UITableViewController
@property NSArray *movies;
@end
