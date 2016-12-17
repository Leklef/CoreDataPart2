//
//  DetailViewController.h
//  CoreDataTest2
//
//  Created by Ildar Zalyalov on 17.12.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTest2+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

