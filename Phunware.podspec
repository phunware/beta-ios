Pod::Spec.new do |s|
  s.name     = 'Phunware'
  s.version  = '1.2.2.2'
  s.license  = 'MIT'
  s.summary  = 'Phunware SDKs (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "v1.2.2.2" }
  s.requires_arc = true

  s.ios.deployment_target = '9.0'
  s.default_subspec = 'Beta'

  s.subspec 'Beta' do |ss|
    ss.subspec 'Core' do |sss|
  		sss.ios.vendored_frameworks = 'Framework/PWCore.framework'
			sss.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony'
			sss.libraries = 'z', 'xml2.2'
			sss.ios.dependency 'SSZipArchive'
      sss.ios.dependency 'TMCache'
      sss.ios.dependency 'AFNetworking'
	  end

  	ss.subspec 'Location' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWLocation.framework'
	  	sss.dependency 'Phunware/Beta/Core'
		  sss.dependency 'MistSDK'
      sss.dependency 'IndoorAtlas'
      sss.dependency 'TMCache'

  		sss.ios.library = 'c++'
		  sss.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreBluetooth', 'CoreMotion', 'CoreLocation', 'MapKit'
  		sss.library = 'sqlite3', 'z', 'xml2.2'
	  end
  end

end
