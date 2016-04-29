//
//  ViewController.h
//  Tutorial14
//
//  Created by kesalin@gmail.com kesalin on 13-1-1.
//  Copyright (c) 2013年 http://blog.csdn.net/kesalin/. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet OpenGLView * openglView;

- (IBAction)textureModeSegmentValueChanged:(id)sender;

@end
