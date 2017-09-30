//
//  ICPIDField.h
//  IBMCaptureSDK
//
//  Copyright © 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ICPIDField : NSObject

@property (nonatomic, assign, readonly) BOOL checked;
@property (nonatomic, strong, readonly) NSNumber *confidence;
@property (nonatomic, strong, readonly) NSString *value;

- (instancetype) init NS_UNAVAILABLE;
+ (instancetype) empty;
- (instancetype) initWithValue:(NSString *)value
                    confidence:(NSNumber *)confidence
                       checked:(BOOL)checked;

@end

NS_ASSUME_NONNULL_END
