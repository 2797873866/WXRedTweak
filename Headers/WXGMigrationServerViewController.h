//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt.h"
#import "IChatMigrationServerExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface WXGMigrationServerViewController : MMUIViewController <IChatMigrationServerExt, UIAlertViewDelegate, CNetworkStatusExt>
{
    UIImageView *m_qrCodeImageView;
    UILabel *m_qrCodeTipLabel;
    UIActivityIndicatorView *m_qrCodeLoadingView;
    int m_retryGetQRCodeTimes;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)onGetQRCodeImg:(id)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onPressLeftNavigationButton;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_makeQRCodeImageFinishState:(id)arg1 withText:(id)arg2;
- (void)p_makeQRCodeLoadingState;
- (void)p_popNavigationController;
- (void)p_setQRCodeTipLabelWithText:(id)arg1;
- (void)popToSettingViewController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
