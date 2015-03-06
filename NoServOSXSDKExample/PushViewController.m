//
//  PushViewController.m
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import "PushViewController.h"
#import <NoServOSXSDK/NoServOSXSDK.h>
@interface PushViewController ()

@end

@implementation PushViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}


- (IBAction)pushTouched:(id)sender {
    [self clearLog];
    
    
    NoServPushInfo *pushInfo = [[NoServPushInfo alloc] init];
    [pushInfo addChannel:@"Giants"];
    [pushInfo addWhereValue:YES forKey:@"scores"];
    [pushInfo addWhereValue:YES forKey:@"gameResults"];
    [pushInfo addWhereValue:YES forKey:@"injuryReports"];
    [pushInfo setAlert:@"The Giants won against the Mets 2-3."];
    
    [NoServPush sendWithPushInfo:pushInfo onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
    }];
    
    
}

- (IBAction)retrieveTouched:(id)sender {
    [self clearLog];
    
    NSString *objectId = @"54f9437dfccca1df54a6e0ed";
    
    NSString *masterKey = @"danhjjsa1k3p7gb9k2emsc0pe3ik9oty";
    
    [NoServPush retrieveWithObjectId:objectId withMasterKey:masterKey onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(JSONObject *jsonObject) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObject.description];
        
    }];
    
    
}

- (IBAction)queryTouched:(id)sender {
    [self clearLog];
    
    NSString *masterKey = @"danhjjsa1k3p7gb9k2emsc0pe3ik9oty";
    
    [NoServPush queryListWithConditionObject:nil withMasterKey:masterKey onError:^(NSError *error) {
        [self appendLog:@"Error"];
        [self appendLog:error.userInfo.description];
    } onSuccess:^(NSArray *jsonObjectList) {
        [self appendLog:@"Success"];
        [self appendLog:jsonObjectList.description];
        
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
