# Phunware SDKs for iOS (Beta)

> Version 1.0

Integrate with Phunware Beta SDKs for iOS with one line, or specify the SDKs you want to integrate with as you want.
 
## Requirements

- iOS 9.0 or greater
- Xcode 8 or greater

## Installation

We recommend using [CocoaPods](http://www.cocoapods.org), and add the following to your Podfile.

```ruby
pod 'Phunware/Beta'  # Pull in all SDKs

```

If you don't want to use all of SDKs, there are multiple subspecs which can selectively install subsets of the SDK:

```ruby
# Only pull in PWCore SDK
pod 'Phunware/Beta/Core'

# Only pull in PWLocation SDK, the `PWCore` is automatically pulled in as a dependency
pod 'Phunware/Beta/Location'

# Only pull in PWMapKit SDK, the `PWCore` and `PWLocation` are automatically pulled in as dependencies
pod 'Phunware/Beta/MapKit'

# Only pull in PWMessaging SDK, the `PWCore` is automatically pulled in as a dependency
pod 'Phunware/Beta/Messaging'

# Only pull in PWAds SDK, the `PWCore` is automatically pulled in as a dependency
pod 'Phunware/Beta/Ads'

```

## PWLocation

3.1.2

### Documentation 
http://phunware.github.io/maas-location-ios-sdk 

### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

## PWMapKit

3.1.3

### Documentation 
http://phunware.github.io/maas-location-ios-sdk 


### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

Privacy
-----------
You understand and consent to Phunware’s Privacy Policy located at www.phunware.com/privacy. If your use of Phunware’s software requires a Privacy Policy of your own, you also agree to include the terms of Phunware’s Privacy Policy in your Privacy Policy to your end users.


