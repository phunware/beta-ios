//
//  PWMSELocation.h
//  PWLocation
//
//  Copyright (c) 2014 Phunware. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <PWLocation/PWLocationProtocol.h>

@protocol PWLocation;

/**
 A `PWIndoorLocation` object represents the location data generated by a `PWLocationManager` object. This object incorporates the geographical coordinates of the device’s location along with the floor ID, if available. This object conforms to the `PWLocation` protocol.
 
 Typically, an object that adheres to the `PWLocationManager` protocol is used to create instances of this class based on the last known location of the user’s device. You can create instances yourself, however, if you want to cache custom location data or get the distance between two points.
 
 This class is designed to be used as-is and should not be subclassed.
 */

@interface PWIndoorLocation : NSObject <PWLocation>

/**
 Initializes and returns a location object with the specified latitude and longitude.
 @param latitude The latitude of the coordinate point.
 @param longitude The longitude of the coordinate point.
 @param timestamp The time at which the location was reported.
 @return A location object initialized with the specified coordinate point and timestamp.
 @discussion  When using this method, the other properties of the object are initialized to appropriate values. In particular, the horizontalAccuracy property is set to -1, the floorID is set to `kPWUnknownFloorID` and the type is set to `PWLocationTypeUnknown`.
 */
- (instancetype)initWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude timestamp:(NSDate*)timestamp;

/**
 Initializes and returns a location object with the specified coordinate information.
 @param coordinate A coordinate structure containing the latitude and longitude values.
 @param floorID The floor ID associated with the location object. If the floor ID is unknown or unspecified, initialize with `kPWUnknownFloorID`.
 @param timestamp The time at which the location was reported.
 @return A location object initialized with the specified information.
 */
- (instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate floorID:(NSUInteger)floorID timestamp:(NSDate*)timestamp;

/**
 Initializes and returns a location object with the specified coordinate information.
 @param coordinate A coordinate structure containing the latitude and longitude values.
 @param floorID The floor ID associated with the location object. If the floor ID is unknown or unspecified, initialize with `kPWUnknownFloorID`.
 @param hAccuracy The accuracy of the coordinate value. Specifying a negative number indicates that the horizontal accuracy value is invalid.
 @param timestamp The time at which the location was reported.
 @return A location object initialized with the specified information.
 */
- (instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate floorID:(NSUInteger)floorID horizontalAccuracy:(CLLocationAccuracy)hAccuracy timestamp:(NSDate*)timestamp;

@end
