//
//  ICPDocumentType.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import "ICPObjectType.h"
#import "ICPPageType.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ICPDocumentValidationType) {
    ICPDocumentValidationTypeNone = 0,
    ICPDocumentValidationTypeSinglePage,
    ICPDocumentValidationTypeDoublePage,
};

@protocol ICPPageType;

/** ICPDocumentType is a protocol for the document type. */
@protocol ICPDocumentType <ICPObjectType>

/** An array of pageTypes avalaible for this document type. */
@property (nonatomic, strong) NSArray<id<ICPPageType> > *pageTypes;

/** Indicator if the document have page validation */
@property (nonatomic, assign, readonly) ICPDocumentValidationType documentValidationType;

/** Type id of the page where the decoded data need to be writen */
@property (nonatomic, strong, readonly, nullable) NSString *codePageType;

/** Type id of the page where the image used to validate will be stored */
@property (nonatomic, strong, readonly, nullable) NSString *stringDataPageType;

@end

NS_ASSUME_NONNULL_END
