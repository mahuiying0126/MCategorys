#
#  Be sure to run `pod spec lint MCategorys.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

 
  s.name         = "MCategorys"
  s.version      = "0.0.3"
  s.summary      = "Categorys of iOS"
  s.homepage     = "https://github.com/mahuiying0126/MCategorys"
  # s.license    = "MIT"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "magic" => "408874626@qq.com" }

  # s.platform   = :ios
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/mahuiying0126/MCategorys.git", :tag => "#{s.version}" }
  s.source_files = "MCategorys", "MCategorys/**/*.{h,m}"
  # s.framework  = "SomeFramework"
   s.frameworks = "Foundation", "UIKit"
   s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
