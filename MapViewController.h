//
//  MapViewController.h
//  BestBikeShareAppEverBro
//
//  Created by Hemant V. Torsekar on 2015-05-04.
//  Copyright (c) 2015 Hemant V. Torsekar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewController : UITabBarController<MKMapViewDelegate>

@property (strong, nonatomic) MKMapView *mapView;

@property(nonatomic) BOOL showsUserLocation;

@end
