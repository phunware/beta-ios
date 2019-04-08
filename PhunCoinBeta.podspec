Pod::Spec.new do |s|
  s.name     = 'PhunCoinBeta'
  s.version  = '1.0.0.2'
  s.license  = 'MIT'
  s.summary  = 'Phunware PhunCoinBeta SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PhunCoin-1.0.0.2" }
  s.requires_arc = true
  
  s.platform = :ios, '11.0'
  s.swift_version = '5.0'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
  s.ios.vendored_frameworks = 'Framework/PhunCoin.framework'
end
