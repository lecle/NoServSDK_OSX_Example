//
//  HTTP.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 22..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRUD.h"

/** CRUD를 HTTP 프로토콜로 구현한 클래스
 */
@interface HTTP : CRUD
/** HTTP 헤더에 Application ID 추가
 
 @param applicationId Application ID 값
 */

+(void)setApplicationId:(NSString*)applicationId;


/** HTTP 헤더에 REST API Key 추가
 
 @param restApiKey REST API Key 값
 */
+(void)setRESTAPIKey:(NSString*)restApiKey;

/**
 HTTP 헤더에 Session Token 추가
 
 @param sessionToken Session Token 값
 */
+(void)setSessionToken:(NSString*)sessionToken;

/**
 HTTP 헤더에 Master Key 추가
 
 @param masterKey Master Key 값
 */
+(void)setMasterKey:(NSString*)masterKey;

/**
 HTTP POST 프로토콜을 사용하여 파일 업로드
 
 @param url          업로드될 URL
 @param data         업로드할 파일 Data
 @param contentType  업로드할 파일의 Content Type
 @param errorBlock   일반 오류시 호출되는 블럭
 @param fetchedBlock 결과를 가져왔을 때 호출되는 블럭
 */
+(void)uploadTo:(NSString*)url withData:(NSData*)data withContentType:(NSString*)contentType onError:(Error)errorBlock onFetched:(JSONObjectFetched)fetchedBlock;
@end
