//
//  PWAnalytics.h
//  PWAnalytics
//
//  Copyright (c) 2015 Phunware. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 `PWAnalytics` enables easy implementation of application workflow analytics. MaaSAnalytics supports standard analytics events, timed events and event parameters.
 */

@interface PWAnalytics : NSObject

///-----------------------
/// @name Event Methods
///-----------------------

/**
 Add an event to the analytics queue.
 @param eventName Name of the event. 
 */
+ (void)addEvent:(NSString *__nonnull)eventName;

/**
 Add an event to the analytics queue. Parameters must follow these rules:
 (1) Keys must be NSString objects and values must be either NSString or NSNumber objects.
 (2) There may be no more than 25 parameters. Extra parameters will be ignored.
 (3) Each key or value that is longer than 256 characters will be truncated.
 @param eventName Name of the event.
 @param parameters `NSString` key / value parameters. For example, `@{@"key" : @"value"}`.
 */
+ (void)addEvent:(NSString *__nonnull)eventName withParameters:(NSDictionary<NSString *, id> *__nullable)parameters;

/**
 Set a screen name for automatic screen view events.
 @param screenName Screen name for the view event.
 */
+ (void)setScreenName:(NSString *__nonnull)screenName;

/**
 Set an app section for automatic screen view events.
 @param appSection App section for the view event.
 */
+ (void)setAppSection:(NSString *__nullable)appSection;

/**
 Set global parameters for all events.
 @param parameters Parameters included for all events until cleared.
 */
+ (void)setGlobalParameters:(NSDictionary *__nullable)parameters;

/**
 Determines whether automatic screen views are captured.
 @param enable Will automatically capture screen view events or not. Defaults to enabled.
 */
+ (void)enableAutomaticScreenViewEvents:(BOOL)enable;

@end
