/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation, UIImageView, UILabel, UIDateLabel, CKSummaryLabel;



@interface CKConversationListCell : UITableViewCell 
{
    CKConversation *_conversation;
    UIDateLabel *_dateLabel;
    CKSummaryLabel *_summaryLabel;
    CKSummaryLabel *_backupSummaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UILabel *_fromLabel;
    UIImageView *_groupImageView;
}

+ (id)identifier;
+ (float)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 conversation:(id)arg2;
- (void)setConversation:(id)arg1;
- (void)dealloc;
- (void)clearText;
- (void)updateContents;
- (void)_createBackupSummaryLabel;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)willTransitionToState:(NSUInteger)arg1;
- (void)didTransitionToState:(NSUInteger)arg1;
- (void)layoutSubviews;

@end