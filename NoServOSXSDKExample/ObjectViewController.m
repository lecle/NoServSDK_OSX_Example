//
//  ObjectViewController.m
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import "ObjectViewController.h"
#import <NoServOSXSDK/NoServOSXSDK.h>

@interface ObjectViewController ()

@end

@implementation ObjectViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}


- (IBAction)createTouched:(id)sender {
    
    [self clearLog];
    
    NSString *className = @"test_class";
    
    JSONObject *jsonObject = [[JSONObject alloc] init];
    [jsonObject putValue:@"value" forKey:@"key"];
    
    [NoServObject createWithClassName:className withJSONObject:jsonObject onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
    
    
}

- (IBAction)retrieveTouched:(id)sender {
    
    [self clearLog];
    
    NSString *className = @"test_class";
    
    JSONObject *jsonObject = [[JSONObject alloc] init];
    [jsonObject putValue:@"value" forKey:@"key"];
    
    [NoServObject retrieveWithClassName:className withObjectId:@"54accd5a362ffe104d633231" onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
}

- (IBAction)updateTouched:(id)sender {
    
    [self clearLog];
    
    NSString *className = @"test_class";
    
    JSONObject *updateJsonObject = [[JSONObject alloc] init];
    [updateJsonObject putValue:@"value2" forKey:@"key2"];
    
    [NoServObject updateWithClassName:className withObjectId:@"54aa5257362ffe104d633225" withJSONObject:updateJsonObject onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
    
}

- (IBAction)queryTouched:(id)sender {
    
    [self clearLog];
    
    NSString *className = @"test_class";
    
    
    [NoServObject queryListWithClassName:className withConditionObject:nil onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(NSArray *jsonObjectList) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObjectList.description];
        
    }];
    
    
}

- (IBAction)deleteTouched:(id)sender {
    
    [self clearLog];
    
    NSString *className = @"test_class";
    
    [NoServObject deleteWithClassName:className withObjectId:@"54aa5257362ffe104d6332251" onError:^(NSError *error) {
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
