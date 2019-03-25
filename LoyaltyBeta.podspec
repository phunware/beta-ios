Pod::Spec.new do |s|
  s.name     = 'LoyaltyBeta'
  s.version  = '1.0.0.18'
  s.license  = 'MIT'
  s.summary  = 'Phunware LoyaltyBeta SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "Loyalty-1.0.0.18" }
  s.requires_arc = true
  
  s.platform = :ios, '11.0'
  s.swift_version = '4.2'
  
  s.ios.dependency 'PWCore'
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
  s.ios.vendored_frameworks = 'Framework/Loyalty.framework'
end
