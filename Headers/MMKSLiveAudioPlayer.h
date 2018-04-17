//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSAudioPlayerProtocol.h"

@class AVPlayer, AVPlayerItem, KSSongInfo, NSString;

@interface MMKSLiveAudioPlayer : NSObject <KSAudioPlayerProtocol>
{
    _Bool _manualProcessInterrup;
    _Bool _pauseOnHeadPhoneOut;
    _Bool _isPauseByManual;
    _Bool _isObservering;
    unsigned int _secondCacheCnt;
    KSSongInfo *_curSong;
    id <KSAudioPlayerDelegate> _delegate;
    unsigned long long _status;
    double _playTimeWithNoPause;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    double _cacheProgress;
    double _bufferTime;
    double _startTime;
    double _resumeTime;
}

- (void).cxx_destruct;
- (void)addObserver;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(readonly, nonatomic) KSSongInfo *curSong; // @synthesize curSong=_curSong;
@property(readonly, nonatomic) double curTime;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (id)dataProviderDetail;
- (void)dealloc;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double duration;
- (id)errDetail;
- (unsigned long long)errType;
- (double)firstBufTime;
- (id)init;
- (void)internalStop;
@property(nonatomic) _Bool isObservering; // @synthesize isObservering=_isObservering;
@property(nonatomic) _Bool isPauseByManual; // @synthesize isPauseByManual=_isPauseByManual;
@property(nonatomic) _Bool manualProcessInterrup; // @synthesize manualProcessInterrup=_manualProcessInterrup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)pause;
@property(nonatomic) _Bool pauseOnHeadPhoneOut; // @synthesize pauseOnHeadPhoneOut=_pauseOnHeadPhoneOut;
- (_Bool)play:(id)arg1;
- (_Bool)play:(id)arg1 seekTime:(double)arg2;
@property(readonly, nonatomic) double playTimeWithNoPause; // @synthesize playTimeWithNoPause=_playTimeWithNoPause;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)releasePlayer;
- (void)removeObserver;
- (void)resume;
@property(nonatomic) double resumeTime; // @synthesize resumeTime=_resumeTime;
@property(readonly, nonatomic) unsigned int secondCacheCnt; // @synthesize secondCacheCnt=_secondCacheCnt;
- (void)seek:(double)arg1;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)setStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
