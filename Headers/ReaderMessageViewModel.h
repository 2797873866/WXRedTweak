//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "RichTextLayoutDelegate.h"

@class CContact, NSArray, NSMutableArray, NSString;

@interface ReaderMessageViewModel : BaseMessageViewModel <RichTextLayoutDelegate>
{
    struct CGSize m_titleViewSize;
    NSMutableArray *m_titleStyles;
    struct CGSize m_digestViewSize;
    NSMutableArray *m_digestStyles;
    NSArray *m_arrBtnList;
    double m_messageViewWidth;
    double m_digestViewMaxHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)accessibilityDescription;
@property(readonly, nonatomic) CContact *brandContact;
- (struct CGSize)calculateDigestViewSize;
- (struct CGSize)calculateTitleViewSize;
- (id)cellViewClassName;
@property(readonly, nonatomic) double coverImageHeight;
@property(readonly, nonatomic) NSString *coverImageURL;
@property(readonly, nonatomic) NSMutableArray *digestStyles;
- (double)digestViewMaxHeight;
@property(readonly, nonatomic) struct CGSize digestViewSize;
- (id)getBigVideoImage;
- (id)getSmallVideoImage;
- (id)getTitleString:(id)arg1 bBig:(_Bool)arg2 bGray:(_Bool)arg3;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (_Bool)isDisableEditMode;
@property(readonly, nonatomic) _Bool isForbidForward;
- (_Bool)isReaderWrapWeappJumpType;
@property(readonly, nonatomic) _Bool isShowHeadImageAndNickname;
@property(readonly, nonatomic) _Bool isShowReadAll;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double messageNodeViewHeight;
@property(readonly, nonatomic) double messageNodeViewWidth;
@property(readonly, nonatomic) NSArray *nodeBtnList;
@property(readonly, nonatomic) NSArray *readerWraps;
- (void)resetTextSize;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)timeToStr:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *titleStyles;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) struct CGSize titleViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

