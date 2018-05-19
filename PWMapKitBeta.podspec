Pod::Spec.new do |s|
  s.name     = 'PWMapKitBeta'
  s.version  = '3.4.0.8'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWMapKit SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWMapKit-3.4.0.8" }
  s.requires_arc = true
  
  s.ios.deployment_target = '9.0'  
	s.ios.vendored_frameworks = 'Framework/PWMapKit.framework'
  s.ios.dependency 'PWLocationBeta'
  s.ios.dependency 'TMCache'
                                                                                                                          	s.ios.frameworks = 'Security', 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreLocation', 'MapKit'

end
