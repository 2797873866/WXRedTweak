//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SightUtils : NSObject
{
}

+ (_Bool)generateThumbImageFromVideo:(id)arg1 toThumbImage:(id)arg2;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
+ (_Bool)isThumbImage:(id)arg1 matchVideo:(id)arg2;
+ (_Bool)isVideoPlayable:(id)arg1;
+ (_Bool)shouldUpdateThumbImageWithSightVideoPath:(id)arg1 thumbImagePath:(id)arg2;
+ (id)thumbForVideoWithAsset:(id)arg1;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (struct CGSize)videoFrameSizeWithVideo:(id)arg1;

@end

