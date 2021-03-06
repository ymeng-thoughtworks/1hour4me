//
//  MESignInView.h
//  OneHour4Me
//
//  Created by Meng Yu on 5/5/12.
//  Copyright (c) 2012 ThoughtWorks. All rights reserved.
//

#import "MEBackgroundView.h"

@protocol MESignInDelegate

- (void)signInWithUserName:(NSString *)userName andPassword:(NSString *)password;

@end

@class MEStickerView;

@interface MESignInView : MEBackgroundView {
    MEStickerView *stickerView;
    
    id<UITextFieldDelegate> textFieldEditingDelegate;
    id<MESignInDelegate> signInDelegate;
}

@property (nonatomic, retain, setter = setTextFieldEditingDelegate:) id<UITextFieldDelegate> textFieldEditingDelegate;
@property (nonatomic, retain) id<MESignInDelegate> signInDelegate;

@end
