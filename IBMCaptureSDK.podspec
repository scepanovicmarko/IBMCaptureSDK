Pod::Spec.new do |s|
  s.name = 'IBMCaptureSDK'
  s.version = '1.0.0'
  s.platform = :ios
  s.summary          = "MySummary"
  s.homepage         = "http://myWebpPage.com/"
  s.license          = 'MIT'
  s.author           = { "Author" => "http://author.com/" }
  s.source   		 = { :git => "/Users/markoscepanovic/Documents/ANZ/S1DK/Framework/IBMCaptureSDK.framework", :tag => "1.0.0" }
  s.source_files 	 = 'IBMCaptureSDK/Headers/*.{h,m}'
end