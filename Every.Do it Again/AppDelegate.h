//
//  AppDelegate.h
//  Every.Do it Again
//
//  Created by Hirad on 2017-08-16.
//  Copyright © 2017 Hirad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

