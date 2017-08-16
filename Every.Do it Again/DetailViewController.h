//
//  DetailViewController.h
//  Every.Do it Again
//
//  Created by Hirad on 2017-08-16.
//  Copyright © 2017 Hirad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Every_Do_it_Again+CoreDataModel.h"
#import <CoreData/CoreData.h>

@protocol setTaskDescription <NSObject>
-(void) setTaskDescription:(NSString *)taskDescription newTask:(Task*) currentTask;
@end


@interface DetailViewController : UIViewController <UITextFieldDelegate>

@property (strong, nonatomic) Task *task;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextField *detailTaskDescriptionLabel;
@property (strong, nonatomic) id<setTaskDescription> delegate;
@end


