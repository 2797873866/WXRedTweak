//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary;

@interface WAAppOperateLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableDictionary *m_operationInfo;
    id <WAAppOperateLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addAppOperationInRetryQueue:(id)arg1;
- (id)convertShowOutItem2ShowOutItem:(id)arg1;
- (id)convertWxaAppItem2AppItemData:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WAAppOperateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)excuteOpration:(id)arg1;
- (void)fetchData;
- (void)getLastestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 inScene:(unsigned int)arg2;
- (void)getLastestUsageAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getShowOutDataFromSvrInScene:(unsigned int)arg1;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)handleFaildUpdateUsageOperationAsync:(id)arg1;
- (void)handleGetShowOutItemData:(id)arg1;
- (void)handleGetWeAppUsageRecord:(id)arg1;
- (void)handleUpdateWeAppUsageRecord:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *m_operationInfo; // @synthesize m_operationInfo;
- (void)runAllOperation;
- (void)saveData;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)updateAppUsageToSvrWithOpration:(id)arg1;

@end

