//
//  PWManagedPositionAlgorithmWrapper.h
//  Test
//
//  Created on 3/4/16.
//  Copyright © 2016 Phunware Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@protocol BeaconSingleReading, AccelerometerData;
@class LocationBundle, IndoorUserLocation;

extern NSString * const kColorDotNotificationName;
extern NSString * const kLocationUpdateNotificationName;
extern NSString * const kStrayedFromRouteNotificationName;

/// Class used as an interface for our algorithm. Internal use only.
@interface PWManagedPositionAlgorithmWrapper : NSObject

@property (nonatomic, strong) NSNumber *beaconsRequiredForFloor;

- (NSError *)useLocationBundle:(LocationBundle *)locationBundle;
- (void)resetAlgorithm;

/// Set Gyroscope and Motion data directly
- (void)setRawAccelerometerData:(id<AccelerometerData>)accelerometerData;
- (void)setRawGyroscopeData:(float)gyroscopeData;
- (void)setRawCompassHeading:(CLLocationDirection)heading;
- (void)setGPSRawEstimatedLocation:(IndoorUserLocation *)providedLocation;
- (void)setCMXRawEstimatedLocation:(IndoorUserLocation *)providedLocation;
- (void)setVBRawEstimatedLocation:(IndoorUserLocation *)providedLocation;
- (void)runAlgorithm;
- (void)feedFingerprintDataForFloor:(long)floorId;

/// Getters
- (CGFloat)getAlgorithmInterval;
- (CGFloat)getGyroUpdateInterval;
- (NSString *)getAlgorithmInitSettings;
- (NSString *)getAlgorithmDynamicSettings;

- (void)setRawBeaconList:(NSArray<BeaconSingleReading> *)beaconList;

/// Helper
+ (CLLocationCoordinate2D)convertMistRelativeLocationX:(double)x
                                                     Y:(double)y
                                          withMapWidth:(double)mapWidth
                                                height:(double)mapHeight
                                               topLeft:(CLLocationCoordinate2D)topLeft
                                              topRight:(CLLocationCoordinate2D)topRight
                                           bottomRight:(CLLocationCoordinate2D)bottomRight;
+ (MKMapPoint)convertMapCoordinateToMist:(CLLocationCoordinate2D)currentCoordinate
                           mistMapHeight:(double)mistMapHeight
                            mistMapWidth:(double)mistMapWidth
                                 topLeft:(CLLocationCoordinate2D)topLeft
                                topRight:(CLLocationCoordinate2D)topRight
                             bottomRight:(CLLocationCoordinate2D)bottomRight;

@end
