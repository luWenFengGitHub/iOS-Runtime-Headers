/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerItem : MPCPlayerEntity {
    NSString * _albumName;
    NSString * _artistName;
    NSString * _composerName;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        BOOL isLiveContent; 
    }  _durationSnapshot;
    MPModelGenericObject * _modelGenericObjectRepresentation;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *composerName;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; float x6; BOOL x7; } durationSnapshot;
@property (nonatomic, readonly) MPModelGenericObject *modelGenericObjectRepresentation;
@property (nonatomic, copy) NSArray *representations;

- (void).cxx_destruct;
- (id)albumName;
- (id)artistName;
- (int)comparePlaybackOrder:(id)arg1;
- (id)composerName;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; BOOL x7; })durationSnapshot;
- (id)initWithAVItem:(id)arg1;
- (id)modelGenericObjectRepresentation;
- (id)representations;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setComposerName:(id)arg1;
- (void)setRepresentations:(id)arg1;

@end