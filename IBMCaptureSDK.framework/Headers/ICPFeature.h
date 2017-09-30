//
//  ICPFeature.h
//  IBMCaptureUISDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreImage/CIFeature.h>

typedef struct ICPFeature {
    CGRect bounds;
    CGPoint topLeft, topRight, bottomLeft, bottomRight;
    BOOL valid;
    BOOL isNil;
    BOOL textFeature;

} ICPFeature;

static inline BOOL ICPFeatureIsValid(ICPFeature feature)
{
    if (feature.bounds.size.width == 0 && feature.bounds.size.width == 0) {
        return NO;
    }
    
    if ((feature.topLeft.x == 0 && feature.topLeft.y == 0) &&
        (feature.topRight.x == 0 && feature.topRight.y == 0) &&
        (feature.bottomLeft.x == 0 && feature.bottomLeft.y == 0) &&
        (feature.bottomRight.x == 0 && feature.bottomRight.y == 0)) {
        return NO;
    }
    
    return YES;
}

/**
 @param points  4 points that represent the feature bounds
 
 @return The points ordered as topLeft, topRight, bottomLeft, bottomRight. Or the original array if the input doesn't have 4 CGPoint values
 */
static inline NSArray<NSValue *>* ICPFeatureOrderFeaturePoints(NSArray<NSValue *>* points)
{
    if (points.count != 4) {
        return points;
    }
    
    NSArray<NSValue *> *orderedByX = [points sortedArrayUsingComparator:^NSComparisonResult(NSValue*  _Nonnull obj1, NSValue*  _Nonnull obj2) {
        CGPoint point1 = [obj1 CGPointValue];
        CGPoint point2 = [obj2 CGPointValue];
        
        if (point1.x == point2.x) {
            return NSOrderedSame;
        } else if (point1.x < point2.x) {
            return NSOrderedAscending;
        } else {
            return NSOrderedDescending;
        }
    }];
    
    CGPoint topLeft = [[orderedByX objectAtIndex:0] CGPointValue];
    CGPoint bottomLeft = [[orderedByX objectAtIndex:1] CGPointValue];
    CGPoint topRight = [[orderedByX objectAtIndex:2] CGPointValue];
    CGPoint bottomRight = [[orderedByX objectAtIndex:3] CGPointValue];
    
    if (topLeft.y < bottomLeft.y) {
        CGPoint temp = topLeft;
        topLeft = bottomLeft;
        bottomLeft = temp;
    }
    
    if (topRight.y < bottomRight.y) {
        CGPoint temp = topRight;
        topRight = bottomRight;
        bottomRight = temp;
    }
    
    return @[[NSValue valueWithCGPoint:topLeft],
             [NSValue valueWithCGPoint:topRight],
             [NSValue valueWithCGPoint:bottomLeft],
             [NSValue valueWithCGPoint:bottomRight]];
}

static inline NSArray<NSValue *> *ICPFeatureCleanNegativePoints(NSArray<NSValue *> *points, CGRect bounds)
{
    NSMutableArray<NSValue *> *cleanPoints = [[NSMutableArray alloc] initWithCapacity:points.count];
    
    for (NSValue *value in points) {
        CGPoint point = [value CGPointValue];
        point.x = (point.x < 0 ? 0 : point.x);
        point.y = (point.y < 0 ? 0 : point.y);
        
        CGFloat xLimit = (bounds.origin.x + bounds.size.width);
        point.x = (point.x > xLimit ? xLimit : point.x);
        
        CGFloat yLimit = (bounds.origin.y + bounds.size.height);
        point.y = (point.y > yLimit ? yLimit : point.y);
        
        NSValue *newValue = [NSValue valueWithCGPoint:point];
        [cleanPoints addObject:newValue];
    }
    
    return [NSArray arrayWithArray:cleanPoints];
}

static inline ICPFeature ICPFeatureMake(
    CGPoint topLeft, CGPoint topRight, CGPoint bottomRight, CGPoint bottomLeft, BOOL valid, BOOL textFeature, CGRect bounds)
{
    
    NSArray<NSValue *> *values = @[[NSValue valueWithCGPoint:topLeft],
                                   [NSValue valueWithCGPoint:topRight],
                                   [NSValue valueWithCGPoint:bottomLeft],
                                   [NSValue valueWithCGPoint:bottomRight]];
    
    values = ICPFeatureOrderFeaturePoints(values);
    
    ICPFeature feature;
    feature.topLeft = [[values objectAtIndex:0] CGPointValue];
    feature.topRight = [[values objectAtIndex:1] CGPointValue];
    feature.bottomLeft = [[values objectAtIndex:2] CGPointValue];
    feature.bottomRight = [[values objectAtIndex:3] CGPointValue];
    feature.isNil = CGPointEqualToPoint(topLeft, CGPointZero) && CGPointEqualToPoint(topRight, CGPointZero) &&
        CGPointEqualToPoint(bottomRight, CGPointZero) && CGPointEqualToPoint(bottomLeft, CGPointZero);
    feature.valid = valid && feature.isNil == NO;
    feature.textFeature = textFeature;
    feature.bounds = bounds;
    return feature;
}

