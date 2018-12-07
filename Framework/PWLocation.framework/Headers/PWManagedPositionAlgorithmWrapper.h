//
//  PWManagedPositionAlgorithmWrapper.h
//  Test
//
//  Created by Devin Pigera on 3/4/16.
//  Copyright © 2016 Phunware Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PWLocation/PWLocationDataManager.h>
#import <MapKit/MapKit.h>

@class Venue, PWIndoorLocation;

extern NSString * const kColorDotNotificationName;

@protocol PWManagedPositionAlgorithmWrapperDelegate <NSObject>

- (void)wrapper:(id)wrapper didUpdateLocation:(NSDictionary *)location;
- (void)wrapper:(id)wrapper didFailWithError:(NSError *)error;
- (void)wrapper:(id)wrapper didUpdateEstimatedRawLocation:(PWIndoorLocation *)location;
- (void)wrapper:(id)wrapper didUpdateEstimatedEdgeLocations:(NSArray *)locations;
- (void)wrapper:(id)wrapper didUpdateBeaconList:(NSArray *)beacons;
- (void)wrapper:(id)wrapper didUpdateUserHeadingAlignmentDestinationNode:(NSDictionary *)destinationNode heading:(double)heading;
- (void)wrapper:(id)wrapper didUpdateCompassHeading:(double)compassHeading;
- (void)wrapper:(id)wrapper didUpdateThirdPartyLocationProvider:(NSDictionary *)location;
- (void)wrapperDidStrayTooFarFromRoute:(id)wrapper;
@optional
- (void)wrapper:(id)wrapper didUpdateRedDotLocations:(NSArray *)locations;

@end

@interface PWManagedPositionAlgorithmWrapper : NSObject

@property (nonatomic, weak) id<PWManagedPositionAlgorithmWrapperDelegate> delegate;
@property (nonatomic, strong) NSNumber *beaconsRequiredForFloor;

- (BOOL)setPoints:(NSString *)pointsJSON
             pois:(NSString *)poisJSON
         segments:(NSString *)segmentsJSON
          floorId:(NSInteger)floorId
            venue:(Venue*)venue
            error:(NSError **)error;
- (void)resetAlgorithm;

// Set Gyroscope and Motion data directly
- (void)setRawAccelerometerData:(id<PWAcceleration>)accelerometerData;
- (void)setRawGyroscopeData:(float)gyroscopeData;
- (void)setRawHeading:(CLLocationDirection)heading;
- (void)setCMXRawEstimatedLocation:(PWIndoorLocation *)location;
- (void)setBeaconPointRawEstimatedLocation:(PWIndoorLocation *)location;
- (void)setSenionRawEstimatedLocation:(PWIndoorLocation *)location;
- (void)runAlgorithm;
- (void)feedFingerprintDataForFloor:(long)floorId;

// Getters
- (NSArray*)getEdges;
- (CGFloat)getAlgorithmInterval;
- (CGFloat)getGyroUpdateInterval;
- (NSString *)getAlgorithmInitSettings;
- (NSString *)getAlgorithmDynamicSettings;
- (NSUInteger)floorIdForBeacon:(CLBeacon *)beaconReading;

- (void)setRawBeaconList:(NSArray *)beaconList;
- (NSArray*)getProximityUUIDs;

// Helper
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
