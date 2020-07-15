Pod::Spec.new do |s|
  s.name     = 'PWEngagementBeta'
  s.version  = '4.0.0.44'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWEngagement SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWEngagement-4.0.0.44" }
  s.requires_arc = true

  s.platform = :ios, '10.0' 
  s.swift_version = '4.2'
  
  s.ios.vendored_frameworks = 'Framework/PWEngagement.framework'
  s.ios.dependency 'FMDB'
  s.ios.dependency 'MistSDK'
                                            	
  s.default_subspec = 'all-frameworks'

  s.subspec 'all-frameworks' do |sub|
    sub.dependency 'PWCoreBeta'
  end

  s.subspec 'NoAds' do |sub|
    sub.dependency 'PWCoreNoAds'
  end


                                                                                                                                                                                                                                                                                                                                                                                    
  s.library = 'sqlite3', 'z'
  s.ios.frameworks = 'CoreLocation'

end
