//
//  IBMCapture.h
//  IBMCaptureSDK
//
//  Copyright (c) 2016 IBM Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for IBMCapture.
FOUNDATION_EXPORT double IBMCaptureVersionNumber;

//! Project version string for IBMCapture.
FOUNDATION_EXPORT const unsigned char IBMCaptureVersionString[];

#pragma mark - Base objects

#import <IBMCaptureSDK/ICPCapture.h>
#import <IBMCaptureSDK/ICPCapture+Service.h>
#import <IBMCaptureSDK/ICPTransactionFile.h>

#import <IBMCaptureSDK/ICPSessionManager.h>
#import <IBMCaptureSDK/ICPRemoteComputationManager.h>
#import <IBMCaptureSDK/ICPConfigurationProvider.h>
#import <IBMCaptureSDK/ICPLoginProvider.h>
#import <IBMCaptureSDK/ICPRemoteComputationProvider.h>
#import <IBMCaptureSDK/ICPStorageProvider.h>
#import <IBMCaptureSDK/ICPConfigurationParser.h>
#import <IBMCaptureSDK/ICPObjectParser.h>
#import <IBMCaptureSDK/ICPDCOParser.h>
#import <IBMCaptureSDK/ICPSetupDCOParserTree.h>
#import <IBMCaptureSDK/ICPDCOParserTree.h>
#import <IBMCaptureSDK/ICPDCOObjectType.h>
#import <IBMCaptureSDK/ICPDCOObjectParser.h>
#import <IBMCaptureSDK/ICPIDProcessor.h>
#import <IBMCaptureSDK/ICPMRZDecoder.h>
#import <IBMCaptureSDK/ICPMRZData.h>
#import <IBMCaptureSDK/ICPIDData.h>
#import <IBMCaptureSDK/ICPIDField.h>
#import <IBMCaptureSDK/ICPIDField+NSDate.h>
#import <IBMCaptureSDK/ICPError.h>
#import <IBMCaptureSDK/ICPEdgeValidator.h>
#import <IBMCaptureSDK/ICPParallelEdgeValidator.h>
#import <IBMCaptureSDK/ICPAAMVADrivingLicense.h>
#import <IBMCaptureSDK/ICPFrenchIDData.h>

#pragma mark - Datacap Managers

#import <IBMCaptureSDK/ICPDatacapHelper.h>
#import <IBMCaptureSDK/ICPSessionManager+Datacap.h>
#import <IBMCaptureSDK/ICPRemoteComputationManager+Datacap.h>
#import <IBMCaptureSDK/ICPDatacapConfigurationProvider.h>
#import <IBMCaptureSDK/ICPDatacapLoginProvider.h>
#import <IBMCaptureSDK/ICPDatacapRemoteComputationProvider.h>
#import <IBMCaptureSDK/ICPDatacapStorageProvider.h>
#import <IBMCaptureSDK/ICPCapture+Datacap.h>

#pragma mark - Box Managers

#import <IBMCaptureSDK/ICPBoxLoginProvider.h>
#import <IBMCaptureSDK/ICPSessionManager+Box.h>
#import <IBMCaptureSDK/ICPBoxConfigurationProvider.h>
#import <IBMCaptureSDK/ICPBoxHelper.h>
#import <IBMCaptureSDK/ICPBoxSDKHelper.h>
#import <IBMCaptureSDK/ICPBoxItem.h>
#import <IBMCaptureSDK/ICPBoxStorageProvider.h>
#import <IBMCaptureSDK/ICPCapture+BOX.h>
#import <IBMCaptureSDK/ICPBoxItemType.h>

#pragma mark - Enum and types

#import <IBMCaptureSDK/ICPCaptureCompletionBlock.h>
#import <IBMCaptureSDK/ICPStatus.h>
#import <IBMCaptureSDK/ICPIndex.h>
#import <IBMCaptureSDK/ICPRecognitionEngine.h>
#import <IBMCaptureSDK/ICPTransactionFileListMode.h>

#pragma mark - Model

