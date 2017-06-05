Pod::Spec.new do |s|
  s.name     = 'Phunware'
  s.version  = '1.2.0.4'
  s.license  = 'MIT'
  s.summary  = 'Phunware SDKs (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "v1.2.0.4" }
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

		ss.subspec 'MapKit' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWMapKit.framework'
		  sss.ios.dependency 'Phunware/Beta/Location'
      sss.ios.dependency 'TMCache'
	  	sss.ios.frameworks = 'Security', 'CoreGraphics', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'CoreLocation', 'MapKit'
  	end

    ss.subspec 'Engagement' do |sss|
      sss.ios.vendored_frameworks = 'Framework/PWEngagement.framework'
      sss.dependency 'Phunware/Beta/Core'
      sss.dependency 'FMDB'

      sss.ios.frameworks = 'CoreLocation'
      sss.library = 'sqlite3', 'z'
    end
	  
	  ss.subspec 'Ads' do |sss|
    	sss.ios.vendored_frameworks = 'Framework/PWAdvertising.framework'
	  	sss.dependency 'Phunware/Beta/Core'

		  sss.ios.frameworks = 'Security', 'QuartzCore', 'SystemConfiguration', 'MobileCoreServices', 'CoreTelephony', 'MessageUI', 'EventKit', 'EventKitUI', 'CoreMedia', 'AVFoundation', 'MediaPlayer', 'AudioToolbox', 'AdSupport', 'StoreKit', 'WebKit'
  		sss.library = 'sqlite3', 'z'
	  end
	  
  end

end