//
//  PWMapView.h
//  PWMapKit
//
//  Copyright (c) 2015 Phunware. All rights reserved.
//

#import <MapKit/MapKit.h>
#import <PWLocation/PWLocation.h>

@protocol PWMapViewDelegate;
@protocol PWLocationSharingDelegate;

@class PWMapView;
@class PWBuildingOverlay;
@class PWBuilding;
@class PWFloor;
@class PWPointOfInterest;
@class PWBuildingAnnotationView;
@class PWRoute;
@class PWRouteStep;
@class PWRouteInstruction;
@class PWLocation;
@class PWUserLocation;
@class PWCustomLocation;

#pragma mark - Notification Keys

// The building is loaded successfully.
extern NSString *const PWBuildingLoadedNotificationKey;

// The building floor is changed.
extern NSString *const PWFloorChangedNotificationKey;

// The route instruction is changed.
extern NSString *const PWRouteInstructionChangedNotificationKey;

// The tracking mode is changed.
extern NSString *const PWTrackingModeChangedNotificationKey;

// Indoor location starts updating.
extern NSString *const PWLocatingStartedNotificationKey;

// Indoor location stops updating
extern NSString *const PWLocatingStoppedNotificationKey;

/**
 Supported Route Snapping Tolerance values.
 */
typedef NS_ENUM(NSUInteger, PWRouteSnapTolerance) {
    PWRouteSnappingOff,
    PWRouteSnapToleranceNormal,
    PWRouteSnapToleranceMedium,
    PWRouteSnapToleranceHigh
};

/**
 `PWTrackingMode` is used to indicate how to track the user's indoor location on a map.
 */
typedef NS_ENUM(NSUInteger, PWTrackingMode) {
    PWTrackingModeNone,
    PWTrackingModeFollow,
    PWTrackingModeFollowWithHeading
};

/**
 The `PWMapViewDelegate` protocol defines a set of optional methods that you can use to receive building-related update messages. Since many map operations require the `PWMapView` class to load data asynchronously, the map view calls these methods to notify your application when specific operations complete. `PWMapViewDelegate` inherits from `MKMapViewDelegate`.
 */
@protocol PWMapViewDelegate <MKMapViewDelegate>

@optional

#pragma mark - Loading Building Map Data

/**
 Asks the delegate that the `MKMapCamera` will be set when the building is completely loaded.
 @param mapView The map view that started the load operation.
 @return The `MKMapCamera` will be set when the building is completely loaded.
 @discussion It's optional, SDK will set a appropriate camera to make the entire building fit the screen if it's not implemented.
 */
- (MKMapCamera *)mapViewWillSetCamera:(PWMapView *)mapView;

/**
 Asks the delegate that the `PWFloor` will be set as intial floor.
 @param mapView The map view that started the load operation.
 @return The `PWFloor` will be set as initial floor.
 @discussion It's optional, SDK will set the floor which has minimum level as intial floor if it's not implemented.
 */
- (PWFloor *)mapViewWillSetInitialFloor:(PWMapView *)mapView;

/**
 Tells the delegate that the specified map view successfully loaded necessary building data.
 @param mapView The map view that started the load operation.
 @param building The building that was loaded.
 @discussion This method is called when the building data has finished loading and is ready to be displayed on the map.
 */
- (void)mapView:(PWMapView *)mapView didFinishLoadingBuilding:(PWBuilding *)building;

/**
 Tells the delegate that the specified view was unable to load the building data.
 @param mapView The map view that started the load operation.
 @param building The building that the map view tried to load.
 @param error The reason that the map data could not be loaded.
 @discussion This method might be called in situations where the device does not have access to the network or is unable to load the building data. On a successful load, building data and assets are cached for future use.
 */
- (void)mapView:(PWMapView *)mapView didFailToLoadBuilding:(PWBuilding *)building error:(NSError *)error;

