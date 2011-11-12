//
//  SparkleShareMasterViewController.h
//  SparkleShare
//
//  Created by Sergey Klimov on 07.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SparkleShareDetailViewController;
@class SSConnection;

@interface SparkleShareMasterViewController : UITableViewController

{
    SSConnection * connection;
}

@property (strong, nonatomic) SparkleShareDetailViewController *detailViewController;
- (id)initWithConnection:(SSConnection*) aConnection;

@end
