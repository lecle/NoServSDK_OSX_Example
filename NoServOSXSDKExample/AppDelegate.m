//
//  AppDelegate.m
//  NoServOSXSDKExample
//
//  Created by Jin-Woo Lee on 2015. 1. 19..
//  Copyright (c) 2015년 jjangg96. All rights reserved.
//

#import "AppDelegate.h"
#import <NoServOSXSDK/NoServOSXSDK.h>

@interface AppDelegate ()

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    
    [NoServ initializeWithApplicationId:@"xDTaEsKtRTxNAG2unoN0Ivi9TEMEi1Av" withRESTAPIKey:@"S5ZJlFnC5lHIILr4r2LhyMfazVZiNJbW"];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

@end
