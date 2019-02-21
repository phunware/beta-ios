// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PWLocation",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSNumber;

/// Accelerometer config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation19AccelerometerConfig")
@interface AccelerometerConfig : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable xScaleFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable yScaleFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable zScaleFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable normalizedCoefficient;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Accelerometer data. Internal use only.
SWIFT_PROTOCOL("_TtP10PWLocation17AccelerometerData_")
@protocol AccelerometerData
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double z;
@end


/// BLE data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation7BLEData")
@interface BLEData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable valHigh;
@property (nonatomic, readonly, strong) NSNumber * _Nullable valMidHigh;
@property (nonatomic, readonly, strong) NSNumber * _Nullable valMidLow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable valLow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable valBoost;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Beacon family config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation18BeaconFamilyConfig")
@interface BeaconFamilyConfig : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable attenuation;
@property (nonatomic, readonly, strong) NSNumber * _Nullable maxBeaconSampleBad;
@property (nonatomic, readonly, strong) NSNumber * _Nullable beaconPortalPowerDelta;
@property (nonatomic, readonly, strong) NSNumber * _Nullable beaconPortalPowerNearby;
@property (nonatomic, readonly, strong) NSNumber * _Nullable maxBeaconPowerStdDev;
@property (nonatomic, readonly, strong) NSNumber * _Nullable minBeaconPower;
@property (nonatomic, readonly, copy) NSString * _Nullable familyDescription;
@property (nonatomic, readonly, strong) NSNumber * _Nullable minBeaconSamplesPerSecond;
@property (nonatomic, readonly, copy) NSString * _Nullable uuid;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Beacon reading protocol. Internal use only.
SWIFT_PROTOCOL("_TtP10PWLocation19BeaconSingleReading_")
@protocol BeaconSingleReading
@property (nonatomic, readonly, strong) NSNumber * _Nonnull major;
@property (nonatomic, readonly, strong) NSNumber * _Nonnull minor;
@property (nonatomic, readonly, copy) NSUUID * _Nonnull proximityUUID;
@property (nonatomic, readonly) CLLocationAccuracy accuracy;
@property (nonatomic, readonly) NSInteger rssi;
@property (nonatomic, readonly) CLProximity proximity;
@end

@class HardwareConfigData;
@class FloorData;
@class PrismConfigData;
@class CMXConfigData;
@class VBLEConfigData;
@class GPSConfigData;

/// Building data model. Internal use only.
SWIFT_CLASS("_TtC10PWLocation13BuildingModel")
@interface BuildingModel : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable id;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly, strong) HardwareConfigData * _Nullable ios;
@property (nonatomic, readonly, copy) NSArray<FloorData *> * _Nullable floors;
@property (nonatomic, strong) PrismConfigData * _Nullable prismConfig;
@property (nonatomic, readonly, strong) CMXConfigData * _Nullable cmxConfig;
@property (nonatomic, readonly, strong) VBLEConfigData * _Nullable vbleConfig;
@property (nonatomic, readonly, strong) GPSConfigData * _Nullable gpsConfig;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface CLBeacon (SWIFT_EXTENSION(PWLocation)) <BeaconSingleReading>
@end




