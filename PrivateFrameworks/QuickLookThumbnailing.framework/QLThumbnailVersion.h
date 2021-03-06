/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {
    unsigned int  _fileSize;
    NSString * _generatorID;
    NSString * _generatorVersion;
    NSDate * _modificationDate;
}

@property (getter=isAutomaticallyGenerated, readonly) BOOL automaticallyGenerated;
@property unsigned int fileSize;
@property (copy) NSString *generatorID;
@property (copy) NSString *generatorVersion;
@property (copy) NSDate *modificationDate;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fileSize;
- (id)generatorID;
- (id)generatorVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned int)arg2 generatorID:(id)arg3 generatorVersion:(id)arg4;
- (BOOL)isAutomaticallyGenerated;
- (id)modificationDate;
- (void)setFileSize:(unsigned int)arg1;
- (void)setGeneratorID:(id)arg1;
- (void)setGeneratorVersion:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;

@end
