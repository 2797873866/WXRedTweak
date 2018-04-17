//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUISearchBar.h"

@class NSString, UIButton, UIColor, UIImageView, UITextField, UIView;

@interface FMSearchBar : MMUISearchBar
{
    UIView *searchBarDisableMaskView;
    UIImageView *cancelButtonBelowView;
    NSString *placeholderForNormal;
    NSString *placeholderForSearching;
    _Bool _enabled;
    UIColor *m_bkgColor;
    double m_totalHeight;
    UIButton *cancelButton;
    UIButton *editButton;
    UITextField *textField;
    UIView *wrapView;
    double cancelButtonWidth;
    double editButtonWidth;
    UIColor *textFieldNormalColor;
    UIColor *textFieldActiveColor;
}

- (void).cxx_destruct;
- (void)addEditButtonTarget:(id)arg1 andAction:(SEL)arg2;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) double cancelButtonWidth; // @synthesize cancelButtonWidth;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton;
@property(nonatomic) double editButtonWidth; // @synthesize editButtonWidth;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)initSearchbarUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *placeholderForNormal; // @synthesize placeholderForNormal;
@property(retain, nonatomic) NSString *placeholderForSearching; // @synthesize placeholderForSearching;
- (void)realSetBkgColor:(id)arg1;
- (void)removeAllActionInEditButton;
- (void)renderEditButton;
- (void)resetSearchField:(double)arg1;
- (void)setSearchBarUI;
- (void)setSearchbarResponder;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField;
@property(retain, nonatomic) UIColor *textFieldActiveColor; // @synthesize textFieldActiveColor;
- (void)setTextFieldBackgroundColor:(id)arg1;
- (void)setTextFieldBackgroundColor:(id)arg1 activeColor:(id)arg2;
@property(retain, nonatomic) UIColor *textFieldNormalColor; // @synthesize textFieldNormalColor;
@property(retain, nonatomic) UIView *wrapView; // @synthesize wrapView;
- (void)showEditButton:(_Bool)arg1;

@end
