//
//  NoServUserInfo.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 25..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/** 유저 정보 컨테이너 클래스
 
 공통 JSON Dictionary(JSONObject)를 사용한다.
 
 유저를 생성하기 위해서 username과 password는 필수
 
    NSString *username = @"user1";
    NSString *password = @"user1";
 
    NoServUserInfo *userInfo = [[NoServUserInfo alloc] initWithUsername:username WithPassword:password];
    [userInfo putValue:@"01011111111" forKey:@"phone"];
    NSString *phone = [userInfo valueForKey:@"phone"];
 
 String 형식의 어떤 데이터도 저장 가능하다.
 
 @see JSONObject
 */

#import <Foundation/Foundation.h>
#import "JSONObject.h"

@interface NoServUserInfo : JSONObject
/**
 유저네임
 */
@property(strong, nonatomic) NSString *username;
/**
 패스워드
 */
@property(strong, nonatomic) NSString *password;



/** 유저네임와 패스워드를 포함하여 유저 정보 생성
 
 @param username 유저네임
 @param password 패스워드
 @return 인스턴스
 */
-(instancetype)initWithUsername:(NSString*)username withPassword:(NSString*)password;


@end