/**
 Tells the delegate that the specified map view successfully changed the building floor.
 @param mapView The map view that changed the floor.
 @param floor The current floor displayed in the map view.
 @discussion This method is called when the floor data has finished loading and is ready to be displayed on the map.
 */
- (void)mapView:(PWMapView *)mapView didChangeFloor:(PWFloor *)floor;

/**
 Tells the delegate that the specified map view successfully changed the building floor.
 @param mapView The map view that changed the floor.
 @param floor The floor tried to change in the map view.
 @error The reason that the floor could not be loaded.
 */
- (void)mapView:(PWMapView *)mapView didFailedToChangeFloor:(PWFloor *)floor error:(NSError *)error;

#pragma mark - Tracking the User's Location

/**
 Tells the delegate that the map view will start tracking the user’s indoor location.
 @param mapView The map view tracking the user’s location.
 @discussion This method is called when the value of the `showsIndoorUserLocation` property changes to `YES`.
 */
- (void)mapViewWillStartLocatingIndoorUser:(PWMapView *)mapView;

/**
 Tells the delegate that the map view stopped tracking the user’s indoor location.
 @param mapView The map view that stopped tracking the user’s indoor location.
 @discussion This method is called when the value of the `showsIndoorUserLocation` property changes to `NO`.
 */
- (void)mapViewDidStopLocatingIndoorUser:(PWMapView *)mapView;

/**
 Tells the delegate that an attempt to locate the user’s position failed.
 @param mapView The map view tracking the user’s indoor location.
 @param error An error object containing the reason why location tracking failed.
 */
- (void)mapView:(PWMapView *)mapView didFailToLocateIndoorUserWithError:(NSError *)error;

/**
 Tells the delegate that the indoor location of the user was updated.
 @param mapView The map view tracking the user’s location.
 @param locationManager The location manager providing location updates.
 @param userLocation The location object representing the user’s latest location. This property may be `nil`.
 @discussion While the showsIndoorUserLocation property is set to `YES`, this method is called whenever a new location update is received by the map view.
 */
- (void)mapView:(PWMapView *)mapView locationManager:(id<PWLocationManager>)locationManager didUpdateIndoorUserLocation:(PWUserLocation *)userLocation;

#pragma mark - Routing

/**
 Tells the delegate that the user's location has been snapped to a route.
 @param mapView The map view snapping locations to a route.
 @discussion This method notifies the map view delegate that the map view has begun snapping user locations to a route.
 */
- (void)mapViewStartedSnappingLocationToRoute:(PWMapView *)mapView;

/**
 Tells the delegate that the user's location was not snapped to a route.
 @param mapView The map view no longer snapping locations to a route.
 @discussion This method notifies the map view delegate that the map view has ceased snapping user locations to a route.
 */
- (void)mapViewStoppedSnappingLocationToRoute:(PWMapView *)mapView;

/**
 Tells the delegate that the route step being displayed has changed.
 @param mapView The map view reporting the step change.
 @param step The new route step being displayed on the map.
 */
- (void)mapView:(PWMapView*)mapView didChangeRouteStep:(PWRouteStep*)step;

/**
 Tells the delegate that the route step being displayed has changed.
 @param mapView The map view reporting the step change.
 @param instruction The new instruction being displayed on the map, or nil if it has been cleared.
 */
- (void)mapView:(PWMapView*)mapView didChangeRouteInstruction:(PWRouteInstruction*)instruction;

/**
 Asks the delegate whether the automatic route instruction change should be animated.
 @param mapView The map view asking whether or not to animate automatic route instruction changes.
 @return A Boolean value indicating whether or not to animate automatic route instruction changes.
 @discussion The automatic route instruction changes will be animated by default.
 */
- (BOOL)mapViewShouldAnimateAutomaticRouteInstructionChange:(PWMapView *)mapView;

#pragma mark - Tracking Heading

