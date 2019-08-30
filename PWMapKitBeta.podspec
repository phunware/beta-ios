Pod::Spec.new do |s|
  s.name     = 'PWMapKitBeta'
  s.version  = '4.0.0.18'
  s.license  = 'MIT'
  s.summary  = 'Phunware PWMapKit SDK (BETA)'
  s.homepage = 'https://github.com/phunware/beta-ios'
  s.authors  = { 'Phunware' => 'info@phunware.com' }
	s.source   = { :git => "https://github.com/phunware/beta-ios.git", :tag => "PWMapKit-4.0.0.18" }
  s.requires_arc = true
  
  s.platform = :ios, '10.0' 
	s.ios.vendored_frameworks = 'Framework/PWMapKit.framework'
  
  s.default_subspec = 'all-frameworks'

  s.subspec 'all-frameworks' do |sub|
    sub.dependency 'PWLocation', '~> 3.8.0'
  end

  s.subspec 'NoAds' do |sub|
    sub.dependency 'PWLocation/NoAds', '~> 3.8.0'
  end


end
