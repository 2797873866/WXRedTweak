//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "ICdnComMgrExt.h"

@class NSString;

@interface WNParaImageView : MMUIImageView <ICdnComMgrExt>
{
    unsigned int dataSize;
    NSString *localSrcPath;
    NSString *cdnUrl;
    id <WNParaImageViewDelegate> delegate;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
- (id)compressImage:(id)arg1;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize;
- (void)dealloc;
@property(nonatomic) __weak id <WNParaImageViewDelegate> delegate; // @synthesize delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadingImage;
- (void)loadingImageWithGCD;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath;
- (_Bool)startLoadingImage;
- (void)stopLoadingImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

