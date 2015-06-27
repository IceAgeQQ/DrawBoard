//
//  ViewController.h
//  DrawBoard
//
//  Created by Chao Xu on 15/6/24.
//  Copyright (c) 2015年 Chao Xu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"
@interface ViewController : UIViewController <SettingsViewControllerDelegate,UIActionSheetDelegate>{
    
    //lastPoint stores the last drawn point on the canvas
    //red, blue, and green store the current RGB values of the selected color.
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}
@property (strong,nonatomic) IBOutlet UIImageView *mainImage;

@property (strong, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)settings:(id)sender;

@end

