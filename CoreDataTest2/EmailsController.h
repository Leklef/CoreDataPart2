//
//  EmailsController.h
//  CoreDataTest2
//
//  Created by Ildar Zalyalov on 17.12.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTest2+CoreDataModel.h"
#import "User+Ex.h"

@interface EmailsController : UITableViewController
@property (nonatomic, strong) User *userModel;

@end
