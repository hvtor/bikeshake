//
//  MapViewController.h
//  BestBikeShareAppEverBro
//
//  Created by Hemant V. Torsekar on 2015-05-04.
//  Copyright (c) 2015 Hemant V. Torsekar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)


@interface MapViewController : UITabBarController<MKMapViewDelegate,CLLocationManagerDelegate>

@property (strong, nonatomic) MKMapView *mapView;

@property (strong, nonatomic) CLLocationManager *locationManager;

@end
