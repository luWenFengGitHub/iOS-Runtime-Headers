/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;



@interface SUNavigationMenu : NSObject <NSCopying>
{
    NSString *_cancelTitle;
    NSString *_closedTitle;
    NSInteger _initialSelectedIndex;
    NSInteger _location;
    NSArray *_menuItems;
    NSString *_openTitle;
}

@property(readonly) NSString *openTitle;
@property(readonly) NSArray *menuItems;
@property NSInteger location;
@property(readonly) NSInteger initialSelectedIndex;
@property(readonly) NSString *closedTitle;
@property(readonly) NSString *cancelTitle;


- (id)menuItems;
- (NSInteger)location;
- (void)setLocation:(NSInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)_newMenuItemsFromArray:(id)arg1;
- (NSInteger)_locationForString:(id)arg1;
- (NSInteger)initialSelectedIndex;
- (id)cancelTitle;
- (void)_loadFromDictionary:(id)arg1;
- (id)closedTitle;
- (id)openTitle;

@end