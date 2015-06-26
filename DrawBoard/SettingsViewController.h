//
//  SettingsViewController.h
//  DrawBoard
//
//  Created by Chao Xu on 15/6/25.
//  Copyright (c) 2015年 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UIViewController{
   
}
@property CGFloat brush;
@property CGFloat opacity;
@property (strong , nonatomic)IBOutlet UILabel *brushValueLabel;
@property (strong , nonatomic)IBOutlet UIImageView *brushPreview;
@property (strong , nonatomic)IBOutlet UILabel *opacityValueLabel;
@property (strong , nonatomic)IBOutlet UIImageView *opacityPreview;

@property (strong, nonatomic) IBOutlet UISlider *brushControl;
@property (strong, nonatomic) IBOutlet UISlider *opacityControl;
@property (strong, nonatomic) IBOutlet UISlider *myslider;

- (IBAction)closeSettings:(id)sender;



@end
