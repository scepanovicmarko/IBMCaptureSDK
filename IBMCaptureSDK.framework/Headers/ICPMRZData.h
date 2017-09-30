//
//  ICPMRZData.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICPIDData.h"
#import "ICPMRZField.h"

NS_ASSUME_NONNULL_BEGIN

@interface ICPMRZData : NSObject <ICPIDData>

@property (nonatomic, strong, readonly) ICPMRZField *type;
@property (nonatomic, strong, readonly) ICPMRZField *subType;
@property (nonatomic, strong, readonly) ICPMRZField *documentCountry;
@property (nonatomic, strong, readonly) ICPMRZField *nationality;
@property (nonatomic, strong, readonly) ICPMRZField *surname;
@property (nonatomic, strong, readonly) ICPMRZField *firstName;
@property (nonatomic, strong, readonly) ICPMRZField *sex;
@property (nonatomic, strong, readonly) ICPMRZField *birthdate;
@property (nonatomic, strong, readonly) ICPMRZField *documentExpirationDate;
@property (nonatomic, strong, readonly) ICPMRZField *documentNumber;
@property (nonatomic, strong, readonly) ICPMRZField *personalId;
@property (nonatomic, assign, readonly) BOOL checked;

@property (nonatomic, strong, readonly) ICPMRZField *passportExpirationDate DEPRECATED_MSG_ATTRIBUTE("Use documentExpirationDate instead.");
@property (nonatomic, strong, readonly) ICPMRZField *passportNumber DEPRECATED_MSG_ATTRIBUTE("Use documentNumber instead.");
@property (nonatomic, strong, readonly) ICPMRZField *givenName DEPRECATED_MSG_ATTRIBUTE("Use firstName instead.");
@property (nonatomic, strong, readonly) ICPMRZField *countryCode DEPRECATED_MSG_ATTRIBUTE("Use documentCountry instead.");

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithType:(ICPMRZField *)type
                     subType:(ICPMRZField *)subType
                 countryCode:(ICPMRZField *)countryCode
                 nationality:(ICPMRZField *)nationality
                     surname:(ICPMRZField *)surname
                   givenName:(ICPMRZField *)givenName
                         sex:(ICPMRZField *)sex
                   birthdate:(ICPMRZField *)birthdate
      documentExpirationDate:(ICPMRZField *)documentExpirationDate
              documentNumber:(ICPMRZField *)documentNumber
                  personalId:(ICPMRZField *)personalId NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
