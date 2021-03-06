//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseBrandContactHelperDelegate.h"
#import "EnterpriseSessionSearchControllerDelegate.h"
#import "IEnterpriseBrandContactMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "IEnterpriseSessionMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMWebViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CContact, EnterpriseBrandContactHelper, EnterpriseSessionSearchController, MMSearchBar, MMTableView, MMTitleView, NSString, UIButton, UIView;

@interface EnterpriseSessionListViewController : MMUIViewController <IEnterpriseBrandContactMgrExt, EnterpriseSessionSearchControllerDelegate, EnterpriseBrandContactHelperDelegate, UITableViewDelegate, UITableViewDataSource, IEnterpriseSessionMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, MMWebViewDelegate>
{
    unsigned int _scene;
    unsigned int _fromScene;
    MMTableView *_tableView;
    MMTitleView *_titleView;
    MMSearchBar *_searchBar;
    EnterpriseSessionSearchController *_searchController;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_emptyView;
    UIButton *_weworkButton;
    _Bool _isEntering;
    unsigned int _wwEntryType;
    EnterpriseBrandContactHelper *_helper;
    CContact *brandContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact;
- (void)createChatroom:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)enterChat:(id)arg1;
- (id)getMMSearchBar;
- (id)getViewController;
- (void)hideSearchBar;
- (void)initData;
- (void)initFooterView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)initWeworkEntry;
- (id)initWithBrand:(id)arg1 fromScene:(unsigned int)arg2;
- (id)makeCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseSessionChanged;
- (void)onQuitEnterpriseGroup:(id)arg1 errorCode:(int)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)openChatBrandInfo:(id)arg1;
- (void)openCreateChat:(id)arg1;
- (void)openFavSessionListView:(id)arg1;
- (void)openWework:(id)arg1;
- (void)reloadTable;
- (_Bool)reloadWeworkEntryData:(id)arg1;
- (void)report;
- (void)setScene:(unsigned int)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateLeftBarItem;
- (void)updateMemberToLocal:(id)arg1;
- (void)updateTitleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)willAppear;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

