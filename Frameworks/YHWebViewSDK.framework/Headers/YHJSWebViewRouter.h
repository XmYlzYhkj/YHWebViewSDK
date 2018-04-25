//
//  YHJSWebViewRouter.h
//  YHHospitalAssitan
//
//  Created by zxl on 2017/9/15.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^YHJsWebViewBlock)(id data);

@interface YHJSWebViewRouter : NSObject

@property(nonatomic,strong)id data;

@property(nonatomic,copy)YHJsWebViewBlock routeBlock;

-(void)setRouteBlock:(YHJsWebViewBlock)routeBlock;

-(id)initWithData:(id)data;

@end
