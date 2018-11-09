Pod::Spec.new do |s|
  s.name     = 'PWLocationBeta'
  s.version  = '3.5.2.3'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWLocation SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWLocation-3.5.2.3" }
  s.requires_arc = true
  
  s.platform = :ios, '10.0' 
  
  s.ios.vendored_frameworks = 'Framework/PWLocation.framework'
  s.ios.dependency 'PWCore'
  s.ios.dependency 'MistSDK'
  s.ios.dependency 'TMCache'
  s.ios.dependency 'SSZipArchive'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
  s.ios.library = 'c++'
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreBluetooth', 'CoreMotion', 'CoreLocation', 'MapKit'
  s.library = 'sqlite3', 'z', 'xml2.2'

end
