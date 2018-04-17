//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "StoreEmotionSearchEmotionCgiDelegate.h"
#import "YYWebViewDelegate.h"

@class NSDictionary, NSString, NSURLRequest, StoreEmotionSearchEmotionCgi, UIView<YYWebViewInterface>, WebviewJSEventHandler_openDesignerEmojiView, WebviewJSEventHandler_openDesignerProfile;

@interface StoreEmotionSearchJSLogic : LocalJSLogicBase <YYWebViewDelegate, StoreEmotionSearchEmotionCgiDelegate>
{
    UIView<YYWebViewInterface> *m_webView;
    _Bool m_hasJsApiLoaded;
    NSString *m_lastSearchKeyword;
    NSDictionary *m_lastSearchResult;
    unsigned int m_reqType;
    unsigned long long m_searchId;
    StoreEmotionSearchEmotionCgi *m_searchEmotionCgi;
    WebviewJSEventHandler_openDesignerEmojiView *m_openDesignerEmojiViewHandler;
    WebviewJSEventHandler_openDesignerProfile *m_openDesignerProfileHandler;
    NSString *m_templateDir;
    unsigned int m_templateVersion;
    unsigned long long m_searchScene;
    NSString *_searchBarText;
    id <StoreEmotionSearchJSLogicDelegate><MMUIViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)SetTemplateDir:(id)arg1 Version:(unsigned int)arg2 Scene:(unsigned long long)arg3;
- (_Bool)StartRequestForKeyword:(id)arg1 ReqType:(unsigned int)arg2 PageBufferStr:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <StoreEmotionSearchJSLogicDelegate><MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)ensureInTmpDirForIOS8WithTemplateDir:(id)arg1 overWrite:(_Bool)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleGetSearchEmotionDataWithParams:(id)arg1 withCallbackID:(id)arg2;
- (void)handleOpenDesignerEmojiViewWithParams:(id)arg1 withCallbackID:(id)arg2;
- (void)handleOpenDesignerProfileWithParams:(id)arg1 withCallbackID:(id)arg2;
- (void)handleOpenEmotionDetailViewWithParams:(id)arg1 withCallbackID:(id)arg2;
- (void)handleOpenNewPageWithParams:(id)arg1 withCallbackID:(id)arg2;
- (void)handleOpenUrlWithParams:(id)arg1 withCallbackID:(id)arg2;
- (id)init;
- (id)initWithWebView:(id)arg1;
@property(readonly, nonatomic) NSString *lastSearchKeyword; // @synthesize lastSearchKeyword=m_lastSearchKeyword;
- (void)loadHomePage;
- (void)loadHtmlPage:(id)arg1 WithReqType:(unsigned int)arg2;
- (id)localHtmlFileUrlForPageName:(id)arg1;
- (void)onGetSearchEmotionDataCallBackWithParams:(id)arg1;
- (void)onSearchEmotionCgiFailedForKeyword:(id)arg1 NewQuery:(_Bool)arg2;
- (void)onSearchEmotionCgiOkForKeyword:(id)arg1 NewQuery:(_Bool)arg2 SearchResult:(id)arg3 PageBufferStr:(id)arg4 searchId:(unsigned long long)arg5;
- (_Bool)onWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
@property(retain, nonatomic) NSString *searchBarText; // @synthesize searchBarText=_searchBarText;
- (void)searchForKeyword:(id)arg1;
- (void)searchForKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (void)sendSetFontSizeEvent;
- (void)sendWebViewLoadingEvent:(_Bool)arg1;
- (void)showWebview:(id)arg1;
@property(readonly, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView=m_webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end
