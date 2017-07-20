Pod::Spec.new do |s|
  s.name     = 'PWAdvertisingBeta'
  s.version  = '3.6.2.5'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWAdvertising SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWAdvertising-3.6.2.5" }
  s.requires_arc = true

  s.resource  = 'Framework/PWAds.bundle'
  s.source_files = 'Framework/**/*.{h,m}'
  s.public_header_files = 'Framework/PWAdvertising.framework/Versions/A/Headers/*.h'
  s.ios.vendored_frameworks = 'Framework/PWAdvertising.framework'
  
  s.ios.deployment_target = '9.0'

  s.dependency 'PWCoreBeta'
  
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'MessageUI', 'EventKit', 'EventKitUI', 'CoreMedia', 'AVFoundation', 'MediaPlayer', 'AudioToolbox', 'AdSupport', 'StoreKit', 'WebKit'
  s.library        = 'sqlite3', 'z'

end
