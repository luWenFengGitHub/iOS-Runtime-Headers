/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKLocationShiftFunction : NSObject 
{
    long long _c[6];
    NSInteger _originalLatitude;
    NSInteger _originalLongitude;
    NSInteger _modelSqHalfLength;
    NSInteger _cacheSqHalfLength;
}


- (id)initWithGMMLocationShiftResponse:(id)arg1;
- (BOOL)isModelValid:(struct { double x1; double x2; })arg1;
- (BOOL)isCacheValid:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })eval:(struct { double x1; double x2; })arg1;

@end