/// CMX config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation13CMXConfigData")
@interface CMXConfigData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable minimalStationaryTime;
@property (nonatomic, readonly, strong) NSNumber * _Nullable confidenceFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable maximumLingeringTime;
@property (nonatomic, readonly, copy) NSString * _Nullable venueGuid;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSNumber *> * _Nullable floorIDMapping;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmMovingMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmStationaryMaxWindow;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// GPS config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation13GPSConfigData")
@interface GPSConfigData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable confidenceFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable acceptanceRadius;
@property (nonatomic, readonly, strong) NSNumber * _Nullable minimalAcquisitionTime;
@property (nonatomic, readonly, strong) NSNumber * _Nullable maximumLingeringTime;
@property (nonatomic, readonly, strong) NSNumber * _Nullable defaultFloorId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Hardware config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation18HardwareConfigData")
@interface HardwareConfigData : NSObject
@property (nonatomic, strong) BLEData * _Nullable ble;
@property (nonatomic, strong) AccelerometerConfig * _Nullable accelerometer;
@property (nonatomic, strong) NSNumber * _Nullable markovNumReadings;
@property (nonatomic, strong) NSNumber * _Nullable markovReadingInterval;
@property (nonatomic, strong) NSNumber * _Nullable markovWalkThresholdMin;
@property (nonatomic, strong) NSNumber * _Nullable markovWalkThresholdMax;
@property (nonatomic, strong) NSNumber * _Nullable markovMaxQueueSize;
@property (nonatomic, strong) NSNumber * _Nullable gyroInterval;
@property (nonatomic, strong) NSNumber * _Nullable gyroMaxQueueSize;
@property (nonatomic, strong) NSNumber * _Nullable gyroSignificantEventWindowDuration;
@property (nonatomic, copy) NSArray<BeaconFamilyConfig *> * _Nullable beaconFamilies;
@property (nonatomic, strong) NSNumber * _Nullable beaconBlackoutDurationWhenLostTop;
@property (nonatomic, strong) NSNumber * _Nullable beaconMinToStayOnFloor;
@property (nonatomic, strong) NSNumber * _Nullable beaconMaxSampleAgeWalking;
@property (nonatomic, strong) NSNumber * _Nullable markovComputedSpeedLinearValue1;
@property (nonatomic, strong) NSNumber * _Nullable beaconMinToEnterFloor;
@property (nonatomic, strong) NSNumber * _Nullable beaconMinSamplesToCalculateStationary;
@property (nonatomic, strong) NSNumber * _Nullable beaconMinSamplesToCalculateWalking;
@property (nonatomic, strong) NSNumber * _Nullable beaconMaxSampleAgeStationary;
@property (nonatomic, strong) NSNumber * _Nullable beaconReceiverSensitivity;
@property (nonatomic, strong) NSNumber * _Nullable markovComputedSpeedLinearValue2;
@property (nonatomic, strong) NSNumber * _Nullable cameraHeight;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class HardwareData;

/// Hardware model data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation13HardwareModel")
@interface HardwareModel : NSObject
@property (nonatomic, readonly, strong) HardwareData * _Null_unspecified hardware;
@end


/// A <code>IndoorUserLocation</code> object represents the geolocation for specified floor in the building.
SWIFT_CLASS("_TtC10PWLocation18IndoorUserLocation")
@interface IndoorUserLocation : NSObject
/// The latitude and longitude coordinates of the indoor location.
@property (nonatomic) CLLocationCoordinate2D coordinate;
/// The radius of uncertainty for the indoor location, in meters.
@property (nonatomic) CLLocationDistance horizontalAccuracy;
/// The floor identifier of building which was created in MaaS portal.
@property (nonatomic) NSInteger floorId;
/// The building identifier which was created in MaaS portal.
@property (nonatomic) NSInteger buildingId;
/// The time at which the location was reported.
@property (nonatomic, copy) NSDate * _Nonnull timestamp;
/// Initializer for <code>IndoorUserLocation</code>.
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate horizontalAccuracy:(CLLocationDistance)horizontalAccuracy floorId:(NSInteger)floorId buildingId:(NSInteger)buildingId timestamp:(NSDate * _Nonnull)timestamp OBJC_DESIGNATED_INITIALIZER;
/// Distance between two indoor locations.
/// \param from Other indoor location to calculate distance from.
///
///
/// returns:
/// Distance between the two indoor locations. The distance does not factor in floors.
- (CLLocationDistance)distanceFrom:(IndoorUserLocation * _Nonnull)from SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class SegmentsModel;
@class PointsModel;

/// Location bundle data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation14LocationBundle")
@interface LocationBundle : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nonnull bundleURL;
@property (nonatomic, readonly, copy) NSURL * _Nonnull buildingURL;
@property (nonatomic, readonly, copy) NSURL * _Nonnull segmentsURL;
@property (nonatomic, readonly, copy) NSURL * _Nonnull pointsURL;
@property (nonatomic, readonly, copy) NSURL * _Nonnull poisURL;
@property (nonatomic, readonly, copy) NSURL * _Nonnull hardwareURL;
@property (nonatomic, readonly, copy) NSURL * _Nullable beaconFloorMapURL;
@property (nonatomic, strong) BuildingModel * _Nullable buildingModel;
@property (nonatomic, strong) SegmentsModel * _Nullable segmentsModel;
@property (nonatomic, strong) PointsModel * _Nullable pointsModel;
@property (nonatomic, strong) HardwareModel * _Nullable hardwareModel;
@property (nonatomic, copy) NSDictionary<NSNumber *, NSURL *> * _Nonnull fingerprintFilePaths;
- (HardwareConfigData * _Nullable)hardwareConfigData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Location data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation12LocationData")
@interface LocationData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable latitude;
@property (nonatomic, readonly, strong) NSNumber * _Nullable longitude;
- (nonnull instancetype)initWithLatitude:(double)latitude longitude:(double)longitude OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Logger class for logging all location related information. Internal use only.
SWIFT_CLASS("_TtC10PWLocation14LocationLogger")
@interface LocationLogger : NSObject
/// Log error function. Internal use only.
/// \param message Message string to log.
///
/// \param details Detail string dictionary to log.
///
+ (void)logError:(NSString * _Nonnull)message :(NSDictionary<NSString *, NSString *> * _Nullable)details;
/// Log warning function. Internal use only.
/// \param message Message string to log.
///
/// \param details Detail string dictionary to log.
///
+ (void)logWarning:(NSString * _Nonnull)message :(NSDictionary<NSString *, NSString *> * _Nullable)details;
/// Log info function. Internal use only.
/// \param message Message string to log.
///
/// \param details Detail string dictionary to log.
///
+ (void)logInfo:(NSString * _Nonnull)message :(NSDictionary<NSString *, NSString *> * _Nullable)details;
/// Log debug function. Internal use only.
/// \param message Message string to log.
///
/// \param details Detail string dictionary to log.
///
+ (void)logDebug:(NSString * _Nonnull)message :(NSDictionary<NSString *, NSString *> * _Nullable)details;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol LocationManagerDelegate;

