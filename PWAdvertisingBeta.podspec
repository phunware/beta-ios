Pod::Spec.new do |s|
  s.name     = 'PWAdvertisingBeta'
<<<<<<< HEAD
  s.version  = '.0'
=======
  s.version  = '.0'
>>>>>>> 2ccfc3ea026355c81d392e0b6add9afeed69e280
  s.license  = 'MIT'
  s.summary  = 'Phunware PWAdvertising SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
<<<<<<< HEAD
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWAdvertising-.0" }
=======
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWAdvertising-.0" }
>>>>>>> 2ccfc3ea026355c81d392e0b6add9afeed69e280
  s.requires_arc = true

  s.resource  = 'Bundle/PWAds.bundle'
  s.ios.vendored_frameworks = 'Framework/PWAdvertising.framework'

  s.ios.deployment_target = '9.0'

<<<<<<< HEAD
  s.dependency 'PWCoreBeta'
  
=======
  s.dependency 'PWCoreBeta'

>>>>>>> 2ccfc3ea026355c81d392e0b6add9afeed69e280
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'MessageUI', 'EventKit', 'EventKitUI', 'CoreMedia', 'AVFoundation', 'MediaPlayer', 'AudioToolbox', 'AdSupport', 'StoreKit', 'WebKit'
  s.library        = 'sqlite3', 'z'

end
