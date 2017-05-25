//
//  PWIALocationManager.h
//  PWLocation
//
//  Created on 5/1/17.
//  Copyright © 2017 Phunware Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <PWLocation/PWLocationManager.h>

@interface PWIALocationManager : NSObject <PWLocationManager>

- (instancetype)initWithApiKeyId:(NSString *)apiKeyId apiKeySecret:(NSString *)apiKeySecret floorPlanId:(NSString *)floorPlanId;

/**
 The last indoor location received.
 */
@property (nonatomic, readonly) PWIndoorLocation *location;

@property (nonatomic, strong) NSString *apiKeyId;
@property (nonatomic, strong) NSString *apiKeySecret;
@property (nonatomic, strong) NSString *floorPlanId;

@end
