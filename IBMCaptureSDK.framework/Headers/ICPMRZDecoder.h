//
//  ICPMRZDecoder.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef ICPMRZDecoderType_h
#define ICPMRZDecoderType_h
typedef NS_ENUM(NSUInteger, ICPMRZDecoderType) {
    ICPMRZDecoderType2Lines = 0,
    ICPMRZDecoderType3Lines,
    ICPMRZDecoderTypeFrenchIDCard
};
#endif

@protocol ICPIDData;

NS_ASSUME_NONNULL_BEGIN

/**
 THe ICPMRZDecoder is responsable for decoding an <a href="http://www.icao.int/Security/FAL/Documents/2.API%20Guidelines%202013%20Appendix%20I%20MRZ%20Details_E.pdf">machine readable passport</a> information.
 */
@interface ICPMRZDecoder:NSObject

+ (instancetype) decoderOfType:(ICPMRZDecoderType)type;

- (instancetype) init NS_UNAVAILABLE;

/**
 Method used to extract the MRZ information from a given string
 
 @param string      The input string from where the informations will be retrieved
 @param inputType   Flag to indicate the type of the input string
 @param confidence  Confidence of the input
 
 @return    An ICPMRZData with the information on the input string
 
 @see   ICPMRZData
 */
- (id<ICPIDData> _Nullable) decodeString:(NSString *)string
                       withMaxConfidence:(NSNumber *)confidence;

/** 
 Method used to extract the MRZ string from a bigger string
 
 @param input   String where the MRZ string is on.
 
 @return    A string with only the MRZ string
 */
- (NSString * _Nullable) extractMRZString:(NSString *)input;

@end

NS_ASSUME_NONNULL_END
