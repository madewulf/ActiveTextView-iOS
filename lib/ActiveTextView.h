//
//  ActiveTextView.h
//  ActiveTextView
//
//  Created by buza on 5/7/12.
//  Copyright (c) 2012 Storify. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.

#import <UIKit/UIKit.h>

@class SlidingTextSelectorView;

@interface ActiveTextView : UIView <UIGestureRecognizerDelegate>

@property(nonatomic, strong) id delegate;
@property(nonatomic, strong) NSString *text;
@property(readwrite) BOOL highlightSelectedTextBackground;
@property(nonatomic, strong) SlidingTextSelectorView *textSelector;

-(void) setFont:(UIFont*)font forTextRange:(NSRange)range;
-(void) setColor:(UIColor*)color forTextRange:(NSRange)range;
-(void) setAction:(NSString*)actionName forTextRange:(NSRange)range;

- (id)initWithFrame:(CGRect)frame slidingSelectorView:(SlidingTextSelectorView*)slidingSelector;

@end
