//
//  IQSongListViewController.h
//  IQAudioPickerController
//
//  Created by Iftekhar on 12/08/14.
//  Copyright (c) 2014 Iftekhar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MPMediaItemCollection;

@interface IQSongListViewController : UITableViewController

@property(nonatomic, strong) NSString *property;

@property(nonatomic, strong) NSArray *collections;

@end