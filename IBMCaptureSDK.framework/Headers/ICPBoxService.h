//
//  ICPBoxService.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <IBMCaptureSDK/ICPService.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ICPBoxService <ICPService>

/** The id of the configuration file. **/
@property (nonatomic, strong, nullable) NSString *dcoFileId;

/** The id of the folder where the job files will be created/uploaded.
 If the dcoFileId is nil, the sdk will look for a DCO file on this folder.
 */
@property (nonatomic, strong) NSString *folderId;

/** 
 The parent folder of the folder id.
 Used to try to recreate the path structure, if necessary. 
*/
@property (nonatomic, strong) NSString *parentFolderId;

/** 
 The name of the folder where the DCO file is storage and where the job files will be created/uploaded.
 Used to try to recreate the path structure, if necessary. 
*/
@property (nonatomic, strong) NSString *folderName;

@end

NS_ASSUME_NONNULL_END
