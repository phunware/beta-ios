Pod::Spec.new do |s|
  s.name     = 'PWCoreBeta'
  s.version  = '3.3.1.9'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWCoreBeta SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWCore-3.3.1.9" }
  s.requires_arc = true
  
  s.ios.deployment_target = '9.0'  
  
  s.libraries    = 'z', 'xml2.2'
  s.ios.dependency 'SSZipArchive'
  s.ios.dependency 'TMCache'
  s.ios.dependency 'AFNetworking'

  s.ios.vendored_frameworks = 'Framework/PWCore.framework'
  s.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony'
end
