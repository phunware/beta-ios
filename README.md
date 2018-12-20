# Phunware SDKs for iOS (Beta)

> Version 1.1.6.1

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

## PWCore

### Documentation 
http://phunware.github.io/maas-core-ios-sdk 

### Setup
First to import it with:
> 
> Objective-C
>  
```objective-c
#import <PWCore/PWCore.h>
```
>
> Swift
>
```swift
import PWCore
```
>

Then initialize it in the `application:didFinishLaunchingWithOptions:` method with:
> 
> Objective-C
> 
```objective-c
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
 	// These values can be found for your application in the MaaS portal (http://maas.phunware.com/clients).
	[PWCore setApplicationID:<#(NSString *)#> accessKey:<#(NSString *)#> signatureKey:<#(NSString *)#> encryptionKey:@""];
	...
}
```
>
> Swift
> 
```swift
func application(_ application: UIApplication, >didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
	// These values can be found for your application in the MaaS portal (http://maas.phunware.com/clients).
	PWCore.setApplicationID(<#applicationID: String!#>, accessKey: <#String!#>, signatureKey: <#String!#>, encryptionKey: "")
	...
}
```
>

## PWLocation

### Documentation 
http://phunware.github.io/maas-location-ios-sdk 

### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

## PWMapKit

### Documentation 
http://phunware.github.io/maas-location-ios-sdk 


### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

## PWMessaging

### Documentation 
http://phunware.github.io/maas-messaging-ios-sdk 

### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

## PWAds

### Documentation 
http://phunware.github.io/maas-ads-ios-sdk 

### Setup
Firstly, you have to make sure the `PWCore` setup correctly.

Then, TBD

Privacy
-----------
You understand and consent to Phunware’s Privacy Policy located at www.phunware.com/privacy. If your use of Phunware’s software requires a Privacy Policy of your own, you also agree to include the terms of Phunware’s Privacy Policy in your Privacy Policy to your end users.


