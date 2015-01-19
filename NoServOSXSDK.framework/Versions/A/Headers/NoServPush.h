//
//  NoServPush.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 12. 1..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/**
 NoServPush 클래스
 
 Push 보내기
 Push 정보 가져오기
 Push 검색
 갯수 검색
 */


#import <Foundation/Foundation.h>
#import "NoServPushInfo.h"
#import "ConditionalJSONObject.h"
#import "ResultBlock.h"

@interface NoServPush : NSObject

/**
 Push 보내기
 
 @param pushInfo Push Info
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)sendWithPushInfo:(NoServPushInfo*)pushInfo onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;

/**
 Push 정보 가져오기
 
 @param objectId     Object ID
 @param masterKey    Master Key
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)retrieveWithObjectId:(NSString*)objectId withMasterKey:(NSString*)masterKey onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;

/**
 Push 검색
 
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param masterKey             Master Key
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)queryListWithConditionObject:(ConditionalJSONObject*)conditionalJsonObject withMasterKey:(NSString*)masterKey onError:(Error)errorBlock onSuccess:(JSONObjectListFetched)successBlock;

/**
 갯수 검색
 
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param masterKey             Master Key
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)getCountWithConditionObject:(ConditionalJSONObject*)conditionalJsonObject withMasterKey:(NSString*)masterKey onError:(Error)errorBlock onSuccess:(CountFetched)successBlock;
@end
