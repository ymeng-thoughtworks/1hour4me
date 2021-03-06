//
//  MEMonthlyCalendarView.h
//  OneHour4Me
//
//  Created by Meng Yu on 6/9/12.
//  Copyright (c) 2012 ThoughtWorks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MECalendarCard.h"

@interface MEMonthSelection : UIScrollView <MECalendarCardDelegate> {
    UIView *container;
    NSInteger selectedMonth;
}

- (void)selectMonth:(NSInteger)month;

@end
