Pod::Spec.new do |s|
  s.name     = 'PWEngagementBeta'
  s.version  = '3.2.0.7'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWEngagement SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWEngagement-3.2.0.7" }
  s.requires_arc = true
  s.ios.deployment_target = '9.0'
  
  s.ios.vendored_frameworks = 'Framework/PWEngagement.framework'
  s.dependency 'PWCoreBeta'
  s.dependency 'FMDB'
  s.dependency 'MistSDK'

  s.library = 'sqlite3', 'z'
  s.ios.frameworks = 'CoreLocation'

end