/**
 Tells the delegate that the user's location was updated.
 @param mapView The map view with the altered user tracking mode.
 @param mode The mode used to track the user’s location.
 */
- (void)mapView:(PWMapView *)mapView didChangeIndoorUserTrackingMode:(PWTrackingMode)mode;

/**
 Asks the delegate whether the heading calibration display should be shown.
 @param mapView The map view asking whether or not to display the heading calibration.
 @return A Boolean value indicating whether or not the heading calibration should be displayed.
 @discussion The heading calibration will not be displayed by default.
 */
- (BOOL)mapViewShouldDisplayHeadingCalibration:(PWMapView *)mapView;

/**
 Tells the delegate that the user's heading has changed.
 @param mapView The map view reporting the change in user heading.
 @param heading The new heading value being reported.
 */
- (void)mapView:(PWMapView *)mapView didUpdateHeading:(CLHeading*)heading;

#pragma mark - Deprecated

/**
 Returns the view associated with the specified point-of-interest object.
 @param mapView The map view containing the annotation view.
 @param poi The object representing the point-of-interest that is about to be displayed.
 @discussion Please change to use `- mapView: viewForAnnotation:` instead.
 */
- (MKAnnotationView *)mapView:(PWMapView *)mapView viewForPointOfInterest:(PWPointOfInterest *) poi __deprecated;

/**
 Tells the delegate that one or more point-of-interest views were added to the map.
 @param mapView The map view containing the annotation view.
 @param view The object representing the annotation that is about to be displayed.
 @param poi The object representing the point-of-interest that is about to be displayed.
 @discussion Please change to use `- mapView: didAddAnnotationViews:` instead, and get the `PWPointOfInterest` object via `view.annotation`.
 */
- (void)mapView:(PWMapView *)mapView didAnnotateView:(PWBuildingAnnotationView *)view withPointOfInterest:(PWPointOfInterest *)poi __deprecated;

/**
 Tells the delegate that one or more annotation views were added to the map.
 @param mapView The map view containing the annotation views.
 @param views An array of MKAnnotationView objects representing the views that were added.
 @discussion Please change to use `- mapView: didAddBuildingAnnotationViews:` instead.
 */
- (void)mapView:(PWMapView *)mapView didAddBuildingAnnotationViews:(NSArray<PWBuildingAnnotationView *> *)views __deprecated;

/**
 Tells the delegate that the user tapped one of the point-of-interest view’s accessory buttons.
 @param mapView The map view containing the annotation view.
 @param view The point-of-interest view whose button was tapped.
 @param poi The point-of-interest whose button was tapped.
 @discussion Please change to use `- mapView: calloutAccessoryControlTapped:` instead, and get the `PWPointOfInterest` object via `view.annotation`.
 */
- (void)mapView:(PWMapView *)mapView annotationView:(PWBuildingAnnotationView *)view calloutAccessoryControlTapped:(UIControl *)control withPointOfInterest:(PWPointOfInterest *)poi __deprecated;

/**
 Tells the delegate that one of its annotation views was selected.
 @param mapView The map view containing the annotation view.
 @param view The point-of-interest view that was selected.
 @param poi The point-of-interest that was selected.
 @discussion Please change to use `- mapView: didSelectAnnotationView:` instead, and get the `PWPointOfInterest` object via `view.annotation`.
 */
- (void)mapView:(PWMapView *)mapView didSelectBuildingAnnotationView:(PWBuildingAnnotationView *)view withPointOfInterest:(PWPointOfInterest *)poi __deprecated;

/**
 Tells the delegate that one of its annotation views was selected.
 @param mapView The map view that requested the annotation view.
 @param view The point-of-interest view that was deselected.
 @param poi The point-of-interest that was deselected.
 @discussion Please change to use `- mapView: didDeselectAnnotationView:` instead, and get the `PWPointOfInterest` object via `view.annotation`.
 */
