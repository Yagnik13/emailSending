//
//  ViewController.h
//  emailDemo
//
//  Created by Yagnik Suthar on 11/09/17.
//  Copyright © 2017 Yagnik Suthar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController <MFMailComposeViewControllerDelegate>

- (IBAction)contactUs:(id)sender;

@end

