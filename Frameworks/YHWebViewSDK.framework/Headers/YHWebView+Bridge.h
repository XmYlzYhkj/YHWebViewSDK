//
//  YHWebView+Bridge.h
//  YHWebViewSDK
//
//  Created by Jagtu on 2018/4/26.
//  Copyright © 2018年 yh. All rights reserved.
//

#import <YHWebViewSDK/YHWebViewSDK.h>
#import "YHJSWebViewRouter.h"

@class WKWebViewJavascriptBridge;

@interface YHWebView (Bridge)

@property(nonatomic, strong)WKWebViewJavascriptBridge* bridge;

-(void)callJSMethod:(id)data;

@end
