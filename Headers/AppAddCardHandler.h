//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "WCCardAddHelperDelegate.h"

@class NSString, NSURL, WCCardAddHelper;

@interface AppAddCardHandler : MMObject <WCCardAddHelperDelegate, IPreEnterWechatLogicExt>
{
    NSString *_appID;
    NSString *_bundleID;
    NSString *_cardID;
    NSURL *_infoUrl;
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (void)cancelCheckAndAddCard;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)createWechatAppAddCard;
- (void)dealloc;
- (id)getViewController;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)startCheckAndAddCard:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