- (void)mapView:(PWMapView *)mapView didDeselectBuildingAnnotationView:(PWBuildingAnnotationView *)view withPointOfInterest:(PWPointOfInterest *)poi __deprecated;

@end

/**
 A `PWMapView` object provides an embeddable map interface. It is similar to the one provided by the maps application but is specifically tailored to indoor maps. `PWMapView` subclasses `MKMapView` to provide a convenient interface that downloads, stores and displays indoor maps and associated points of interest (POIs). Usage of this class is optional but recommended for basic indoor map implementations. For more control, please refer to `PWBuildingOverlay` and `PWRouteOverlay`,  which `PWMapView` is built upon.
 */

@interface PWMapView : MKMapView

#pragma mark - Accessing Map Properties

/**
 The delegate for the map. The `PWMapViewDelegate` inherits from `MKMapViewDelegate`.
 */
@property (nonatomic, weak) id <PWMapViewDelegate> delegate;

/**
 The location sharing delegate.
 */
@property (nonatomic, weak) id<PWLocationSharingDelegate> locationSharingDelegate;

/**
 The `PWBuilding` object associated with the current map. If no building is associated with the `PWMapView`, the building will be `nil`.
 */
@property (nonatomic) PWBuilding *building;

/**
 Returns the currently displayed `PWFloor` object. This property may be `nil` if no floor is displayed. Attempts to change to the same floor are ignored. When the floor change is complete, the delegate will receive a `mapView:didChangeFloor:` callback.
 */
@property (nonatomic) PWFloor *currentFloor;

/**
 The current `PWRoute` object plotted on the map. This property will be `nil` if no route is displayed.
 */
@property (nonatomic, readonly) PWRoute *currentRoute;

/**
 A Boolean value indicating whether the device’s current indoor location is visible in the map view. (read-only)
 
 @discussion This property tells you whether the icon used to represent the user’s current indoor location is visible in the map view. When determining whether the current indoor location is visible, this property factors in the horizontal accuracy of the location data.
 
 Specifically, if the rectangle represented by the user’s current location plus or minus the horizontal accuracy of that location intersects the map’s visible rectangle, this property contains the value `YES`.
 
 If that location rectangle does not intersect the map’s visible rectangle, this property contains the value `NO`.
 
 If the user’s indoor location cannot be determined, this property contains the value `NO`.
 */
@property (nonatomic, readonly, getter = isIndoorUserLocationVisible) BOOL indoorUserLocationVisible;

/**
 A Boolean value indicating whether the map should try to display the user’s indoor location. In order to display the user's indoor location, a `PWLocationManager` object must be registered with the map view.
 
 @discussion This property only indicates whether the map view should try to display the user's indoor position, not whether the user’s indoor position is actually visible on the map. Setting this property to 'YES' causes the map view to use the specified `PWLocationManager` object to find the current indoor location and to try displaying it on the map. As long as this property is 'YES', the map view will continue to track the user’s indoor location and update it periodically. The default value of this property is 'NO'.
 
 Showing the user’s indoor location does not guarantee that the location is visible on the map. The user might have scrolled the map to a different point, causing the current location to be offscreen. To determine whether the user’s location is currently displayed on the map, use the `indoorUserLocationVisible` property.
 
 When setting this property to `NO` follow `PWTrackingMode` will be set to `PWTrackingModeNone`.
 */

@property (nonatomic) BOOL showsIndoorUserLocation;

/**
 The object representing the user’s current indoor location. (read-only)
 @discussion If blue dot smoothing is active, this property will report a calculated position and will thus be very volatile.
 */
@property (nonatomic, readonly) PWUserLocation *indoorUserLocation;

