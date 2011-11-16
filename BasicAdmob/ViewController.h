//
//  ViewController.h
//  BasicAdmob
//
//  Created by Andrew on 11/15/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GADBannerView.h"

@interface ViewController : UIViewController
{
    GADBannerView *bannerView_;
}

@property (nonatomic, retain) GADBannerView *bannerView_;
@end
