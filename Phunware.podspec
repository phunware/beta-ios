Pod::Spec.new do |s|
  s.name     = 'Phunware'
  s.version  = '1.2.2.7'
  s.license  = 'MIT'
  s.summary  = 'Phunware SDKs (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "v1.2.2.7" }
  s.requires_arc = true
  
  s.ios.deployment_target = '9.0'  
  s.default_subspec = 'Beta'
  
  s.subspec 'Beta' do |ss|
  
  	ss.subspec 'Location' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWLocation.framework'
	  	sss.dependency 'PWCore'
		  sss.dependency 'MistSDK'
      sss.dependency 'TMCache'

  		sss.ios.library = 'c++'
		  sss.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreBluetooth', 'CoreMotion', 'CoreLocation', 'MapKit'
  		sss.library = 'sqlite3', 'z', 'xml2.2'
	  end

		ss.subspec 'MapKit' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWMapKit.framework'
		  sss.ios.dependency 'Phunware/Beta/Location'
      sss.ios.dependency 'TMCache'
	  	sss.ios.frameworks = 'Security', 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreLocation', 'MapKit'
  	end
	  
  end

end