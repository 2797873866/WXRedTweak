//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WACommentPreloadInfo : NSObject
{
    unsigned int _score;
    unsigned int _commentTotalCount;
    NSString *_appid;
    NSArray *_comments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned int commentTotalCount; // @synthesize commentTotalCount=_commentTotalCount;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
- (id)description;
@property(nonatomic) unsigned int score; // @synthesize score=_score;

@end

