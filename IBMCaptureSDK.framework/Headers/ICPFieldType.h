//
//  ICPFieldType.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import "ICPObjectType.h"
#import "ICPBarcode.h"

NS_ASSUME_NONNULL_BEGIN

/** The ICPFieldType protocol represents the type of a field. */
@protocol ICPFieldType <ICPObjectType>

@property (nonatomic, assign, readonly) BOOL isBarcode;

@property (nonatomic, assign, readonly) ICPBarcodeType barcodeType;

@property (nonatomic, assign, readonly) ICPBarcodeOrientation barcodeOrientation;

@end

NS_ASSUME_NONNULL_END
