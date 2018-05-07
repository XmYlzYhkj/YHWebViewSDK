//
//  YHJSWebViewRouter.h
//  YHHospitalAssitan
//
//  Created by zxl on 2017/9/15.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^YHCallJSMethodBlock)(id data);

#if !defined(WVJBResponseCallback)
typedef void (^WVJBResponseCallback)(id responseData);
#endif

@interface YHJSWebViewRouter : NSObject

@property(nonatomic,strong)id data;

@property(nonatomic,copy)YHCallJSMethodBlock callJSMethodBlock;

@property(nonatomic,copy)WVJBResponseCallback callbackBlock;

-(void)setCallJSMethodBlock:(YHCallJSMethodBlock)callJSMethodBlock;
-(void)setCallbackBlock:(WVJBResponseCallback)callbackBlock;

-(id)initWithData:(id)data;

@end
