//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayQryCancelECardDescCgiDelegate.h"

@class NSString, QryCancelECardDescRes, UIButton, WCPayQryCancelECardDescCgi;

@interface WCPayECardDetailViewController : WCPayBaseViewController <WCPayQryCancelECardDescCgiDelegate>
{
    id <WCPayECardDetailViewControllerDelegate> _delegate;
    WCPayQryCancelECardDescCgi *_descCgi;
    QryCancelECardDescRes *_descResponse;
    UIButton *_footerButton;
}

- (void).cxx_destruct;
- (void)clickfooterButton;
- (void)close;
- (id)createDotLabel;
@property(nonatomic) __weak id <WCPayECardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayQryCancelECardDescCgi *descCgi; // @synthesize descCgi=_descCgi;
@property(retain, nonatomic) QryCancelECardDescRes *descResponse; // @synthesize descResponse=_descResponse;
- (id)dotsAndLabelsWithWidth:(double)arg1 titles:(id)arg2;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
- (void)qryCancelECardDescCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryCancelECardDescCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)reloadView;
- (void)requestData;
- (void)setupFooterButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

