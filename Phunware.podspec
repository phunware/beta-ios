Pod::Spec.new do |s|
  s.name     = 'Phunware'
  s.version  = '1.2.0.5'
  s.license  = 'MIT'
  s.summary  = 'Phunware SDKs (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "v1.2.0.5" }
  s.requires_arc = true
  
  s.ios.deployment_target = '9.0'  
  s.default_subspec = 'Beta'
  
  s.subspec 'Beta' do |ss|

		ss.subspec 'MapKit' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWMapKit.framework'
		  sss.ios.dependency 'PWLocation'
      sss.ios.dependency 'TMCache'
	  	sss.ios.frameworks = 'Security', 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreLocation', 'MapKit'
  	end
	  
  end

end