//
//  PWLocationManager.h
//  Test
//
//  Created by Devin Pigera on 2/14/16.
//  Copyright © 2016 Phunware Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreMotion/CoreMotion.h>

@class PWLocationDataManager, PWDataRecordingManager;

@protocol PWHeading <NSObject>

@property (nonatomic) CLLocationDirection headingAccuracy;
@property (nonatomic) CLLocationDirection trueHeading;

@end

@interface CLHeading (PWHeading) <PWHeading>
@end

@protocol PWAcceleration <NSObject>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

@end

@protocol PWBeaconReading <NSObject>

@property (nonatomic, strong) NSUUID *proximityUUID;
@property (nonatomic, strong) NSNumber *major;
@property (nonatomic, strong) NSNumber *minor;
@property (nonatomic) CLLocationAccuracy accuracy;
@property (nonatomic) NSInteger rssi;

@end

@interface CLBeacon (PWBeaconReading) <PWBeaconReading>
@end
/**
 The `PWLocationManager` manages CLLocationManager. Provides `PWBeaconManager` and `PWHeadingManager` with beacon ranging and headings. Handles permission authorizations with OS
 */
@protocol PWLocationDataManagerHeadingDelegate <NSObject>
- (void)locationManager:(PWLocationDataManager *)locationManager didFailWithErrorObject:(NSError *)error;
- (void)locationManager:(PWLocationDataManager *)manager didUpdateHeadingObject:(CLHeading *)newHeading;
- (void)locationManagerWillDisplayHeadingCalibration:(PWLocationDataManager *)manager;
@end

@protocol PWLocationDataManagerBeaconDelegate <NSObject>
- (void)locationManager:(PWLocationDataManager *)locationManager didFailWithErrorObject:(NSError *)error;
- (void)locationManager:(PWLocationDataManager *)locationManager didRangeBeaconList:(NSArray *)beaconList;
- (void)locationManager:(PWLocationDataManager *)manager didEnterRegion:(CLRegion *)region;
- (void)locationManager:(PWLocationDataManager *)manager didExitRegion:(CLRegion *)region;
@end

@interface PWLocationDataManager : NSObject
@property(nonatomic, weak) id<PWLocationDataManagerHeadingDelegate> headingDelegate;
@property(nonatomic, weak) id<PWLocationDataManagerBeaconDelegate> beaconDelegate;

+ (PWLocationDataManager *)sharedManager;
- (void)startUpdatingHeading;
- (void)startRangingBeaconsWithProximityUUIDs:(NSArray*)proximityUUIDs;

- (void)stopUpdatingHeading;
- (void)stopRangingBeacons;

@end
