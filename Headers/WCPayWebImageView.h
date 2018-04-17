//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver.h"

@class NSString, NSURL, UIImage;

@interface WCPayWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    _Bool _loadImageOnMainThread;
    _Bool _bForceUpdateImage;
    double _imageScale;
    id <WCPayWebImageViewDelegate> _delegate;
    NSURL *_imageDownloadUrl;
    NSString *_cacheFolder;
    UIImage *_defaultWebImage;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
@property(nonatomic) _Bool bForceUpdateImage; // @synthesize bForceUpdateImage=_bForceUpdateImage;
@property(retain, nonatomic) NSString *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
- (void)dealloc;
@property(retain, nonatomic) UIImage *defaultWebImage; // @synthesize defaultWebImage=_defaultWebImage;
@property(nonatomic) __weak id <WCPayWebImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDefaultImage;
- (id)getImageUrlString;
@property(retain, nonatomic) NSURL *imageDownloadUrl; // @synthesize imageDownloadUrl=_imageDownloadUrl;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cacheFolder:(id)arg2;
@property(nonatomic) _Bool loadImageOnMainThread; // @synthesize loadImageOnMainThread=_loadImageOnMainThread;
- (id)md5ForString:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2 imageLoadDelegate:(id)arg3;
- (void)startLoadImageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
