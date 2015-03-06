//
//  FileViewController.m
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import "FileViewController.h"
#import <NoServOSXSDK/NoServOSXSDK.h>
@interface FileViewController ()

@end

@implementation FileViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}


- (IBAction)uploadTouched:(id)sender {
    
    [self clearLog];
    
    
    NSData *imageData = [NSData dataWithContentsOfFile:[[NSBundle bundleForClass:[self class]] pathForResource:@"game" ofType:@"jpg"]];
    [NoServFile uploadData:imageData withName:@"game.jpg" withContentType:@"image/jpg" onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
    
}

- (IBAction)deleteTouched:(id)sender {
    
    [self clearLog];
    
    NSString *masterKey = @"danhjjsa1k3p7gb9k2emsc0pe3ik9oty";
    
    [NoServFile deleteFromName:@"game.jpg" withMasterKey:masterKey onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
    
}


-(void)appendLog:(NSString*)log
{
    self.logView.string = [self.logView.string stringByAppendingFormat:@"\n%@", log];
}

-(void)clearLog
{
    self.logView.string = @"";
}

@end
