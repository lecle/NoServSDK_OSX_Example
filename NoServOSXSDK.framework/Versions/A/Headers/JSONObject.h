//
//  JSONObject.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 25..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/** JSON Dictionary 클래스
 
 JSON String을 Dictionary로 변환하거나 Dictionary를 JSON String으로 변환 할 수 있다.
 */

#import <Foundation/Foundation.h>


@interface JSONObject : NSObject
@property(readonly, strong) NSMutableDictionary *jsonDict; //값 저장하는 Dictionary

/**
 JSON Dictionry값을 넣어서 초기화
 
 @param dict JSON Dictionary
 
 @return <#return value description#>
 */
- (instancetype)initWithDictionary:(NSDictionary*)dict;

/** JSON String을 Dictionary로 변환하여 저장
 
 @param string JSON String
 
 */
-(void)setJSON:(NSString*)string;

/** 저장되어 있는 Dictionary 내용을 JSON String 으로 변환
 
 @return JSON String
 
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSString *JSONString;

/**
 Dictionary 저장
 
 @param dict Dictionary
 */
-(void)setDictionary:(NSDictionary*)dict;

/** 저장하고 싶은 값을 키 기반으로 넣음
 
 @param value 값
 @param key 키
 */
-(void)putValue:(NSString*)value forKey:(NSString*)key;

/** 값을 키 기반으로 가져옴
 
 @param key 키
 @return 값
 */
-(NSString*)valueForKey:(NSString*)key;

/** Array를 키 기반으로 가져옴
 
 @param key 키
 @return Array 값
 */
-(NSArray*)arrayForKey:(NSString*)key;
/**
 해당 키가 있는지 조회
 
 @param key 키
 
 @return 키 존재 유무
 */
-(BOOL)hasKey:(NSString*)key;
@end
