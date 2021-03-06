//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "RichTextLayoutDelegate.h"
#import "WCCanvasImageLoaderObserver.h"

@class NSString, RichTextView;

@interface WCCanvasTextAreaComponent : WCCanvasComponent <RichTextLayoutDelegate, WCCanvasImageLoaderObserver>
{
    RichTextView *_contentLabel;
    long long _currentAlignment;
}

+ (struct CGSize)calcContentSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3 width:(double)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
+ (id)getRichTextFromSvrResponse:(id)arg1;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)adjustOneLineStyles:(id)arg1 inRect:(struct CGRect)arg2;
- (void)alignText:(long long)arg1;
- (void)alignTextToCenter;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) long long currentAlignment; // @synthesize currentAlignment=_currentAlignment;
- (void)dealloc;
- (void)downloadAllIconImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

