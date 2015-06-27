//
//  SettingsViewController.h
//  DrawBoard
//
//  Created by Chao Xu on 15/6/25.
//  Copyright (c) 2015年 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end

@interface SettingsViewController : UIViewController{
   
}
@property CGFloat brush;
@property CGFloat opacity;
@property CGFloat red;
@property CGFloat green;
@property CGFloat blue;
@property (strong , nonatomic)IBOutlet UILabel *brushValueLabel;
@property (strong , nonatomic)IBOutlet UIImageView *brushPreview;
@property (strong , nonatomic)IBOutlet UILabel *opacityValueLabel;
@property (strong , nonatomic)IBOutlet UIImageView *opacityPreview;

@property (strong, nonatomic) IBOutlet UISlider *brushControl;
@property (strong, nonatomic) IBOutlet UISlider *opacityControl;
@property (nonatomic, strong) id<SettingsViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UISlider *redControl;

@property (strong, nonatomic) IBOutlet UISlider *greenControl;

@property (strong, nonatomic) IBOutlet UISlider *blueControl;

@property (strong, nonatomic) IBOutlet UILabel *redLabel;

@property (strong, nonatomic) IBOutlet UILabel *greenLabel;

@property (strong, nonatomic) IBOutlet UILabel *blueLabel;


- (IBAction)closeSettings:(id)sender;



@end
