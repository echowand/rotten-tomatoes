//
//  MovieDetailController.m
//  rotten-tomatoes
//
//  Created by Guanqun Mao on 9/15/15.
//  Copyright (c) 2015 Guanqun Mao. All rights reserved.
//

#import "MovieDetailController.h"

@interface MovieDetailController ()

@end

@implementation MovieDetailController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self reload];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)reload{
    self.movieTitle.text = self.movieDetail.title;
    self.synopsis.text = self.movieDetail.synopsis;
    self.cast.text = self.movieDetail.cast;
    self.rating.text = self.movieDetail.ratings;
    [self.posterView setImageWithURL:[NSURL URLWithString:self.movieDetail.imageURLLarge]];
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
