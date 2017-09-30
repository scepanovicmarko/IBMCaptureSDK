//
//  ICPIDProcessor.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ICPOcrEngine, ICPPage, ICPIDData;
@class ICPMRZData;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ICPIDProcessorIDType){
    ICPIDProcessorIDTypeMRZ2Lines = 0,
    ICPIDProcessorIDTypeMRZ3Lines,
    ICPIDProcessorIDTypeUSADrivingLicense,
    ICPIDProcessorIDTypeFrenchIDCard
};

/**
 Block used to report the data read from a passport image
 
 @param mrzString   The mrz string found in the image
 @param mrzData     The mrz information extracted from the string
 
 @see ICPMRZData
 */
typedef void(^ICPIDProcessorPassportImageCompletion)(NSString * _Nullable mrzString, ICPMRZData * _Nullable mrzData);

/**
 Block used to report the data read from a passport page
 
 @param mrzString   The mrz string found in the image
 @param page        The page filled with the MRZ data
 */
typedef void(^ICPIDProcessorPassportPageCompletion)(NSString * _Nullable mrzString, id<ICPPage> _Nonnull page);

typedef void(^ICPIDProcessorIDImageCompletion)(id<ICPIDData> _Nullable data);
typedef void(^ICPIDProcessorIDPageCompletion)(id<ICPIDData> _Nullable data, id<ICPPage> page);

/**
 The ICPIDProcessor is responsable for, given an image and a type, extract the ID informations
 */
@interface ICPIDProcessor : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 The ICPIDProcessor is responsable for, given an image and a type, extract the ID informations
 
 @param ocrEngine Engine used to recognize texts
 
 @see ICPOcrEngine
 */
- (instancetype)initWithOCREngine:(id<ICPOcrEngine>)ocrEngine NS_DESIGNATED_INITIALIZER;

/**
 *  Extract the ICPIDData from an UIImage
 *
 *  @param  idImage     UIImage with the ID barcode or MRZ string
 *  @param  type        The type of ID
 *  @param  completion  Completion block called once the operation is done
 *
 *  @see ICPIDProcessorIDType for the valid list
 */
- (void)processIDImage:(UIImage *)idImage
                ofType:(ICPIDProcessorIDType)type
        withCompletion:(ICPIDProcessorIDImageCompletion)completion;

/**
 *  Extract the ICPIDData from an ICPPage without knowing the specific id type in the images
 *
 *  @param  page        ICPPage with the image of ID barcode or MRZ string
 *  @param  completion  Completion block called once the operation is done
 *
 *  @see ICPIDProcessorIDType for the valid list
 */
- (void)processIDPage:(id<ICPPage>)page
       withCompletion:(ICPIDProcessorIDPageCompletion)completion;

/**
 *  Extract the ICPIDData from an ICPPage
 *
 *  @param  page        ICPPage with the image of ID barcode or MRZ string
 *  @param  type        The type of ID
 *  @param  completion  Completion block called once the operation is done
 *
 *  @see ICPIDProcessorIDType for the valid list
 */
- (void)processIDPage:(id<ICPPage>)page
               ofType:(ICPIDProcessorIDType)type
       withCompletion:(ICPIDProcessorIDPageCompletion)completion;

/**
 Method used to process an image of a passport and extract the MRZ information.
 
 @param passport    The image with the photo of a passport, where the mrz string must be visible
 @param completion  The block that will be called once the operation is completed
 
 
 
 @see ICPMRZDecoder
 */
- (void)processPassportImage:(UIImage *)passport
              withCompletion:(ICPIDProcessorPassportImageCompletion)completion DEPRECATED_MSG_ATTRIBUTE("Deprecated. Use processIDImage:ofType:withCompletion: instead");

/**
 Method used to process an image of a passport and extract the MRZ information.
 
 @param page        The ICPPage with the photo of a passport, where the mrz string must be visible
 @param completion  The block that will be called once the operation is completed
 
 @see ICPMRZDecoder
 */
- (void) processPassportPage:(id<ICPPage>)page
              withCompletion:(ICPIDProcessorPassportPageCompletion)completion DEPRECATED_MSG_ATTRIBUTE("Deprecated. Use processIDPage:ofType:withCompletion: instead");

@end

NS_ASSUME_NONNULL_END
