/* Generated by RuntimeBrowser.
 */

@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>

@optional

- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 canSelectContact:(CNContact *)arg2;
- (CNContactViewController *)contactNavigationController:(CNContactNavigationController *)arg1 contactViewControllerForContact:(CNContact *)arg2 preferredMode:(int)arg3;
- (void)contactNavigationController:(CNContactNavigationController *)arg1 didDeleteContact:(CNContact *)arg2;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 presentContactViewController:(CNContactViewController *)arg2 animated:(BOOL)arg3;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldShowCardForContact:(CNContact *)arg2;
- (void)contactNavigationControllerDidCancel:(CNContactNavigationController *)arg1;
- (void)contactNavigationControllerDidComplete:(CNContactNavigationController *)arg1;

@end
