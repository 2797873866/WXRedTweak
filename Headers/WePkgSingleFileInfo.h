//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WePkgSingleFileInfo : MMObject <PBCoding>
{
    unsigned int downloadNetworkType;
    unsigned int sizeInBytes;
    NSString *rid;
    NSString *mimeType;
    NSString *md5;
    NSString *downloadUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid;
@property(nonatomic) unsigned int sizeInBytes; // @synthesize sizeInBytes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

