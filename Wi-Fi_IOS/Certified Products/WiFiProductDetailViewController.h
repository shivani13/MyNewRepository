//
//  MMProductDetail.h
//  WFProductsCategories
//
//  Created by Abhyuday Reddy on 10/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WiFiJSONDataModel.h"
#import "MessageUI/MFMailComposeViewController.h"

@interface WiFiProductDetailViewController : UIViewController<MFMailComposeViewControllerDelegate,UIActionSheetDelegate>
@property (nonatomic, retain) WiFiJSONDataModel *final;
@property (nonatomic, retain) IBOutlet UILabel *certificateIDLabel;
@property (nonatomic, retain) IBOutlet UILabel *companyLabel;
@property (nonatomic, retain) IBOutlet UILabel *productLabel;
@property (nonatomic, retain) IBOutlet UILabel *modelLabel;
@property (nonatomic, retain) IBOutlet UILabel *categoryLabel;
@property (retain, nonatomic) IBOutlet UILabel *certificationDateLabel;
@property (nonatomic, retain) UIActionSheet *shareActionSheet;
@property (assign, nonatomic) BOOL isFavorite;
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic,retain) IBOutlet UIButton *certificateButton;
@property (nonatomic,retain) IBOutlet UIButton *infoButton;
- (IBAction) showActionSheet:(id)sender;
@property (retain, nonatomic) IBOutlet UIButton *productsFavoriteButton;
- (IBAction)informationButtonClicked:(id)sender;
- (IBAction)favoriteButtonClicked:(id)sender;
- (IBAction)certificationDetailButtonClicked:(id)sender;
- (id) initWithFinalData:(WiFiJSONDataModel *)data;
@end
