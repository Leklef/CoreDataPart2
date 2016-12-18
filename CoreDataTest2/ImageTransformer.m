//
//  ImageTransformer.m
//  CoreDataTest2
//
//  Created by Ildar Zalyalov on 17.12.16.
//  Copyright © 2016 com.itis.iosLab. All rights reserved.
//

#import "ImageTransformer.h"

@implementation ImageTransformer

+ (Class)transformedValueClass{
    return [UIImage class];
}
// flag indicating whether transformation is read-only or not
+ (BOOL)allowsReverseTransformation{
    return YES;
}
// by default returns value
- (nullable id)transformedValue:(nullable id)value{
    if (value == nil){return nil;}
    
    return UIImageJPEGRepresentation(value, 0.8);
}

- (nullable id)reverseTransformedValue:(nullable id)value{
    return [UIImage imageWithData:value];
}
@end
