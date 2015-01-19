//
//  ConditionalJSONObject.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 12. 2..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

/**
 Query 조건 클래스
 */
#import <Foundation/Foundation.h>
#import "JSONObject.h"
@interface ConditionalJSONObject : JSONObject

/**
 검색 조건에 값 추가
 
    ConditionalJSONObject *json = [[ConditionalJSONObject alloc] init];
    [json addEqualValue:@"value" forKey:@"key"];
 
 @param value 검색할 값
 @param key   검색할 키
 */
-(void)addEqualValue:(NSString*)value forKey:(NSString*)key;

/** 검색 조건에 Operation 조건 추가
 
 Operation 목록
 
 | Key     | Operation                        | Sample                            |
 |---------|:---------------------------------|:----------------------------------|
 | $lt     | Less Than                        |	{"num" : {"$lt" : 2 } }           |
 | $lte    | Less Than Or Equal To            |	{"num" : {"$lte" : 2 } }          |
 | $gt     | Greater Than                     |	{"num" : {"$gt" : 2 } }           |
 | $gte    | Greater Than Or Equal To         |	{"num" : {"$gte" : 2 } }          |
 | $ne     | Not Equal To                     |	{"num" : {"$ne" : 2 } }           |
 | $in     | Contained In                     |	{"arr" : {"$in" : ["c", "b"] } }  |
 | $nin    | Not Contained in                 |	{"arr" : {"$nin" : ["b"] } }      |
 | $exists | A value is set for the key	      | {"arr" : {"$exists" : true } }    |
 | $all    | Contains all of the given values |	{"arr" : {"$all" : ["b", "c"] } } |
 
    ConditionalJSONObject *json = [[ConditionalJSONObject alloc] init];
    [json addOperationalValue:@{@"$lt":@2} forKey:@"num"];
 
 @param value 검색할 Dictionary 값
 @param key   검색할 키
 */
-(void)addOperationalValue:(NSDictionary*)value forKey:(NSString*)key;

/**
 검색 조건에 Or 조건 추가

 | Key | Operation | Sample                                                              |
 |-----|:----------|:--------------------------------------------------------------------|
 | $or | Or        | {"$or" : [{"arr" : {"$nin" : ["b"] } }, {"num" : {"$gte" : 2 } }] } |
 
    ConditionalJSONObject *json = [[ConditionalJSONObject alloc] init];
    [json addOrValue:@[@{@"arr":@{@"$nin":@[@"b"]}}, @{@"num":@{@"gte":@2}}] forKey:@"or"];
 
 @param value 검색할 조건 Array 값
 @param key   검색할 키
 */
-(void)addOrValue:(NSArray*)value forKey:(NSString*)key;

/**
 오름차순 정렬 키 추가
 
 @param key 정렬할 키
 */
-(void)addAscendingSortKey:(NSString*)key;

/**
 내림차순 정렬 키 추가
 
 @param key 정렬할 키
 */
-(void)addDescendingSortKey:(NSString*)key;

/**
 조회 결과의 최대 갯수 값 추가
 
 @param limit Limit
 */
-(void)setLimit:(NSInteger)limit;

/**
 조회 결과 앞에서 부터 스킵할 값 추가
 
 @param skip Skip
 */
-(void)setSkip:(NSInteger)skip;

/**
 Query Parameter 생성
 
 @return Query Parameter
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSString *paramString;
@end
