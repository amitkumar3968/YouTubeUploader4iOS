//
//  YouTubeUploader.h
//  YouTubeSample_iOS
//
//  Created by Manuel Carrasco Molina on 08.01.12.
//  Copyright (c) 2012 Pomcast. All rights reserved.
//

// +----------------------------------------------------------------------------------------+
// | See http://hoishing.wordpress.com/2011/08/23/gdata-objective-c-client-setup-in-xcode-4 |
// +----------------------------------------------------------------------------------------+




#import "MBAlertView.h"
#import "MBHUDView.h"
#import <Foundation/Foundation.h>
#import "GData.h"
#import "GTMOAuth2Authentication.h"
//#import "GoogleCredentials.h"
// This "GoogleCredentials.h" file contains


 


 #define DEV_KEY          @"Yourdev key"
 #define CLIENT_ID        @"Your client ID"
 #define CLIENT_SECRET    @"Your client secreto"
// The Google API console is also where you can set your Product Name and Logo (Image) that will be used in the Modal OAuth Window.

// Localizable Strings Variables
#define UPLOADED_VIDEO_TITLE            @"UPLOADED_VIDEO_TITLE"
#define UPLOADED_VIDEO_MESSAGE          @"UPLOADED_VIDEO_MESSAGE"
#define ERROR_UPLOAD_VIDEO_TITLE        @"ERROR_UPLOAD_VIDEO_TITLE"

@interface YouTubeUploader : NSObject {
    NSString *filepath;
    MBHUDView *linkingHud;
   
}
@property(nonatomic,retain)    NSString *filepath;
@property (retain, nonatomic) UIProgressView *uploadProgressView;
@property (assign) UIViewController *delegate;

- (void)logout;
- (void)uploadVideoFile:(NSString*)path;

-(void)lookforUTubeLinking;
@end
