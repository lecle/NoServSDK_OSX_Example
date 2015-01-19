//
//  ResultBlock.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 12. 4..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

#import "JSONObject.h"
#import "NoServUserInfo.h"

#ifndef NoServSDK_ResultBlock_h
#define NoServSDK_ResultBlock_h

/**
 JSON Object 블럭
 
 @param jsonObject JSON Object
 */
typedef void (^JSONObjectFetched) (JSONObject *jsonObject);

/**
 JSON Object List 블럭
 
 @param jsonObjectList JSON Object List
 */
typedef void (^JSONObjectListFetched) (NSArray *jsonObjectList);

/**
 결과 갯수 블럭
 
 @param count Count
 */
typedef void (^CountFetched) (NSInteger count);

/**
 오류 블럭
 
 @param error Error
 */
typedef void (^Error) (NSError *error);

/**
 UserInfo 블럭
 
 @param userInfo User Info
 */
typedef void (^UserInfoFetched) (NoServUserInfo *userInfo);

/**
 UserInfo List 블럭
 
 @param userInfoList User Info List
 */
typedef void (^UserInfoListFetched) (NSArray *userInfoList);


#endif