#import <IBMCaptureSDK/ICPIDField.h>
#import <IBMCaptureSDK/ICPMRZField.h>
#import <IBMCaptureSDK/ICPIDData.h>
#import <IBMCaptureSDK/ICPBatch.h>
#import <IBMCaptureSDK/ICPBatchType.h>
#import <IBMCaptureSDK/ICPCharacter.h>
#import <IBMCaptureSDK/ICPDatacapService.h>
#import <IBMCaptureSDK/ICPDocument.h>
#import <IBMCaptureSDK/ICPDocumentType.h>
#import <IBMCaptureSDK/ICPField.h>
#import <IBMCaptureSDK/ICPFieldType.h>
#import <IBMCaptureSDK/ICPObject.h>
#import <IBMCaptureSDK/ICPObjectFactory.h>
#import <IBMCaptureSDK/ICPObjectType.h>
#import <IBMCaptureSDK/ICPPage.h>
#import <IBMCaptureSDK/ICPPageType.h>
#import <IBMCaptureSDK/ICPPersistentObjectFactory.h>
#import <IBMCaptureSDK/ICPRect.h>
#import <IBMCaptureSDK/ICPService.h>
#import <IBMCaptureSDK/ICPApplication.h>
#import <IBMCaptureSDK/ICPJob.h>
#import <IBMCaptureSDK/ICPStation.h>
#import <IBMCaptureSDK/ICPWorkflow.h>
#import <IBMCaptureSDK/ICPSetupDCO.h>
#import <IBMCaptureSDK/ICPBoxService.h>
#import <IBMCaptureSDK/ICPAAMVADrivingLicenseField.h>
#import <IBMCaptureSDK/ICPAAMVADrivingLicenseFieldKey.h>
#import <IBMCaptureSDK/ICPDrivingLicenseFieldType.h>

#pragma mark - Utils

