Pod::Spec.new do |s|
  s.name     = 'DataExBeta'
  s.version  = '1.0.0.16'
  s.license  = 'MIT'
  s.summary  = 'Phunware DataExBeta SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "DataEx-1.0.0.16" }
  s.requires_arc = true
  
  s.platform = :ios, '11.0'
  s.swift_version = '5.0'

  s.ios.dependency 'Kingfisher'
  s.ios.dependency 'PWCore'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
  s.ios.vendored_frameworks = 'Framework/DataEx.framework'
end
