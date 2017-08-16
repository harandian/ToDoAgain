//
//  DetailViewController.m
//  Every.Do it Again
//
//  Created by Hirad on 2017-08-16.
//  Copyright © 2017 Hirad. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.task) {
        self.detailDescriptionLabel.text = self.task.taskTitle;
        self.detailTaskDescriptionLabel.text = self.task.taskDescription;
        
    }
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Managing the detail item

- (void)setTaskItem:(Task *)newTaskItem {
    if (_task != newTaskItem) {
        _task = newTaskItem;
        
        // Update the view.
        [self configureView];
        
    }
}

-(BOOL)textFieldShouldReturn:(UITextField *)textField {
    
    [textField resignFirstResponder];
    [self.delegate setTaskDescription:textField.text newTask:self.task];
    

    return YES;
    
}




@end
