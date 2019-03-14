//
//  PersonEntity+CoreDataProperties.m
//  CoreDataDemo
//
//  Created by lorne on 2019/3/14.
//  Copyright © 2019 ice. All rights reserved.
//
//

#import "PersonEntity+CoreDataProperties.h"

@implementation PersonEntity (CoreDataProperties)

+ (NSFetchRequest<PersonEntity *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"PersonEntity"];
}

@dynamic age;
@dynamic id;
@dynamic height;
@dynamic weight;
@dynamic location;
@dynamic name;

@end
