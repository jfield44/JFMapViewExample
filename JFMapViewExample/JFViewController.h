//
//  JFViewController.h
//  JFMapViewExample
//
//  Created by Jonathan Field on 15/09/2013.
//  Copyright (c) 2013 Jonathan Field. All rights reserved.
//  http://jonathanfield.me
//

/*
 JFMapViewExample is a simple tutorial that will show you how to interact with an MKMapView. Specifically adding a pin to the map and batch adding a list of annoations to the map from a file that is saved in the local directory.
 */

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "JFMapAnnotation.h"

@interface JFViewController : UIViewController <MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)addCitiesToMap:(id)sender;
- (void)addGestureRecogniserToMapView;
- (void)addPinToMap:(UIGestureRecognizer *)gestureRecognizer;
- (NSMutableArray *)parseJSONCities;

@end
