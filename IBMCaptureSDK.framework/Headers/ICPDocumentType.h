//
//  ICPDocumentType.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import "ICPObjectType.h"
#import "ICPPageType.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ICPPageType;

/** ICPDocumentType is a protocol for the document type. */
@protocol ICPDocumentType <ICPObjectType>

/** An array of pageTypes avalaible for this document type. */
@property (nonatomic, strong) NSArray<id<ICPPageType> > *pageTypes;

/** A flag to indicate if the document have a MRZ string */
@property (nonatomic, assign, readonly) BOOL mrzDocument;

@end

NS_ASSUME_NONNULL_END
