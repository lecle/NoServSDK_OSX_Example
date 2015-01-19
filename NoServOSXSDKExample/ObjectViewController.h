//
//  ObjectViewController.h
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ObjectViewController : NSViewController
@property (strong) IBOutlet NSTextView *logView;
- (IBAction)createTouched:(id)sender;
- (IBAction)retrieveTouched:(id)sender;
- (IBAction)updateTouched:(id)sender;
- (IBAction)queryTouched:(id)sender;
- (IBAction)deleteTouched:(id)sender;
@end