/**
 The mode used to track the user's indoor location.
 @discussion Possible values are described in `PWTrackingMode`. It's important to note that this property replaces the `userTrackingMode` property of type `MKUserTrackingMode` on `MKMapView`. Setting this value will have no effect if an indoor location manager has not been registered with the map view.
 
 Setting the tracking mode to `PWTrackingModeFollow` or `PWTrackingModeFollowWithHeading` causes the map view to center the map on that location and (optionally) orient the map with fixed north. If the map is zoomed out, the map view automatically zooms in on the user’s location, effectively changing the current visible region.
 */
@property (nonatomic) PWTrackingMode trackingMode;

/**
 Determines whether or not blue dot smoothing is used to provide a better visual experience when displaying the user's location.
 @discussion When based on information supplied by location providers, normal blue dot behavior is "jumpy" because location updates are received several times per second (at most). This feature "conditions" the user's reported location by first using a rolling average of the reported locations, then interpolating between average locations. This feature is turned on by default.
 */
@property (nonatomic) BOOL blueDotSmoothingEnabled;

/**
 Determines the route snapping behavior of the user's displayed location.
 @discussion This value is only used while in routing mode and is used to configure the route snapping feature. The possible values of this property are as follows:
 
 - PWRouteSnappingOff: no route snapping will be performed at all
 - PWRouteSnapToleranceNormal: the user's location will be "snapped" to the nearest point on the route if the route is within the horizontal accuracy of the location being used (this is the default value)
 - PWRouteSnapToleranceMedium: the user's location will be "snapped" to the nearest point on the route if the route is within 1.5 times the horizontal accuracy of the location being used
 - PWRouteSnapToleranceHigh: the user's location will be "snapped" to the nearest point on the route if the route is within twice (2.0 times) the horizontal accuracy of the location being used
 */
@property (nonatomic) PWRouteSnapTolerance routeSnappingTolerance;

/**
 Determines whether or not the point-of-interest(`PWPointOfInterest`, `PWCustomPointOfInterest` and `PWCustomLocation`) is able to be customized.
 @discussion The SDK shows all the internal annotations without asking for their annotation views by calling `- mapView: viewForAnnotation:`, those internal annotation types includes: `PWPointOfInterest`, `PWCustomPointOfInterest` and `PWCustomLocation`.
 
 If `pointOfInterestCustomizingEnabled` is set to `YES`, you are responsible to provide annotation views for the point-of-interests by implementing `- mapView: viewForAnnotation:`, but it will keep using the one provided by SDK if you don't or provide an invalid one. This feature is turned off by default.
 */
@property (nonatomic) BOOL pointOfInterestCustomizingEnabled;

/**
 A property to access the map view user tracking bar button.
 */
@property (nonatomic) UIBarButtonItem *userTrackingBarButtonItem;

/**
 A reference to the dropped pin location.
 */
@property (nonatomic) PWCustomLocation *customLocation;

/**
 The display name when sharing location
 */
@property(nonatomic, strong) NSString *sharedLocationDisplayName;

/**
 The user type when sharing location
 */
@property(nonatomic, strong) NSString *sharedLocationUserType;

#pragma mark - Initializing a Map View Object

/**
 Initializes and returns a newly allocated map view object with the specified frame rectangle.
 @discussion After initialization you can set `building` property or call `loadBuilding: onCompletion:` to display the building on the map. If you choose to load with `loadBuilding: onCompletion:` you will get result from the completion block once it's done. And no matter whichever you choose, the delegate will receive a `mapView:didFinishLoadingBuilding:error:`.
 @param frame The frame rectangle for the view, measured in points. The origin of the frame is relative to the superview in which you plan to add it. This method uses the frame rectangle to set the center and bounds properties accordingly.
 @return A new `PWMapView` object.
 */
- (instancetype)initWithFrame:(CGRect)frame;

/**
 Allows you to change the building displayed in the map view to the specified building identifier.
 @discussion Proper use of this method will kick off by fetching the building data, points of interest and assets and display the building indoor map. This data will then be cached and displayed in the `PWMapView`.
 @param building The building to load into the `PWMapView`.
 @param animated Animate the camera zoom into the `PWMapView`.
 @param completion A block to indicate if the building is successfully displayed or not.
 */
