//
//  ICPIDData.h
//  IBMCaptureSDK
//
//  Copyright © 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ICPIDField;

NS_ASSUME_NONNULL_BEGIN

@protocol ICPIDData

@property (nonatomic, strong, readonly) ICPIDField *documentCountry;
@property (nonatomic, strong, readonly) ICPIDField *documentNumber;
@property (nonatomic, strong, readonly) ICPIDField *documentExpirationDate;
@property (nonatomic, strong, readonly) ICPIDField *sex;
@property (nonatomic, strong, readonly) ICPIDField *birthdate;
@property (nonatomic, strong, readonly) ICPIDField *firstName;
@property (nonatomic, strong, readonly) ICPIDField *surname;
@property (nonatomic, assign, readonly) BOOL checked;

@end

NS_ASSUME_NONNULL_END
