//
//  DetailViewController.h
//  testApp
//
//  Created by Steve Lee on 6/13/15.
//  Copyright (c) 2015 Steve Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

