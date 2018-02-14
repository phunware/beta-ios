Pod::Spec.new do |s|
    s.name         = "PWMSTBeta"
    s.homepage     = "https://github.com/phunware/beta-ios"
    s.license      = { :type => 'Copyright', :text => 'Copyright 2018 by Phunware Inc. All rights reserved.' }
    s.version      = "1.2.1"
    s.summary      = "PWMSTBeta"
    s.description  = <<-DESC
Mist SDK
DESC
    s.author                = { 'Phunware, Inc.' => 'http://www.phunware.com' }
    s.social_media_url      = 'https://twitter.com/Phunware'
    s.platform              = :ios, "8.0"
    s.ios.deployment_target = "8.0"
    s.source                = { :git => "https://github.com/phunware/beta-ios.git", :tag => 'PWMSTBeta-1.2.1' }
    s.ios.vendored_frameworks = 'Framework/MistSDK.framework'
    s.frameworks            = "Foundation", "Security", "CFNetwork", "JavaScriptCore", "CoreLocation", "CoreBluetooth", "UIKit", "MapKit", "SystemConfiguration"
    s.libraries             = "icucore", "z"
    s.requires_arc          = true
    s.dependency 'PWMSTMobileBeta'
end
