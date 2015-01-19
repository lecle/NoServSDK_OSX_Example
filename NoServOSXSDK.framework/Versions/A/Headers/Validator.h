//
//  Validator.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 30..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^Error) (NSError *error);

/**
 Validation 함수 유틸리티 클래스
 */
@interface Validator : NSObject

/**
 클래스 이름 적합 검사
 
 @param className  클레스 이름
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidClassName:(NSString*)className onError:(Error)errorBlock;


/**
 JSON 적합 검사
 
 @param jsonString JSON
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidJSONString:(NSString*)jsonString onError:(Error)errorBlock;

/**
 Object ID 적합 검사
 
 @param objectId   Object ID
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidObjectId:(NSString*)objectId onError:(Error)errorBlock;


/**
 Session Token 적합 검사
 
 @param sessionToken Session Token
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidSessionToken:(NSString*)sessionToken onError:(Error)errorBlock;

/**
 Username, Password 적합 검사
 
 @param username   사용자 이름
 @param password   패스워드
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidUsername:(NSString*)username withPassword:(NSString*)password onError:(Error)errorBlock;


/**
 Device Token 적합 검사
 
 @param deviceToken Device Token
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidDeviceToken:(NSString*)deviceToken onError:(Error)errorBlock;


/**
 Master Key 적합 검사
 
 @param masterKey  Master Key
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidMasterKey:(NSString*)masterKey onError:(Error)errorBlock;

/**
 Appname 적합 검사
 
 @param appname    App name
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidAppname:(NSString*)appname onError:(Error)errorBlock;

/**
 NSData 적합 검사
 
 @param data       NSData
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidData:(NSData*)data onError:(Error)errorBlock;

/**
 Filename 적합 검사
 
 @param filename   File name
 @param errorBlock 오류시 호출될 블럭
 
 @return 적합 결과
 */
-(BOOL)isValidFilename:(NSString*)filename onError:(Error)errorBlock;
@end
