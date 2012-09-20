/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable;

@interface VKPinImageManager : NSObject  {
    NSMapTable *_imageTable;
    NSMapTable *_bounceImagesTable;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)bounceImagesType:(int)arg1 style:(int)arg2;
- (id)imageType:(unsigned int)arg1 style:(int)arg2;

@end