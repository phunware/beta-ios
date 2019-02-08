//
//  PWZone.h
//  PWEngagement
//
//  Copyright (c) 2015 Phunware, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * This protocol represents the zone data generated by an object which implements the PWMEZone protocol. This object incorporates a name, identifier, code, tags and several other properties that can be useful to query. Typical implementations will append additional data to zone object.
 */
@protocol PWMEZone <NSObject>

/**
 * The identifier of the zone. (read-only)
 * @discussion When working with zone objects, determine equality by comparing their identifier instead of performing pointer-level comparisons.
 */
@property (nonatomic, readonly) NSString *identifier;
/**
 * The name given to the geozone object. (read-only)
 */
@property (nonatomic, readonly) NSString *name;

/**
 * The code assigned to the zone object. (read-only)
 */
@property (nonatomic, readonly) NSString *code;

/**
 * The description assigned to the zone object. (read-only)
 */
@property (nonatomic, readonly) NSString *zoneDescription;


/**
 * A flag that indicates if the user is currently inside the zone. (read-only)
 */
@property (nonatomic, readonly) BOOL inside;

/**
 * A flag that indicates if the zone is monitored. (read-only)
 */
@property (nonatomic, readonly) BOOL monitored;

/**
 * A set of tags associated to the zone. (read-only)
 */
@property (nonatomic, readonly) NSSet *tags;


@end
