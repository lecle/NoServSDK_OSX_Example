//
//  NoServUser.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 25..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/** NoServUser 클래스
 
 유저 생성
 유저 로그인
 유저 정보 변경
 유저 삭제
 현재 유저 정보 가져오기
 유저 검색
 갯수 검색
 */
#import <Foundation/Foundation.h>
#import "NoServUserInfo.h"
#import "ConditionalJSONObject.h"
#import "ResultBlock.h"


@interface NoServUser : NSObject
/** 유저 생성
 
 성공시 onSuccess의 블락이
 
 실패시 onError의 블락이 호출된다.
 
 @param userInfo     생성할 유저 정보
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)signUpWithUserInfo:(NoServUserInfo*)userInfo onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;

/** 유저 로그인
 
 성공시 onSuccess의 블락이
 
 실패시 onError의 블락이 호출된다.
 
 @param userInfo     생성할 유저 정보
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)logInWithUserInfo:(NoServUserInfo*)userInfo onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;

/** 유저 로그인
 
 성공시 onSuccess의 블락이
 
 실패시 onError의 블락이 호출된다.
 
 @param username     유저네임
 @param password     패스워드
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)logInWithUsername:(NSString*)username withPassword:(NSString*)password onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;

/**
 Object ID로 유저정보를 검색
 
 @param objectId     Object ID
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)retrieveWithObjectId:(NSString*)objectId onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;

/**
 현재 접속자의 정보 검색
 
 @param sessionToken Session Token
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)validateMeWithSessionToken:(NSString*)sessionToken onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;

/**
 Object ID로 유저 업데이트
 
 @param objectId     Object ID
 @param sessionToken Session Token
 @param userInfo     업데이트할 유저 정보
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)updateWithObjectId:(NSString*)objectId withSessionToken:(NSString*)sessionToken withUserInfo:(NoServUserInfo*)userInfo onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;


/**
 유저 검색
 
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)queryListWithConditionObject:(ConditionalJSONObject*)conditionalJsonObject onError:(Error)errorBlock onSuccess:(UserInfoListFetched)successBlock;

/**
 갯수 검색
 
 @param conditionalJsonObject 검색 조건 오브젝트(And 조건으로 묶임)
 @param errorBlock            오류시 호출되는 블럭
 @param successBlock          성공시 호출되는 블럭
 */
+(void)getCountWithConditionObject:(ConditionalJSONObject*)conditionalJsonObject onError:(Error)errorBlock onSuccess:(CountFetched)successBlock;


/**
 유저 삭제
 
 @param objectId     Object ID
 @param sessionToken Session Token
 @param errorBlock   오류시 호출되는 블럭
 @param successBlock 성공시 호출되는 블럭
 */
+(void)deleteWithObjectId:(NSString*)objectId withSessionToken:(NSString*)sessionToken onError:(Error)errorBlock onSuccess:(UserInfoFetched)successBlock;
@end
