Pod::Spec.new do |s|
  s.name     = 'PWEngagementBeta'
  s.version  = '3.7.0.1'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWEngagement SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWEngagement-3.7.0.1" }
  s.requires_arc = true
  s.platform = :ios, '10.0' 
  
  s.ios.vendored_frameworks = 'Framework/PWEngagement.framework'
  s.ios.dependency 'PWCoreBeta'
  s.ios.dependency 'FMDB'
  s.ios.dependency 'MistSDK'
                                                                                                                                                                                                                                                                                                                      
  s.library = 'sqlite3', 'z'
  s.ios.frameworks = 'CoreLocation'

end
