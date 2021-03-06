//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, NSString;

@interface StreamInputQueueItem : MMObject
{
    unsigned int _inputId;
    unsigned int _offset;
    unsigned int _length;
    unsigned int _endFlag;
    unsigned int _sequence;
    NSString *_sessionId;
    NSString *_voiceId;
    NSData *_voiceData;
    NSData *_pcmVoiceData;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) unsigned int endFlag; // @synthesize endFlag=_endFlag;
- (id)initWithItem:(id)arg1;
@property(nonatomic) unsigned int inputId; // @synthesize inputId=_inputId;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSData *pcmVoiceData; // @synthesize pcmVoiceData=_pcmVoiceData;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSData *voiceData; // @synthesize voiceData=_voiceData;
@property(copy, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;

@end

