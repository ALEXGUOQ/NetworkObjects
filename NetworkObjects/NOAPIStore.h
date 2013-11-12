//
//  NOAPIStore.h
//  NetworkObjects
//
//  Created by Alsey Coleman Miller on 10/21/13.
//  Copyright (c) 2013 CDA. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <NetworkObjects/NOAPIStoreConstants.h>
@class NOAPI;

@interface NOAPIStore : NSIncrementalStore
{
    NSMutableDictionary *_cache;
}

@property NOAPI *api;

+(NSString *)type;

#pragma mark

-(id)executeSaveRequest:(NSSaveChangesRequest *)request
            withContext:(NSManagedObjectContext *)context
                  error:(NSError *__autoreleasing *)error;

-(id)executeFetchRequest:(NSFetchRequest *)request
             withContext:(NSManagedObjectContext *)context
                   error:(NSError *__autoreleasing *)error;


@end