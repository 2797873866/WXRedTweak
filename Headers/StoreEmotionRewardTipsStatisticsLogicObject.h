//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class EmotionRewardTipsStatisticsData, NSString;

@interface StoreEmotionRewardTipsStatisticsLogicObject : MMObject
{
    unsigned int m_notCountAfterDaysConfig;
    unsigned int m_contiousSendTimesConfig;
    unsigned int m_totalSendTimesConfig;
    EmotionRewardTipsStatisticsData *m_statisticsData;
    NSString *m_statisticsFilePath;
}

- (void).cxx_destruct;
- (_Bool)checkIsNeedShowRewardTipsWithPid:(id)arg1;
- (void)clearAllData;
- (void)hasRewardedPid:(id)arg1;
- (void)hasShowedTipsForPid:(id)arg1;
- (id)init;
- (void)loadConfig;
- (void)loadStatisticsData;
- (void)resetRewardStatisticsForPid:(id)arg1;
- (void)resetRewardStatisticsForPid:(id)arg1 hasShowTips:(_Bool)arg2;
- (void)saveStatisticsData;

@end

