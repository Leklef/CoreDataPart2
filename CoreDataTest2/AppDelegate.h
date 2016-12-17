//
//  AppDelegate.h
//  CoreDataTest2
//
//  Created by Ildar Zalyalov on 17.12.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