/// Location Manager protocol, used by all location manager providers.
SWIFT_PROTOCOL("_TtP10PWLocation15LocationManager_")
@protocol LocationManager
/// Last location of the provider
@property (nonatomic, readonly, strong) IndoorUserLocation * _Nullable lastLocation;
/// Location manager delegate.
@property (nonatomic, strong) id <LocationManagerDelegate> _Nullable delegate;
/// Start updating location
- (void)startUpdatingLocation;
/// Stop updating location
- (void)stopUpdatingLocation;
@end


/// Location Manager delegate, used by all location manager providers to provide location updates.
SWIFT_PROTOCOL("_TtP10PWLocation23LocationManagerDelegate_")
@protocol LocationManagerDelegate
/// Delegate call back to send location updates to.
/// \param manager The location manager providing the location updates.
///
/// \param location The location update from the provider.
///
- (void)locationManager:(id <LocationManager> _Nonnull)manager didUpdateTo:(IndoorUserLocation * _Nonnull)location;
/// Delegate call back to send location errors to.
/// \param manager The location manager providing the location error.
///
/// \param error The location error from the provider.
///
- (void)locationManager:(id <LocationManager> _Nonnull)manager didFailWith:(NSError * _Nonnull)error;
@end



@class PointData;

/// Point model data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation11PointsModel")
@interface PointsModel : NSObject
@property (nonatomic, readonly, copy) NSArray<PointData *> * _Null_unspecified data;
@end

@class PrismFloorConfigData;

/// Prism config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation15PrismConfigData")
@interface PrismConfigData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable lastHeardUpdatesIntervalSec;
@property (nonatomic, readonly, copy) NSArray<PrismFloorConfigData *> * _Nullable floors;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmStationaryMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable acceptanceRadius;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmMovingMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable confidenceFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable movingMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable stationaryMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable initialFloorId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Reference points. Internal use only.
SWIFT_CLASS("_TtC10PWLocation15ReferencePoints")
@interface ReferencePoints : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SegmentData;

/// Segments model data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation13SegmentsModel")
@interface SegmentsModel : NSObject
@property (nonatomic, readonly, copy) NSArray<SegmentData *> * _Null_unspecified data;
@end


@interface UIDevice (SWIFT_EXTENSION(PWLocation))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull modelName;)
+ (NSString * _Nonnull)modelName SWIFT_WARN_UNUSED_RESULT;
@end

@class VBLEFloorConfigData;

/// VBLE config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation14VBLEConfigData")
@interface VBLEConfigData : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable mobileSdkKey;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmMovingMaxWindow;
@property (nonatomic, readonly, strong) NSNumber * _Nullable confidenceFactor;
@property (nonatomic, readonly, strong) NSNumber * _Nullable type;
@property (nonatomic, readonly, strong) NSNumber * _Nullable elmStationaryMaxWindow;
@property (nonatomic, readonly, copy) NSArray<VBLEFloorConfigData *> * _Nullable floors;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// VBLE floor config data. Internal use only.
SWIFT_CLASS("_TtC10PWLocation19VBLEFloorConfigData")
@interface VBLEFloorConfigData : NSObject
@property (nonatomic, readonly, strong) NSNumber * _Nullable maasId;
@property (nonatomic, readonly, copy) NSString * _Nullable id;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
