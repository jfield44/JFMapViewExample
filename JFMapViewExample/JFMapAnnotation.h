//
//  JFMapAnnotation.h
//  JFMapViewExample
//
//  Created by Jonathan Field on 15/09/2013.
//  Copyright (c) 2013 Jonathan Field. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface JFMapAnnotation : NSObject <MKAnnotation>{
    
    NSString *title;
    NSString *subtitle;
    CLLocationCoordinate2D coordinate;
}

@property (nonatomic, copy) NSString * title;
@property (nonatomic, copy) NSString * subtitle;
@property (nonatomic, assign)CLLocationCoordinate2D coordinate;

@end
