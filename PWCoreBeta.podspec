Pod::Spec.new do |s|
  s.name     = 'PWCoreBeta'
  s.version  = '3.7.0.100'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWCoreBeta SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWCore-3.7.0.100" }
  s.requires_arc = true
  
  s.platform = :ios, '10.0' 
  
  s.libraries    = 'z', 'xml2.2'
  s.ios.dependency 'SSZipArchive'
  s.ios.dependency 'AFNetworking'
  s.ios.dependency 'TMCache'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
  s.ios.vendored_frameworks = 'Framework/PWCore.framework'
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony'
end
