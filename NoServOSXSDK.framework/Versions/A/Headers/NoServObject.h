//
//  NoServObject.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 25..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/** NoServObject 클래스
 
 객체 생성
 객체 가져오기
 객체 변경
 객체 검색
 갯수 검색 
 객체 삭제
 
 */

#import <Foundation/Foundation.h>
#import "ConditionalJSONObject.h"
#import "ResultBlock.h"

@interface NoServObject : NSObject

/**
 객체 생성
 
 @param className    클래스 이름
 @param jsonObject   생성할 오브젝트
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)createWithClassName:(NSString*)className withJSONObject:(JSONObject*)jsonObject onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;

/**
 객체 가져오기
 
 @param className    클래스 이름
 @param objectId     Object ID
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)retrieveWithClassName:(NSString*)className withObjectId:(NSString*)objectId onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;

/**
 객체 변경
 
 @param className    클래스 이름
 @param objectId     Object ID
 @param jsonObject   변경할 오브젝트
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)updateWithClassName:(NSString*)className withObjectId:(NSString*)objectId withJSONObject:(JSONObject*)jsonObject onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;

/**
 객체 검색
 
 @param className             클래스 이름
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)queryListWithClassName:(NSString*)className withConditionObject:(ConditionalJSONObject*)conditionalJsonObject onError:(Error)errorBlock onSuccess:(JSONObjectListFetched)successBlock;

/**
 갯수 검색
 
 @param className             클래스 이름
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)getCountWithClassName:(NSString*)className withConditionObject:(ConditionalJSONObject*)conditionalJsonObject  onError:(Error)errorBlock onSuccess:(CountFetched)successBlock;

/**
 객체 삭제
 
 @param className    클래스 이름
 @param objectId     Object ID
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)deleteWithClassName:(NSString*)className withObjectId:(NSString*)objectId onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;


@end
