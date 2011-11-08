//
//  SSFolder.h
//  SparkleShare
//
//  Created by Sergey Klimov on 07.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSConnection.h"

@protocol SSFolderDelegate <NSObject>
-(NSData*) getDataWithMethod:(NSString*)method path:(NSString*)path;
-(id*) getObjectWithMethod:(NSString*)method path:(NSString*)path;
@end

@interface SSFolder : NSObject <SSFolderDelegate>
{
@private
    NSString* name;
    NSString* ssid;
    NSString* type;
    
    id<SSConnectionDelegate> connection;
    int count;
    NSString* revision;
    NSArray* items;
}

-(id) initWithConnection:(SSConnection*)aConnection
                    name:(NSString*)aName 
                    ssid:(NSString*)anId
                    type:(NSString*)aType;
-(NSData*) getDataWithMethod:(NSString*)method path:(NSString*)path;
-(id*) getObjectWithMethod:(NSString*)method path:(NSString*)path;

@property (readonly) NSString* name;
@property (readonly) NSString* ssid;
@property (readonly) NSString* type;

@property (readonly) int count;
@property (readonly) NSString* revision;
@property (readonly) NSArray* items;
@property (nonatomic, strong) id<SSConnectionDelegate> connection;


@end
