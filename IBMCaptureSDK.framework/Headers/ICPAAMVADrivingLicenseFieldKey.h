//
//  ICPAAMVADrivingLicenseFieldKeys.h
//  IBMCaptureSDK
//
//  Copyright(c) 2016 IBM Corporation. All rights reserved.
//

#ifndef ICPAAMVADrivingLicenseFieldKey_h
#define ICPAAMVADrivingLicenseFieldKey_h

/**
 More information about the types on <a href="http://www.aamva.org/WorkArea/linkit.aspx?LinkIdentifier=id&ItemID=4435&libID=4412">DL/ID Card Design Standard (CDS)</a>
 */
typedef NS_ENUM(NSUInteger, ICPAAMVADrivingLicenseFieldKey) {

#pragma mark Mandatory Values
    
    /** Jurisdiction-specific vehicle class */
    ICPAAMVADrivingLicenseFieldKeyDCA = 0,
    /** Jurisdiction-specific restriction codes */
    ICPAAMVADrivingLicenseFieldKeyDCB,
    /** Jurisdiction-specific endorsement codes */
    ICPAAMVADrivingLicenseFieldKeyDCD,
    /** Document Expiration Date. (MMDDCCYY for U.S., CCYYMMDD for Canada) */
    ICPAAMVADrivingLicenseFieldKeyDBA,
    /** Customer Family Name */
    ICPAAMVADrivingLicenseFieldKeyDCS,
    /** Customer First Name */
    ICPAAMVADrivingLicenseFieldKeyDAC,
    /** Customer Middle Name(s) */
    ICPAAMVADrivingLicenseFieldKeyDAD,
    /** Document Issue Date. (MMDDCCYY for U.S., CCYYMMDD for Canada) */
    ICPAAMVADrivingLicenseFieldKeyDBD,
    /** Date of Birth. (MMDDCCYY for U.S., CCYYMMDD for Canada) */
    ICPAAMVADrivingLicenseFieldKeyDBB,
    /** Physical Description – Sex */
    ICPAAMVADrivingLicenseFieldKeyDBC,
    /** Physical Description – Eye Color */
    ICPAAMVADrivingLicenseFieldKeyDAY,
    /** Physical Description – Height */
    ICPAAMVADrivingLicenseFieldKeyDAU,
    /** Address – Street 1 */
    ICPAAMVADrivingLicenseFieldKeyDAG,
    /** Address – City */
    ICPAAMVADrivingLicenseFieldKeyDAI,
    /** Address – Jurisdiction Code */
    ICPAAMVADrivingLicenseFieldKeyDAJ,
    /** Address – Postal Code */
    ICPAAMVADrivingLicenseFieldKeyDAK,
    /** Customer ID Number */
    ICPAAMVADrivingLicenseFieldKeyDAQ,
    /** Document Discriminator */
    ICPAAMVADrivingLicenseFieldKeyDCF,
    /** Country Identification */
    ICPAAMVADrivingLicenseFieldKeyDCG,
    /** Family name truncation */
    ICPAAMVADrivingLicenseFieldKeyDDE,
    /** First name truncation */
    ICPAAMVADrivingLicenseFieldKeyDDF,
    /** Middle name truncation */
    ICPAAMVADrivingLicenseFieldKeyDDG,
    
#pragma mark Optional Values
    
    /** Address – Street 2 */
    ICPAAMVADrivingLicenseFieldKeyDAH,
    /** Customer Given Names */
    ICPAAMVADrivingLicenseFieldKeyDCT,
    /** Hair color */
    ICPAAMVADrivingLicenseFieldKeyDAZ,
    /** Place of birth */
    ICPAAMVADrivingLicenseFieldKeyDCI,
    /** Audit information */
    ICPAAMVADrivingLicenseFieldKeyDCJ,
    /** Inventory control number */
    ICPAAMVADrivingLicenseFieldKeyDCK,
    /** Alias / AKA Family Name */
    ICPAAMVADrivingLicenseFieldKeyDBN,
    /** Alias / AKA Given Name */
    ICPAAMVADrivingLicenseFieldKeyDBG,
    /** Alias / AKA Suffix Name */
    ICPAAMVADrivingLicenseFieldKeyDBS,
    /** Name Suffix:
     Name Suffix (If jurisdiction participates in systems requiring name suffix (PDPS, CDLIS, etc.), the suffix must be collected and displayed on the DL/ID and in the MRT). Collect full name for record, print as many characters as possible on portrait side of DL/ID.
     JR (Junior)
     SR (Senior)
     1ST or I (First)
     2ND or II (Second)
     3RD or III (Third)
     4TH or IV (Fourth)
     5TH or V (Fifth)
     6TH or VI (Sixth)
     7TH or VII (Seventh)
     8TH or VIII (Eighth)
     9TH or IX (Ninth)*/
    ICPAAMVADrivingLicenseFieldKeyDCU,
    /** Physical Description – Weight Range:
     Indicates the approximate weight range of the cardholder:
     0 = up to 31 kg (up to 70 lbs)
     1 = 32 – 45 kg (71 – 100 lbs)
     2 = 46 - 59 kg (101 – 130 lbs)
     3 = 60 - 70 kg (131 – 160 lbs)
     4 = 71 - 86 kg (161 – 190 lbs)
     5 = 87 - 100 kg (191 – 220 lbs) 
     6 = 101 - 113 kg (221 – 250 lbs) 
     7 = 114 - 127 kg (251 – 280 lbs) 
     8 = 128 – 145 kg (281 – 320 lbs) 
     9 = 146+ kg (321+ lbs)*/
    ICPAAMVADrivingLicenseFieldKeyDCE,
    /** Race / ethnicity:
     Codes for race or ethnicity of the cardholder, as defined in ANSI D20.*/
    ICPAAMVADrivingLicenseFieldKeyDCL,
    /** Standard vehicle classification:
     Standard vehicle classification code(s) for cardholder. This data element is a placeholder for future efforts to standardize vehicle classifications.*/
    ICPAAMVADrivingLicenseFieldKeyDCM,
    /** Standard endorsement code:
     Standard endorsement code(s) for cardholder. See codes in D20. This data element is a placeholder for future efforts to standardize endorsement codes.*/
    ICPAAMVADrivingLicenseFieldKeyDCN,
    /** Standard restriction code:
     Standard restriction code(s) for cardholder. See codes in D20. This data element is a placeholder for future efforts to standardize restriction codes.*/
    ICPAAMVADrivingLicenseFieldKeyDCO,
    /** Jurisdiction- specific vehicle classification description */
    ICPAAMVADrivingLicenseFieldKeyDCP,
    /** Jurisdiction- specific endorsement code description */
    ICPAAMVADrivingLicenseFieldKeyDCQ,
    /** Jurisdiction- specific restriction code description */
    ICPAAMVADrivingLicenseFieldKeyDCR,
    /** Compliance Type:
     DHS required field that indicates compliance: “M” = materially compliant; “F” = fully compliant; and, “N” = non-compliant.*/
    ICPAAMVADrivingLicenseFieldKeyDDA,
    /** Card Revision Date:
     DHS required field that indicates date of the most recent version change or modification to the visible format of the DL/ID (MMDDCCYY for U.S., CCYYMMDD for Canada)
     */
    ICPAAMVADrivingLicenseFieldKeyDDB,
    /** HAZMAT Endorsement Expiration Date:
     Date on which the hazardous material endorsement granted by the document is no longer valid. (MMDDCCYY for U.S., CCYYMMDD for Canada)
     */
    ICPAAMVADrivingLicenseFieldKeyDDC,
    /** Limited Duration Document Indicator */
    ICPAAMVADrivingLicenseFieldKeyDDD,
    /** Weight (pounds) */
    ICPAAMVADrivingLicenseFieldKeyDAW,
    /** Weight (kilograms) */
    ICPAAMVADrivingLicenseFieldKeyDAX,
    /** Under 18 Until. (MMDDCCYY for U.S., CCYYMMDD for Canada) */
    ICPAAMVADrivingLicenseFieldKeyDDH,
    /** Under 19 Until. (MMDDCCYY for U.S., CCYYMMDD for Canada) */
    ICPAAMVADrivingLicenseFieldKeyDDI,
    /** Under 21 Until. (MMDDCCYY for U.S., CCYYMMDD for Canada)*/
    ICPAAMVADrivingLicenseFieldKeyDDJ,
    /** Organ Donor Indicator */
    ICPAAMVADrivingLicenseFieldKeyDDK,
    /** Veteran Indicator */
    ICPAAMVADrivingLicenseFieldKeyDDL,
    
    /** Number of itens */
    ICPAAMVADrivingLicenseFieldKeyCount
};

#endif /* ICPAAMVADrivingLicenseFieldKeys_h */
