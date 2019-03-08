Pod::Spec.new do |s|
  s.name     = 'PWLocationBeta'
  s.version  = '4.0.0.8'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWLocation SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWLocation-4.0.0.8" }
  s.requires_arc = true
  
  s.platform = :ios, '10.0'
  s.swift_version = '4.2'
  
  s.ios.vendored_frameworks = 'Framework/PWLocation.framework'
  s.ios.dependency 'PWCoreBeta'
  s.ios.dependency 'MistSDK'
  s.ios.dependency 'TMCache'
  s.ios.dependency 'SSZipArchive'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
  s.ios.library = 'c++'
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreBluetooth', 'CoreMotion', 'CoreLocation', 'MapKit'
  s.library = 'sqlite3', 'z', 'xml2.2'

end
