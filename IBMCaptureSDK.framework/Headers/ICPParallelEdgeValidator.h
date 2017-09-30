//
//  ICPParallelEdgeValidator.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICPEdgeValidator.h"

@interface ICPParallelEdgeValidator : NSObject <ICPEdgeValidator>

@property (nonatomic, assign) CGFloat rotationAngleAllowance;

- (instancetype) initWithRotationAngleAllowance:(CGFloat)angleAllowance NS_DESIGNATED_INITIALIZER;

@end
