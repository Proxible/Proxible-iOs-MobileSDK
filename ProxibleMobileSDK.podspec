Pod::Spec.new do |s|
  s.name         = 'ProxibleMobileSDK'
  s.version      = '0.0.1'
  s.license      = {
    :type => 'Commercial',
    :text => <<-LICENSE
              All text and design is copyright © 2013-2014 Proxible B.V..

              All rights reserved.

              https://www.proxible.com
    LICENSE
  }
  s.homepage     = 'http://www.proxible.com'
  s.authors      = { 'Proxible' => 'conrad@proxible.com' }
  s.summary      = 'Mobile SDK used to develop proximity/context aware mobile apps'

# Source Info
  s.platform     =  :ios, '8.0'
    s.source       = { :git => 'https://github.com/Proxible/Proxible-iOs-MobileSDK.git', :tag => s.version.to_s }
  s.source_files = 'ProxibleMobileSDK.framework/Versions/A/Headers/*.h'
  s.ios.vendored_frameworks = 'ProxibleMobileSDK.framework'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }
  s.preserve_paths = 'ProxibleMobileSDK.framework'

  s.requires_arc = true
  
# Pod Dependencies

end