//
//  NSCharacterSet+IBM.h
//  IBMCaptureSDK
//
//  Copyright(c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSCharacterSet (IBM)

- (NSArray<NSString *> *)ibm_characterArray;
- (NSString *)ibm_characterSequence;

@end
