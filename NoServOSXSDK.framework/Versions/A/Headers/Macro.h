//
//  Macro.h
//  NoServSDK
//
//  Created by JinWoo Lee on 2014. 11. 25..
//  Copyright (c) 2014년 JinWoo Lee. All rights reserved.
//

#ifndef NoServSDK_Macro_h
#define NoServSDK_Macro_h

//NoServ
#define NOSERVADDR @"http://noserv.io:2337/1"
#define ADDR(val) [NSString stringWithFormat:@"%@%@", NOSERVADDR, val]


//URL Encoding 매크로
#define UTF8(value) (__bridge_transfer NSString *)CFURLCreateStringByAddingPercentEscapes(NULL, (__bridge CFStringRef)value, NULL, (CFStringRef)@"!*'();:@&=+$,/?%#[]", kCFStringEncodingUTF8 )
//문자열 매크로
#define TRIM(value) [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]
#define ISEMPTY(value) (value == nil || [value isEqualToString:@""])


#endif