- (void)setBuilding:(PWBuilding *)building animated:(BOOL)animated onCompletion:(void (^)(NSError *error))completion;

#pragma mark - Displaying the Users Indoor Location

/**
 Sets the mode used to track the user's indoor location with optional animation. This method will have no effect if an indoor location manager has not been registered with the map view.
 @param trackingMode The mode used to track the user's location. Possible values are described in `PWTrackingMode`.
 @param animated If `YES`, the new mode is animated; otherwise, it is not. This parameter affects only tracking mode changes. Changes to the user's indoor location or heading are always animated.
 @discussion Setting the tracking mode to `PWTrackingModeFollow` or `PWTrackingModeFollowWithHeading` causes the map view to center the map on that location. If the map is zoomed out, the map view automatically zooms in on the user’s indoor location, effectively changing the current visible region.
 */
- (void)setTrackingMode:(PWTrackingMode)trackingMode animated:(BOOL)animated;

/**
 Register an indoor location manager provider with the map view. This location provider is used when modifying the `indoorUserTrackingMode` or when `showsIndoorUserLocation` is set to `YES`.
 @param locationManager The location manager to register with the map view. The location manager must conform to the `PWLocationManager` protocol.
 */
- (void)registerLocationManager:(id<PWLocationManager>)locationManager;

/**
 Unregister any indoor location manager provider that is registered with the map view.
 @discussion If the user's location is being displayed, it will not be hidden.
 */
- (void)unregisterLocationManager;

/**
 Notify a PWMapView instance that it is appearing onscreen in a view controller.
 @discussion This method must be called by all view controllers that display a PWMapView instance. It allows the map view to initiate processes related to location tracking and may be used for future enhancements. The call must be made during the view controller's `-viewWillAppear:` implementation.
 */
- (void)willAppear;

/**
 Notifies a PWMapView instance that it no longer appears onscreen in a view controller.
 @discussion This method must be called by all view controllers that display a PWMapView instance. It allows the map view to throttle down processes related to location tracking and may be used for future enhancements. The call must be made during the view controller's `-viewDidDisappear:` implementation.
 */
- (void)didDisappear;


#pragma mark - Displaying a Route

/**
 Load a `PWRoute` object into the map view. This method will plot a basic route line on the map view. The route object must not be `nil`.
 @param route The `PWRoute` object to display in the map view.
 */
- (void)navigateWithRoute:(PWRoute *)route;

/**
 Display the specified `PWRouteInstruction` on the map. If needed, this will change the current floor to the required floor for the instruction.
 @param instruction The `PWRouteInstruction` to display.
 @discussion This method will not reposition the map to display the instruction
 */
- (void)setRouteManeuver:(PWRouteInstruction *)instruction;

/**
 Display the specified `PWRouteInstruction` on the map and animates to its position. If needed, this will change the current floor to the required floor for the instruction.
 @param instruction The `PWRouteInstruction` to display.
 @param animated Specify `YES` if you want the map view to animate the transition to the new instruction.
 */
- (void)setRouteManeuver:(PWRouteInstruction *)instruction animated:(BOOL)animated;

/**
 Returns the current `PWRouteInstruction` being displayed. If no route is displayed, this method will return `nil`.
 @return The current `PWRouteInstruction`. Can be `nil` if no `PWRoute` is loaded or if turn-by-turn routing is not being used.
 */
- (PWRouteInstruction*)currentRouteInstruction;

/**
 Cancel the route displayed in the map view. This method will remove the route from the map view and set the `PWRoute` and `PWRouteStep` properties to `nil`.
 */
- (void)cancelRouting;

#pragma mark - Location Sharing

/**
 *  Starts sharing the user's current location
 */
- (void)startSharingUserLocation;

/**
 *  Starts retrieving other user's shared locations
 */
