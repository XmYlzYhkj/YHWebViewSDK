
Pod::Spec.new do |s|

  s.name         = "YHWebViewSDK"
  s.version      = "1.0.0"
  s.summary      = "公司基础SDK之一"

  s.description  = "基础SDK之一通用浏览器SDK，提供WebView。"

  s.homepage     = "https://github.com/XmYlzYhkj/YHWebViewSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHWebViewSDK.git", :tag => "1.0.0" }

  #s.source_files  = "Classes", "Classes/*"

  s.dependency     'MJRefresh', '3.1.12'

  s.dependency     'WebViewJavascriptBridge', '6.0.2'

  s.requires_arc = true

  s.vendored_frameworks = ["Classes/YHWebViewSDK.framework"]
  
end
