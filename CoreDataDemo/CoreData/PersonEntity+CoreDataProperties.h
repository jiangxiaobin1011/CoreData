//
//  PersonEntity+CoreDataProperties.h
//  CoreDataDemo
//
//  Created by lorne on 2019/3/14.
//  Copyright © 2019 ice. All rights reserved.
//
//

#import "PersonEntity+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface PersonEntity (CoreDataProperties)

+ (NSFetchRequest<PersonEntity *> *)fetchRequest;

@property (nonatomic) int16_t age;
@property (nonatomic) int16_t id;
@property (nonatomic) double height;
@property (nonatomic) double weight;
@property (nullable, nonatomic, copy) NSString *location;
@property (nullable, nonatomic, copy) NSString *name;

@end

NS_ASSUME_NONNULL_END
