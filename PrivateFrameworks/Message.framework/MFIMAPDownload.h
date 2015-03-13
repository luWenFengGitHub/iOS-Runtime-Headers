/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFBaseFilterDataConsumer, MFCountingDataConsumer, NSMutableArray;

@interface MFIMAPDownload : NSObject {
    MFCountingDataConsumer *_countingConsumer;
    MFBaseFilterDataConsumer *_mainConsumer;
    NSMutableArray *_pendingFetchResults;
    unsigned long _uid;
}

@property(readonly) MFBaseFilterDataConsumer * mainConsumer;

- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (unsigned int)bytesFetched;
- (unsigned int)consumerBytesFetched;
- (id)data;
- (void)dealloc;
- (id)error;
- (unsigned int)expectedLength;
- (void)handleFetchResult:(id)arg1;
- (id)initWithUid:(unsigned long)arg1;
- (BOOL)isComplete;
- (unsigned int)lengthOfDataBeforeLineConversion;
- (id)mainConsumer;
- (void)processResults;
- (void)setError:(id)arg1;
- (unsigned long)uid;

@end