#import <IBMCaptureSDK/ICPBarcode.h>
#import <IBMCaptureSDK/ICPBarcodeHint.h>
#import <IBMCaptureSDK/ICPBarcodeEngine.h>
#import <IBMCaptureSDK/ICPCoreImageImageEngine.h>
#import <IBMCaptureSDK/ICPFilterType.h>
#import <IBMCaptureSDK/ICPImageEngine.h>
#import <IBMCaptureSDK/ICPOcrEngine.h>
#import <IBMCaptureSDK/ICPTesseractOcrEngine.h>
#import <IBMCaptureSDK/ICPZXingBarcodeEngine.h>
#import <IBMCaptureSDK/ICPFeature.h>
#import <IBMCaptureSDK/NSCharacterSet+IBM.h>
//box-ios-sdk import
#import <IBMCaptureSDK/BOXAppToAppAnnotationBuilder.h>
#import <IBMCaptureSDK/BOXAppToAppAnnotationKeys.h>
#import <IBMCaptureSDK/BOXAppToAppApplication.h>
#import <IBMCaptureSDK/BOXAppToAppFileMetadata.h>
#import <IBMCaptureSDK/BOXAppToAppMessage.h>
#import <IBMCaptureSDK/BOXContentSDK.h>
#import <IBMCaptureSDK/BOXContentSDKConstants.h>
#import <IBMCaptureSDK/BOXContentSDKErrors.h>
#import <IBMCaptureSDK/BOXLog.h>
#import <IBMCaptureSDK/NSDate+BOXContentSDKAdditions.h>
#import <IBMCaptureSDK/NSError+BOXContentSDKAdditions.h>
#import <IBMCaptureSDK/NSJSONSerialization+BOXContentSDKAdditions.h>
#import <IBMCaptureSDK/NSString+BOXContentSDKAdditions.h>
#import <IBMCaptureSDK/NSString+BOXURLHelper.h>
#import <IBMCaptureSDK/NSURL+BOXURLHelper.h>
#import <IBMCaptureSDK/UIApplication+ExtensionSafeAdditions.h>
#import <IBMCaptureSDK/UIDevice+BOXContentSDKAdditions.h>
#import <IBMCaptureSDK/BOXContentClient+Authentication.h>
#import <IBMCaptureSDK/BOXContentClient+Bookmark.h>
#import <IBMCaptureSDK/BOXContentClient+Collaboration.h>
#import <IBMCaptureSDK/BOXContentClient+Collection.h>
#import <IBMCaptureSDK/BOXContentClient+Comment.h>
#import <IBMCaptureSDK/BOXContentClient+Event.h>
#import <IBMCaptureSDK/BOXContentClient+File.h>
#import <IBMCaptureSDK/BOXContentClient+FileVersion.h>
#import <IBMCaptureSDK/BOXContentClient+Folder.h>
#import <IBMCaptureSDK/BOXContentClient+Metadata.h>
#import <IBMCaptureSDK/BOXContentClient+Search.h>
#import <IBMCaptureSDK/BOXContentClient+SharedLink.h>
#import <IBMCaptureSDK/BOXContentClient+User.h>
#import <IBMCaptureSDK/BOXContentClient.h>
#import <IBMCaptureSDK/BOXContentClient_Private.h>
#import <IBMCaptureSDK/BOXHashHelper.h>
#import <IBMCaptureSDK/BOXISO8601DateFormatter.h>
#import <IBMCaptureSDK/BOXKeychainItemWrapper.h>
#import <IBMCaptureSDK/BOXDispatchHelper.h>
#import <IBMCaptureSDK/BOXSharedLinkHeadersHelper.h>
#import <IBMCaptureSDK/BOXAssetInputStream.h>
#import <IBMCaptureSDK/BOXBookmark.h>
#import <IBMCaptureSDK/BOXCollaboration.h>
#import <IBMCaptureSDK/BOXCollection.h>
#import <IBMCaptureSDK/BOXComment.h>
#import <IBMCaptureSDK/BOXEnterprise.h>
#import <IBMCaptureSDK/BOXEvent.h>
#import <IBMCaptureSDK/BOXFile.h>
#import <IBMCaptureSDK/BOXFileLock.h>
#import <IBMCaptureSDK/BOXFileVersion.h>
#import <IBMCaptureSDK/BOXFolder.h>
#import <IBMCaptureSDK/BOXGroup.h>
#import <IBMCaptureSDK/BOXItem.h>
#import <IBMCaptureSDK/BOXMetadata.h>
#import <IBMCaptureSDK/BOXMetadataKeyValue.h>
#import <IBMCaptureSDK/BOXMetadataTemplate.h>
#import <IBMCaptureSDK/BOXMetadataTemplateField.h>
#import <IBMCaptureSDK/BOXMetadataUpdateTask.h>
#import <IBMCaptureSDK/BOXModel.h>
#import <IBMCaptureSDK/BOXRepresentation.h>
#import <IBMCaptureSDK/BOXSharedLink.h>
#import <IBMCaptureSDK/BOXUser.h>
#import <IBMCaptureSDK/BOXUser_Private.h>
#import <IBMCaptureSDK/BOXAbstractSession.h>
#import <IBMCaptureSDK/BOXAbstractSession_Private.h>
#import <IBMCaptureSDK/BOXAppUserSession.h>
#import <IBMCaptureSDK/BOXAuthorizationViewController.h>
#import <IBMCaptureSDK/BOXOAuth2Session.h>
#import <IBMCaptureSDK/BOXParallelOAuth2Session.h>
#import <IBMCaptureSDK/BOXAPIAppUsersAuthOperation.h>
#import <IBMCaptureSDK/BOXAPIAuthenticatedOperation.h>
#import <IBMCaptureSDK/BOXAPIDataOperation.h>
#import <IBMCaptureSDK/BOXAPIJSONOperation.h>
#import <IBMCaptureSDK/BOXAPIJSONPatchOperation.h>
#import <IBMCaptureSDK/BOXAPIMultipartToJSONOperation.h>
#import <IBMCaptureSDK/BOXAPIOAuth2ToJSONOperation.h>
#import <IBMCaptureSDK/BOXAPIOperation.h>
#import <IBMCaptureSDK/BOXAPIOperation_Private.h>
#import <IBMCaptureSDK/BOXStreamOperation.h>
#import <IBMCaptureSDK/BOXContentCacheClientProtocol.h>
#import <IBMCaptureSDK/BOXSharedLinkHeadersDefaultManager.h>
#import <IBMCaptureSDK/BOXSharedLinkItemSource.h>
#import <IBMCaptureSDK/BOXSharedLinkStorageProtocol.h>
#import <IBMCaptureSDK/BOXAPIAccessTokenDelegate.h>
#import <IBMCaptureSDK/BOXAPIQueueManager.h>
#import <IBMCaptureSDK/BOXParallelAPIQueueManager.h>
#import <IBMCaptureSDK/BOXSerialAPIQueueManager.h>
#import <IBMCaptureSDK/BOXAPIHeadOperation.h>
#import <IBMCaptureSDK/BOXBookmarkCommentsRequest.h>
#import <IBMCaptureSDK/BOXBookmarkCopyRequest.h>
#import <IBMCaptureSDK/BOXBookmarkCreateRequest.h>
#import <IBMCaptureSDK/BOXBookmarkDeleteRequest.h>
#import <IBMCaptureSDK/BOXBookmarkRequest.h>
#import <IBMCaptureSDK/BOXBookmarkShareRequest.h>
#import <IBMCaptureSDK/BOXBookmarkUnshareRequest.h>
#import <IBMCaptureSDK/BOXBookmarkUpdateRequest.h>
#import <IBMCaptureSDK/BOXCollaborationCreateRequest.h>
#import <IBMCaptureSDK/BOXCollaborationPendingRequest.h>
#import <IBMCaptureSDK/BOXCollaborationRemoveRequest.h>
#import <IBMCaptureSDK/BOXCollaborationRequest.h>
#import <IBMCaptureSDK/BOXCollaborationUpdateRequest.h>
#import <IBMCaptureSDK/BOXCollectionFavoritesRequest.h>
#import <IBMCaptureSDK/BOXCollectionItemsRequest.h>
#import <IBMCaptureSDK/BOXCollectionListRequest.h>
#import <IBMCaptureSDK/BOXCommentAddRequest.h>
#import <IBMCaptureSDK/BOXCommentDeleteRequest.h>
#import <IBMCaptureSDK/BOXCommentRequest.h>
#import <IBMCaptureSDK/BOXCommentUpdateRequest.h>
#import <IBMCaptureSDK/BOXEventsAdminLogsRequest.h>
#import <IBMCaptureSDK/BOXEventsRequest.h>
#import <IBMCaptureSDK/BOXFileCommentsRequest.h>
#import <IBMCaptureSDK/BOXFileCopyRequest.h>
#import <IBMCaptureSDK/BOXFileDeleteRequest.h>
#import <IBMCaptureSDK/BOXFileDownloadRequest.h>
#import <IBMCaptureSDK/BOXFileRequest.h>
#import <IBMCaptureSDK/BOXFileShareRequest.h>
#import <IBMCaptureSDK/BOXFileThumbnailRequest.h>
#import <IBMCaptureSDK/BOXFileUnshareRequest.h>
#import <IBMCaptureSDK/BOXFileUpdateRequest.h>
#import <IBMCaptureSDK/BOXFileUploadNewVersionRequest.h>
#import <IBMCaptureSDK/BOXFileUploadRequest.h>
#import <IBMCaptureSDK/BOXFileVersionPromoteRequest.h>
#import <IBMCaptureSDK/BOXFileVersionsRequest.h>
#import <IBMCaptureSDK/BOXFolderCollaborationsRequest.h>
#import <IBMCaptureSDK/BOXFolderCopyRequest.h>
#import <IBMCaptureSDK/BOXFolderCreateRequest.h>
#import <IBMCaptureSDK/BOXFolderDeleteRequest.h>
#import <IBMCaptureSDK/BOXFolderItemsRequest.h>
#import <IBMCaptureSDK/BOXFolderPaginatedItemsRequest.h>
#import <IBMCaptureSDK/BOXFolderPaginatedItemsRequest_Private.h>
#import <IBMCaptureSDK/BOXFolderRequest.h>
#import <IBMCaptureSDK/BOXFolderShareRequest.h>
#import <IBMCaptureSDK/BOXFolderUnshareRequest.h>
#import <IBMCaptureSDK/BOXFolderUpdateRequest.h>
#import <IBMCaptureSDK/BOXItemArrayRequest.h>
#import <IBMCaptureSDK/BOXItemSetCollectionsRequest.h>
#import <IBMCaptureSDK/BOXItemShareRequest.h>
#import <IBMCaptureSDK/BOXMetadataCreateRequest.h>
#import <IBMCaptureSDK/BOXMetadataDeleteRequest.h>
#import <IBMCaptureSDK/BOXMetadataRequest.h>
#import <IBMCaptureSDK/BOXMetadataTemplateRequest.h>
#import <IBMCaptureSDK/BOXMetadataUpdateRequest.h>
#import <IBMCaptureSDK/BOXPreflightCheckRequest.h>
#import <IBMCaptureSDK/BOXRequest+Metadata.h>
#import <IBMCaptureSDK/BOXRequest.h>
#import <IBMCaptureSDK/BOXRequest_Private.h>
#import <IBMCaptureSDK/BOXRequestWithSharedLinkHeader.h>
#import <IBMCaptureSDK/BOXSearchRequest.h>
#import <IBMCaptureSDK/BOXSharedItemRequest.h>
#import <IBMCaptureSDK/BOXTrashedFileRestoreRequest.h>
#import <IBMCaptureSDK/BOXTrashedFolderRestoreRequest.h>
#import <IBMCaptureSDK/BOXTrashedItemArrayRequest.h>
#import <IBMCaptureSDK/BOXUserAvatarRequest.h>
#import <IBMCaptureSDK/BOXUserRequest.h>

