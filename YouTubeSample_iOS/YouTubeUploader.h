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


static NSString *const kSampleClientIDKey = @"339854867663.apps.googleusercontent.com";
static NSString *const kSampleClientSecretKey = @"zw7wDmpEGPul2eGfvhHaWpKp";
#define YouTubeDevKey @"AI39si41tw7lLVafN5dC84Vr5KRrw8ZdnuTPRIPQhDNeg16-6fNDhZIPlYLjOg8MhA6H3SWoi3DIp8OalXrvmyfPBnyJM_80oA"


 #define DEV_KEY          @"AI39si41tw7lLVafN5dC84Vr5KRrw8ZdnuTPRIPQhDNeg16-6fNDhZIPlYLjOg8MhA6H3SWoi3DIp8OalXrvmyfPBnyJM_80oA"
 #define CLIENT_ID        @"339854867663.apps.googleusercontent.com"
 #define CLIENT_SECRET    @"zw7wDmpEGPul2eGfvhHaWpKp"
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
