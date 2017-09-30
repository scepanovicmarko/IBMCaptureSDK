//
//  ICPObjectTypeStatus.h
//  IBMCaptureSDK
//
//  Copyright(c) 2016 IBM Corporation. All rights reserved.
//

#ifndef ICPObjectTypeStatus_h
#define ICPObjectTypeStatus_h

typedef NS_ENUM(NSUInteger, ICPObjectTypeStatus) {
    ICPObjectTypeStatusAvailable = 0,
    ICPObjectTypeStatusHidden = -1,
    ICPObjectTypeStatusForbidden = -2
};

#endif /* ICPObjectTypeStatus_h */
