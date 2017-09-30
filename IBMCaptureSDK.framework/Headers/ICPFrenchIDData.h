//
//  ICPFrenchIDData.h
//  IBMCaptureSDK
//
//  Copyright(c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICPIDData.h"

@class ICPIDField;

@interface ICPFrenchIDData : NSObject <ICPIDData>

@property (nonatomic, strong, readonly) ICPIDField *documentCountry;
@property (nonatomic, strong, readonly) ICPIDField *documentNumber;
@property (nonatomic, strong, readonly) ICPIDField *documentExpirationDate;
@property (nonatomic, strong, readonly) ICPIDField *sex;
@property (nonatomic, strong, readonly) ICPIDField *birthdate;
@property (nonatomic, strong, readonly) ICPIDField *firstName;
@property (nonatomic, strong, readonly) ICPIDField *surname;
@property (nonatomic, strong, readonly) ICPIDField *department;
@property (nonatomic, strong, readonly) ICPIDField *office;
@property (nonatomic, assign, readonly) BOOL checked;

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithDocumentNumber:(ICPIDField *)documentNumber
                             department:(ICPIDField *)department
                                 office:(ICPIDField *)office
                         expirationDate:(ICPIDField *)expirationDate
                              firstName:(ICPIDField *)firstName
                                surname:(ICPIDField *)surname
                              birthdate:(ICPIDField *)birthdate
                                    sex:(ICPIDField *)sex
                             andChecked:(BOOL)checked NS_DESIGNATED_INITIALIZER;

@end
