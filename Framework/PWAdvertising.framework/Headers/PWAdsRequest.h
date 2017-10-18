//
//  PWAdsRequest.h
//  PWAdvertising
//
//  Copyright © 2015 Phunware, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

/**
 Class with ad request parameters.
 */
@interface PWAdsRequest : NSObject

/// The id string of the zone of publisher site.
@property (nonatomic, strong) NSString *zoneID;

/// Geolocation for targeted ads.
@property (nonatomic, copy) CLLocation *location;

/// List of keywords to that describe a request.
@property (nonatomic, copy) NSArray *keywords;

/// Number of ads requested. Only supported for requesting native ads.
@property (nonatomic, assign) NSInteger numberOfAds;

/// Whether request is for test ads. Default is NO.
@property (nonatomic, assign) BOOL testMode;

/// Custom Data object for Rewarded Video ads request.
@property (nonatomic, copy) NSMutableDictionary *customData;

/// User ID for Rewarded Video ads request.
@property (nonatomic, copy) NSString *userID;

/**
 Designated initializer for PWAdsRequest.
 
 @param zoneID The id string of the zone of publisher site
 */
- (instancetype)initWithZoneID:(NSString *)zoneID NS_DESIGNATED_INITIALIZER;

/**
 Initializes and return a PWAdsRequest instance with given zoneID.
 
 @param zoneID The id string of the zone of publisher site.
 */
+ (PWAdsRequest *)requestWithZoneID:(NSString *)zoneID;

@end
