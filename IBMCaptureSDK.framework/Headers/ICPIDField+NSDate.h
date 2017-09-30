//
//  ICPMRZField+NSDate.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import "ICPIDField.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ICPIDFieldDateExtendedCountries) {
    ICPIDFieldDateExtendedCountriesUSA,
    ICPIDFieldDateExtendedCountriesCAN
};

@interface ICPIDField (NSDate)

- (NSDate * _Nullable)valueAsDate;
- (NSDate * _Nullable)extendedDateWithFormat:(NSString *) dateFormat;
- (NSDate * _Nullable)extendedDateForCountryCode:(NSString *)countryCode;
- (NSDate * _Nullable)extendedDateForCountry:(ICPIDFieldDateExtendedCountries)country;

@end

NS_ASSUME_NONNULL_END
