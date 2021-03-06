//
//  MFSideMenuDelegate.h
//  Pods
//
//  Created by Amna on 9/17/14.
//
//

#import <Foundation/Foundation.h>

@class MFSideMenuContainerViewController;

@protocol MFSideMenuDelegate <NSObject>

@optional

- (void)containerViewControllerTapped:(MFSideMenuContainerViewController *)containerViewController withGestureRecongizer:(UITapGestureRecognizer *)gestureRecognizer;

@end
