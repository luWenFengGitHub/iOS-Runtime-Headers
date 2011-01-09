/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAnnotation, NSDate, NSString, WDText, WDCharacterRun;



@interface WDAnnotation : WDRun 
{
    NSInteger mType;
    WDText *mText;
    WDCharacterRun *mReference;
    NSDate *mDate;
    NSString *mOwner;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}


- (id)initWithParagraph:(id)arg1 type:(NSInteger)arg2;
- (id)text;
- (id)reference;
- (NSInteger)runType;
- (NSInteger)annotationType;
- (id)date;
- (void)setDate:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)dealloc;

@end