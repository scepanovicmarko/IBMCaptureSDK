//
//  ICPPageType.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import "ICPObjectType.h"

NS_ASSUME_NONNULL_BEGIN

/** The ICPPageType protocol represents the page type. */
@protocol ICPPageType <ICPObjectType>

/** This the reference height returned in the DCO that was used to determine the field zones. It can be used to recalculate
 * field zones based on actual image size of the page captured */
@property (nonatomic, assign, readonly) double referencePageHeight;
/** This the reference width returned in the DCO that was used to determine the field zones. It can be used to recalculate
 * field zones based on actual image size of the page captured */
@property (nonatomic, assign, readonly) double referencePageWidth;
/**
 *  Returns YES if Page Type should allow Check Processing
 */
@property (nonatomic, assign, readonly) BOOL processChecks;

/**
 *  ISO country code that needs to be used in the process check operation
 */
@property (nonatomic, readonly, copy, nullable) NSString * checkCountryCode;

@end

NS_ASSUME_NONNULL_END
