//
//  ViewController.m
//  Tutorial06
//
//  Created by kesalin@gmail.com on 12-12-13.
//  Copyright (c) 2012年 http://blog.csdn.net/kesalin/. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

@synthesize openGLView = _openGLView;

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
    
    [self.openGLView cleanup];
    self.openGLView = nil;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
	[super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
	[super viewDidDisappear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (IBAction)segmentSelectionChanged:(id)sender
{
    UISegmentedControl * segment = (UISegmentedControl *)sender;
    int index = [segment selectedSegmentIndex];
    
    [self.openGLView setCurrentSurface:index];
}

@end
