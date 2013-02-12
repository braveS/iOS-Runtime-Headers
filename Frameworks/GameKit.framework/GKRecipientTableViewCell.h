/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKComposeRecipient, GKRecipientTableViewCellView;

@interface GKRecipientTableViewCell : UITableViewCell {
    GKComposeRecipient *_recipient;
    GKRecipientTableViewCellView *_recipientView;
}

+ (void)_initializeSafeCategory;
+ (id)cellForRecipient:(id)arg1;
+ (float)height;
+ (id)identifier;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)recipient;
- (void)setRecipient:(id)arg1;

@end