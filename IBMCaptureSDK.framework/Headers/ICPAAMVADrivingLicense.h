//
//  ICPDrivingLicense.h
//  IBMCaptureSDK
//
//  Copyright © 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICPIDData.h"
#import "ICPAAMVADrivingLicenseFieldKey.h"

@class ICPAAMVADrivingLicenseField;

NS_ASSUME_NONNULL_BEGIN

@interface ICPAAMVADrivingLicense : NSObject <ICPIDData>

/** Flag to indicate if the driving license is expired or not */
@property (nonatomic, assign, readonly) BOOL expired;

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithFields:(NSArray<ICPAAMVADrivingLicenseField *> *)fields
                      validated:(BOOL)validated NS_DESIGNATED_INITIALIZER;

/** Retrieve any field from the license model */
- (ICPAAMVADrivingLicenseField * _Nullable) fieldForKey:(ICPAAMVADrivingLicenseFieldKey)key;

@end

NS_ASSUME_NONNULL_END