- (void)startRetrievingSharedLocations;

/**
 *  Stops sharing the user's current location
 */
- (void)stopSharingUserLocation;

/**
 *  Stops retrieving other user's shared locations
 */
- (void)stopRetrievingSharedLocations;

#pragma mark - Deprecated

/**
 *  The resolution of current map view.
 */
@property(nonatomic, readonly) NSInteger zoomLevel __deprecated;

/**
 *  Positions the map to the supplied center coordinate with the given zoom level and optional animation.
 *
 *  @param centerCoordinate A CLLocationCoordinate2D object representing the latitude an longitude the map should zoom to.
 *  @param zoomLevel        A NSUInteger value representing zoom level the map should zoom to.
 *  @param animated         A BOOL property to determine whether the change of map's center should be animated or not.
 *  @discussion Please change to use any of `- setCamera: animated:`, `- setRegion: animated:`, `- setVisibleMapRect: animated:` and `- setVisibleMapRect: edgePadding: animated:` instead.
 */
- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate zoomLevel:(NSUInteger)zoomLevel animated:(BOOL)animated __deprecated;

/**
 A convenient method to set current floor, it's working exactly the same as `setCurrentFloor:`.
 @param floor A `PWFloor` object you want to set.
 */
- (void)setFloor:(PWFloor *)floor __deprecated;

/**
 *  Starts heading updates that may be received from the PWMapViewDelegate.
 *  @discussion You will receive heading update when `follow me with heading` tracking mode is on, or use `CLLocationManager` and manage by yourself.
 */
- (void)startUpdatingHeading __deprecated;

/**
 *  Stops heading updates. Causes didUpdateHeading in PWMapViewDelegate to stop firing.
 */
- (void)stopUpdatingHeading __deprecated;

/**
 *  Repositions the map's view to a custom location.
 *  @param location A custom location reference where the map should navigate to.
 *  @discussion You can adjust the camera to focus on the custom location.
 */
- (void)navigateToCustomLocation:(PWCustomLocation *)location __deprecated;

/**
 *  Repositions the map's view to an specific point-of-interest.
 *  @param poi A point-of-interest reference where the map should navigate to.
 *  @discussion You can adjust the camera to focus on the point-of-interest.
 */
- (void)navigateToPointOfInterest:(PWPointOfInterest *)poi __deprecated;

/**
 *  Returns the annotation view of a PointOfInterest.
 *
 *  @param poi The point-of-interest. This parameter must not be nil.
 *  @discussion Please change to use `-viewForAnnotation:` instead.
 */
- (PWBuildingAnnotationView *)viewForPointOfInterest:(PWPointOfInterest *)poi __deprecated;

/**
 *  Displays the array of Points of Interest, causing the map view to zoom in/out to contain all of the points of interest.
 *  @param pois An array of PWPointOfInterest objects that should be displayed on the map.
 *  @discussion Please change to use `-showAnnotations:animated:` instead.
 */
- (void)showPointsOfInterest:(NSArray *)pois __deprecated;

/**
 *  Selects a PointOfInterest on the map.
 *  @param poi              A PointOfInterest to select on the map.
 *  @param animated         A BOOL property to determine whether the change of map's region should be animated or not.
 *  @discussion Please change to use `-selectAnnotations:animated:` instead.
 */
- (void)selectPointOfInterest:(PWPointOfInterest *)poi animated:(BOOL)animated __deprecated;

/**
 *  Deselects a PointOfInterest on the map.  If the POI is not selected, this method does nothing
 *  @param poi              A PointOfInterest to deselect on the map.
 *  @param animated         A BOOL property to determine whether the change of map's region should be animated or not.
 *  @discussion Please change to use `-deselectAnnotations:animated:` instead.
 */
- (void)deselectPointOfInterest:(PWPointOfInterest *)poi animated:(BOOL)animated __deprecated;

@end
