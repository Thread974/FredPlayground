//
//  AppDelegate.h
//  Webcam Server
//
//  Created by fredo on 31/05/2016.
//  Copyright © 2016 dalleau.re. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    UIWindow *window;
    ViewController *viewController;
}

@property (strong, nonatomic) UIWindow *window;


@end

