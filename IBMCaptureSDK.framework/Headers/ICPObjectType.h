//
//  ICPObjectType.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICPObjectTypeStatus.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ICPFieldType;

/** ICPObjectType is a protocol that represents the object type. */
@protocol ICPObjectType <NSObject>

/** The type of the object. */
@property (nonatomic, strong, readonly) NSString *typeId;

/** An NSArray of available field types. */
@property (nonatomic, strong) NSArray<id<ICPFieldType> > *fieldTypes;

/** An NSDictionary with the values of the properties/variables */
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> *dcoDictionary;

/** The name to display */
@property (nonatomic, strong, readonly) NSString *displayName;

/** Helper to access the "Key" variable on the DCO object */
@property (nonatomic, strong, readonly) NSString *dcoKey;

/** Definition of the status of the type **/
@property (nonatomic, assign, readonly) ICPObjectTypeStatus status; 

@end

NS_ASSUME_NONNULL_END
