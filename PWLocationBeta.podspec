Pod::Spec.new do |s|
  s.name     = 'PWLocationBeta'
  s.version  = '3.1.7.1.2'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWLocation SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWLocation-3.1.7.1.2" }
  s.requires_arc = true
  
  s.ios.deployment_target = '9.0'
  
	s.ios.vendored_frameworks = 'Framework/PWLocation.framework'
	s.dependency 'PWCoreBeta'
  s.dependency 'MistSDK'
  s.dependency 'TMCache'

	s.ios.library = 'c++'
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreBluetooth', 'CoreMotion', 'CoreLocation', 'MapKit'
	s.library = 'sqlite3', 'z', 'xml2.2'

end
