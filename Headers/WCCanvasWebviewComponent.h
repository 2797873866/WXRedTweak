//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class UIWebView;

@interface WCCanvasWebviewComponent : WCCanvasComponent
{
    UIWebView *_webView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;

@end

