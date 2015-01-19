//
//  NoServFile.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 12. 3..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/**
 NoServFile 클래스
 
 파일 업로드
 파일 삭제
 */
#import <Foundation/Foundation.h>
#import "ResultBlock.h"


@interface NoServFile : NSObject
/**
 파일 업로드

 파일 사이즈 10MBytes 제한
 정해지지 않은 ContentType일 경우 "octet-stream" 사용됨
 
 @param data                업로드할 파일의 NSData 값
 @param filename            업로드할 파일의 이름
 @param contentType         업로드할 파일의 Content Type 값
 @param errorBlock          오류시 호출되는 블럭
 @param successBlock        성공시 호출되는 블럭
 */
+(void)uploadData:(NSData*)data withName:(NSString*)filename withContentType:(NSString*)contentType onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;;


/**
 파일 삭제
 
 @param filename            오리지널 파일의 이름
 @param masterKey           Master Key
 @param errorBlock          오류시 호출되는 블럭
 @param successBlock        성공시 호출되는 블럭
 */
+(void)deleteFromName:(NSString*)filename withMasterKey:(NSString*)masterKey onError:(Error)errorBlock onSuccess:(JSONObjectFetched)successBlock;;
@end
