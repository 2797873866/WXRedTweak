//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, WCImageConvertDataProvider, WCImageConvertReportData;

@interface WCImageConvertMgr : MMService <MMService, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_convertList;
    _Bool _bStop;
    WCImageConvertDataProvider *_dataProvider;
    WCImageConvertReportData *_reportData;
}

- (void).cxx_destruct;
- (void)convertMsgPic:(id)arg1;
- (void)converting;
- (void)dealloc;
- (_Bool)isNeddConvert:(id)arg1;
- (void)onPreQuit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (id)prepareData;
- (void)recoveryBakPicToNormalPic;
- (void)recoveryBakPicToNormalPicEx;
- (void)startConvert;
- (void)stopConvert;
- (_Bool)waitForAWhile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

