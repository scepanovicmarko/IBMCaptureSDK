Pod::Spec.new do |s|
  s.name = 'IBMCaptureSDK'
  s.version = '1.0.0'
  s.platform = :ios
  s.summary          = "MySummary"
  s.homepage         = "http://myWebpPage.com/"
  s.license          = 'MIT'
  s.author           = { "Author" => "http://author.com/" }
  s.source   		 = { :git => "https://github.com/scepanovicmarko/IBMCaptureSDK.git", :tag => "1.0.0" }
  s.requires_arc = true
  s.ios.vendored_frameworks = 'IBMCaptureSDK.framework'
  s.weak_framework = 'UIKit'
end