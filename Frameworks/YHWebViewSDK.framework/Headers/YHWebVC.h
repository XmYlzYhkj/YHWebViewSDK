//
//  YHWebViewController.h
//  YHWebViewSDK
//
//  Created by jagtu on 2018/0/11/20.
//  Copyright © 2018年 YH. All rights reserved.
//

#import "YHWebView.h"
#import <YHBaseSDK/YHBaseSDK.h>

@interface YHWebVC : YHBaseVC

@property (nonatomic, strong)YHWebView *webView;

-(id)initWithUrl:(NSString *)url withTitle:(NSString *)title;

-(id)initWithHtml:(NSString *)html withTitle:(NSString *)title;

@end

