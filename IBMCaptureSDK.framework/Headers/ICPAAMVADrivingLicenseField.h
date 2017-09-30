//
//  ICPAAMVAField.h
//  IBMCaptureSDK
//
//  Copyright © 2016 IBM Corporation. All rights reserved.
//

@import UIKit;
#import "ICPIDField.h"
#import "ICPAAMVADrivingLicenseFieldKey.h"
#import "ICPDrivingLicenseFieldType.h"

NS_ASSUME_NONNULL_BEGIN

@interface ICPAAMVADrivingLicenseField : ICPIDField

/** Associated key of the field */
@property (nonatomic, assign, readonly) ICPAAMVADrivingLicenseFieldKey key;
/** Type of the content of the value */
@property (nonatomic, assign, readonly) ICPDrivingLicenseFieldType type;
/** Indicator if the field is mandatory */
@property (nonatomic, assign, readonly) BOOL mandatory;

+ (instancetype) emptyFieldWithKey:(ICPAAMVADrivingLicenseFieldKey)key
                       asMandatory:(BOOL)mandatory;

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithKey:(ICPAAMVADrivingLicenseFieldKey)key
                       value:(NSString *)value
                        type:(ICPDrivingLicenseFieldType)type
                 asMandatory:(BOOL)mandatory
                  andChecked:(BOOL)checked;

- (instancetype) initWithKey:(ICPAAMVADrivingLicenseFieldKey)key
                       value:(NSString *)value
                        type:(ICPDrivingLicenseFieldType)type
                  confidence:(NSNumber *)confidence
                 asMandatory:(BOOL)mandatory
                  andChecked:(BOOL)checked NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
