//
//  ViewController.h
//  Calendar
//
//  Created by HB on 8/13/16.
//  Copyright © 2016 Hidden Brains. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSCalendar.h"

@interface ViewController : UIViewController<FSCalendarDataSource, FSCalendarDelegate, FSCalendarDelegateAppearance>

@property (weak, nonatomic) FSCalendar *calendar;
@property (weak, nonatomic) UIButton *previousButton;
@property (weak, nonatomic) UIButton *nextButton;

- (void)previousClicked:(id)sender;
- (void)nextClicked:(id)sender;

@end

