//
//  ICPEdgeValidator.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <CoreGraphics/CGGeometry.h>
#import <IBMCaptureSDK/ICPFeature.h>

@protocol ICPEdgeValidator <NSObject>

- (BOOL) feature:(ICPFeature)feature
isValidforBounds:(CGRect)bounds;

- (BOOL) rect:(CGRect)rect
isValidForBounds:(CGRect)bounds;

@end
