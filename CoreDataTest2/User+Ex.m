//
//  User+Ex.m
//  CoreDataTest2
//
//  Created by Ildar Zalyalov on 17.12.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import "User+Ex.h"

@implementation User (Ex)

- (NSString *)getFullName{
    return [NSString stringWithFormat:@"%@ %@", self.firstName, self.lastName];
}

- (NSString *)getEmailCount{
    return [NSString stringWithFormat:@"%lu",self.emails.count];
}
@end
