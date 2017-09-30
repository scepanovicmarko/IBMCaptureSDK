//
//  ICPBarcodeHint.h
//  IBMCaptureSDK
//
//  Copyright(c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ICPBarcode.h"

@interface ICPBarcodeHint : NSObject

/**
 *  The barcode type
 */
@property (nonatomic, assign, readonly) ICPBarcodeType type;

/**
 *  The barcode orientation
 */
@property (nonatomic, assign, readonly) ICPBarcodeOrientation orientation;

/**
 *  The barcode rect
 */
@property (nonatomic, assign, readonly) CGRect rect;

/**
 *  Create a barcode hint
 *
 *  @param rect        The zone is which the barcode should be located
 *  @param type        The type of the barcode, will help for faster recognition
 *  @param orientation The orientation of the barcode
 *
 *  @return The barcode hint
 */
+ (instancetype)barcodeHintWithRect:(CGRect)rect barcodeType:(ICPBarcodeType)type barcodeOrientation:(ICPBarcodeOrientation)orientation;

@end