static inline ICPFeature ICPFeatureZero()
{
    return ICPFeatureMake(CGPointZero, CGPointZero, CGPointZero, CGPointZero, NO, NO, CGRectZero);
}

static inline ICPFeature ICPFeatureMakeFromRect(CGRect rect, BOOL valid, BOOL textFeature)
{

    CGPoint topLeft = rect.origin;
    CGPoint topRight = CGPointMake(rect.origin.x + rect.size.width, rect.origin.y);
    CGPoint bottomLeft = CGPointMake(rect.origin.x, rect.origin.y + rect.size.height);
    CGPoint bottomRight = CGPointMake(rect.origin.x + rect.size.width, rect.origin.y + rect.size.height);

    return ICPFeatureMake(
        topLeft, topRight, bottomRight, bottomLeft, valid, textFeature, CGRectMake(0, 0, rect.size.width, rect.size.height));
}

static inline CGRect ICPFeatureBoundsForPoints(CGPoint topLeft, CGPoint topRight, CGPoint bottomLeft, CGPoint bottomRight)
{
    CGFloat minorX = topLeft.x < bottomLeft.x ? topLeft.x : bottomLeft.x;
    CGFloat minorY = bottomLeft.y < bottomRight.y ? bottomLeft.y : bottomRight.y;
    CGFloat majorX = topRight.x > bottomRight.x ? topRight.x : bottomRight.x;
    CGFloat majorY = topLeft.y > topRight.y ? topLeft.y : topRight.y;
    
    if (minorX > majorX) {
        CGFloat temp = minorX;
        minorX = majorX;
        majorX = temp;
    }
    
    if (minorY > majorY) {
        CGFloat temp = minorY;
        minorY = majorY;
        majorY = temp;
    }
    
    CGRect bounds = CGRectMake(minorX, minorY, majorX - minorX, majorY - majorX);
    return bounds;
}

static inline ICPFeature ICPFeatureMakeFromRectangleFeature(CIRectangleFeature *rectangleFeature, BOOL valid)
{
    CGPoint topLeft = rectangleFeature.topLeft;
    CGPoint topRight = rectangleFeature.topRight;
    CGPoint bottomRight = rectangleFeature.bottomRight;
    CGPoint bottomLeft = rectangleFeature.bottomLeft;
    
    CGRect bounds = ICPFeatureBoundsForPoints(topLeft, topRight, bottomLeft, bottomRight);
    
    return ICPFeatureMake(topLeft,
                          topRight,
                          bottomRight,
                          bottomLeft,
                          valid,
                          NO,
                          bounds);
}

static inline ICPFeature ICPFeatureMakeFromFeature(CIFeature *feature, BOOL valid)
{
    CGPoint topLeft = CGPointZero;
    CGPoint topRight = CGPointZero;
    CGPoint bottomLeft = CGPointZero;
    CGPoint bottomRight = CGPointZero;
    
    BOOL isTextFeature = NO;
    
    if ([feature isKindOfClass:[CIRectangleFeature class]]) {
        CIRectangleFeature *rectangleFeature = (CIRectangleFeature *)feature;
        topLeft = rectangleFeature.topLeft;
        topRight = rectangleFeature.topRight;
        bottomRight = rectangleFeature.bottomRight;
        bottomLeft = rectangleFeature.bottomLeft;
    } else if ([feature isKindOfClass:[CITextFeature class]]) {
        CITextFeature *textFeature = (CITextFeature *)feature;
        topLeft = textFeature.topLeft;
        topRight = textFeature.topRight;
        bottomLeft = textFeature.bottomLeft;
        bottomRight = textFeature.bottomRight;
        isTextFeature = YES;
    } else if ([feature isKindOfClass:[CIQRCodeFeature class]]) {
        CIQRCodeFeature *qrCodeFeature = (CIQRCodeFeature *)feature;
        topLeft = qrCodeFeature.topLeft;
        topRight = qrCodeFeature.topRight;
        bottomLeft = qrCodeFeature.bottomLeft;
        bottomRight = qrCodeFeature.bottomRight;
    }
    
    CGRect bounds = ICPFeatureBoundsForPoints(topLeft, topRight, bottomLeft, bottomRight);
    
    return ICPFeatureMake(topLeft,
                          topRight,
                          bottomRight,
                          bottomLeft,
                          valid,
                          isTextFeature,
                          bounds);
}
