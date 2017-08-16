//
//  MasterViewController.h
//  Every.Do it Again
//
//  Created by Hirad on 2017-08-16.
//  Copyright © 2017 Hirad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Every_Do_it_Again+CoreDataModel.h"

//@class DetailViewController;
#import "DetailViewController.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate,setTaskDescription>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<Task *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

