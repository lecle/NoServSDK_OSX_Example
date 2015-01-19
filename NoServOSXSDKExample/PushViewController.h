//
//  PushViewController.h
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PushViewController : NSViewController
@property (strong) IBOutlet NSTextView *logView;
- (IBAction)pushTouched:(id)sender;
- (IBAction)retrieveTouched:(id)sender;
- (IBAction)queryTouched:(id)sender;
@end
