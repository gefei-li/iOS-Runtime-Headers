/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonEditDelegate>, <ABStyleProvider>, ABDatePickerViewController, ABModel, ABPeoplePickerNavigationController, ABPersonTableViewDataSource, ABPersonViewBehaviorHandler, NSArray, NSIndexPath, NSString, UIBarButtonItem, UITableView, UIViewController;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate> {
    id _actionSheetDelegate;
    NSString *_addToPersonButtonTitle;
    void *_addressBook;
    BOOL _allowsAddingToAddressBook;
    BOOL _allowsSettingAsPreferredCardForName;
    BOOL _animatedRight;
    BOOL _appearsInLinkingPeoplePicker;
    BOOL _automaticallySetEditing;
    ABPersonViewBehaviorHandler *_behaviorHandler;
    UITableView *_controllerTableView;
    ABDatePickerViewController *_datePickerViewController;
    id _deletionDelegate;
    BOOL _disablePopoverUpdates;
    NSArray *_displayedPeople;
    void *_displayedPerson;
    <ABPersonEditDelegate> *_editDelegate;
    BOOL _ignoresReloadData;
    id _imagePicker;
    BOOL _isLocation;
    BOOL _isPresentingDatePickerViewController;
    BOOL _isUnlinkingPerson;
    ABModel *_model;
    NSUInteger _modelDatabaseChangeCancellationCount;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    BOOL _personHeaderViewScrolls;
    ABPersonTableViewDataSource *_personTableViewDataSource;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIBarButtonItem *_reusableCancelButton;
    UIViewController *_savedPopoverContentViewController;
    BOOL _savesNewContactOnSuspend;
    NSString *_shareMessageBody;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageSubject;
    BOOL _shouldShowLinkingUI;
    BOOL _showsLinkedPeople;
    BOOL _showsPeoplePickerCancelButton;
    <ABStyleProvider> *_styleProvider;
    struct __CFDictionary { } *_valueByProperty;
    UIViewController *_viewController;
    BOOL _willPresentDatePickerViewController;
}

@property(copy) NSString *addToPersonButtonTitle;
@property void *addressBook;
@property(copy) NSString *alternateName;
@property(readonly) NSString *attribution;
@property(readonly) ABPersonViewBehaviorHandler *behaviorHandler;
@property(readonly) UITableView *controllerTableView;
@property(retain) UIView *customMessageView;
@property(retain) ABDatePickerViewController *datePickerViewController;
@property(readonly) NSArray *displayedPeople;
@property void *displayedPerson;
@property <ABPersonEditDelegate> *editDelegate;
@property(copy) NSString *message;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIFont *messageFont;
@property(retain) ABModel *model;
@property(retain) UIView *personHeaderView;
@property(readonly) ABPersonTableViewDataSource *personTableViewDataSource;
@property(readonly) <ABPersonViewControllerPrivateDelegate> *personViewDelegate;
@property(retain) NSIndexPath *popoverCellIndexPath;
@property(retain) NSIndexPath *popoverViewInCellIndexPath;
@property(readonly) UIBarButtonItem *reusableCancelButton;
@property(copy) NSString *shareMessageBody;
@property(copy) NSString *shareMessageSubject;
@property(retain) <ABStyleProvider> *styleProvider;
@property(readonly) UIViewController *viewController;
@property(readonly) UIView *viewForActionSheet;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsCardEditing;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsRingtone;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsSharing;
@property BOOL appearsInLinkingPeoplePicker;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property BOOL automaticallySetEditing;
@property(readonly) BOOL canSave;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasNameChanges;
@property(readonly) BOOL hasPopoverController;
@property BOOL ignoresReloadData;
@property BOOL isLocation;
@property NSUInteger modelDatabaseChangeCancellationCount;
@property BOOL personHeaderViewScrolls;
@property(getter=isReadonly,readonly) BOOL readonly;
@property BOOL savesNewContactOnSuspend;
@property BOOL shareMessageBodyIsHTML;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUI;
@property BOOL showsPeoplePickerCancelButton;

+ (void*)_newFakePersonForMergedPeople:(id)arg1;

- (void)_attemptSave;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)_datePickerDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_dismissDatePickerAnimated:(BOOL)arg1;
- (id)_existingViewControllerTableView;
- (void*)_personToUseForAddressBook;
- (void)_presentDatePickerViewController:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)_updateDisplayedPeople;
- (float)ab_heightToFitForViewInPopoverView;
- (void)ab_updatePopoverSize;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(NSInteger)arg4 target:(id)arg5 selector:(SEL)arg6 forProperty:(NSInteger)arg7 withActionGrouping:(NSInteger)arg8 ordering:(NSInteger)arg9;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (id)addToPersonButtonTitle;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsCardEditing;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsRingtone;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSettingAsPreferredCardForName;
- (BOOL)allowsSharing;
- (id)alternateName;
- (BOOL)appearsInLinkingPeoplePicker;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)attribution;
- (BOOL)automaticallySetEditing;
- (id)behaviorHandler;
- (BOOL)canSave;
- (void)conference:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (id)controllerTableView;
- (id)controllerToPresentShareContact;
- (BOOL)copyInsertValue:(id*)arg1 property:(NSInteger*)arg2 forPerson:(void*)arg3;
- (id)customMessageView;
- (id)datePickerViewController;
- (void)dealloc;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)didDismissModalViewController;
- (void)dismissPickerViewController:(id)arg1;
- (id)displayedPeople;
- (void*)displayedPerson;
- (id)editDelegate;
- (void)endEditingTransactions;
- (void)finishTearingDownImagePickerController;
- (void)getVCardData:(id*)arg1 exportMode:(NSInteger)arg2 fileName:(id*)arg3;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (BOOL)hasChanges;
- (BOOL)hasNameChanges;
- (BOOL)hasPopoverController;
- (BOOL)ignoresReloadData;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (void)imageUpdatedForPerson:(void*)arg1;
- (id)initWithViewController:(id)arg1;
- (BOOL)isAttributionEnabled;
- (BOOL)isLocation;
- (BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (BOOL)isReadonly;
- (void)linksUpdatedForPerson:(void*)arg1;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadFrameworkAtPath:(id)arg1 andStoreHandle:(void**)arg2 bundle:(id*)arg3;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)loadUnknownViewWithPerson:(void*)arg1 allowActions:(BOOL)arg2;
- (void)loadViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowDeletion:(BOOL)arg3 allowActions:(BOOL)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)model;
- (NSUInteger)modelDatabaseChangeCancellationCount;
- (void)nameChangedForPerson:(void*)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowCardForPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)performAction:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)performAction:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(NSInteger)arg1 inPropertyGroup:(id)arg2;
- (id)personHeaderView;
- (BOOL)personHeaderViewScrolls;
- (id)personImageView;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(void*)arg3 property:(NSInteger)arg4 identifier:(NSInteger)arg5;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(NSInteger)arg2;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(NSInteger)arg2;
- (void)personTableViewDataSource:(id)arg1 didSetupCell:(id)arg2 forRowAtIndexPath:(id)arg3 property:(NSInteger)arg4;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(NSInteger)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedAddOptionalProperties:(struct __CFArray { }*)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 entryType:(NSInteger)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 shouldPushCardForPerson:(void*)arg2 showingLinkedPeople:(BOOL)arg3;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 shouldUnlinkPerson:(void*)arg2;
- (id)personTableViewDataSource;
- (void)personTableViewDataSourceAskedToPresentLinkingPeoplePicker:(id)arg1;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (BOOL)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (id)personViewDelegate;
- (void)personWasDeleted;
- (id)popoverCellIndexPath;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (id)popoverViewInCellIndexPath;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (id)prepareViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowActions:(BOOL)arg3;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1;
- (void)reloadData;
- (void)reloadImageData;
- (void)reloadLinkingUISection;
- (void)reloadNameData;
- (void)reloadPropertyGroups;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5 animate:(BOOL)arg6;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (void)removeDisplayedPeople;
- (void)removeImagePickerControllerFromUI;
- (void)removeSelectedPerson;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (id)reusableCancelButton;
- (BOOL)savesNewContactOnSuspend;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)selectedPeople;
- (void)setAddToPersonButtonTitle:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsRingtone:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setAutomaticallySetEditing:(BOOL)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDatePickerViewController:(id)arg1;
- (void)setDisplayedPeople:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setIgnoresReloadData:(BOOL)arg1;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelDatabaseChangeCancellationCount:(NSUInteger)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonHeaderViewScrolls:(BOOL)arg1;
- (void)setPopoverCellIndexPath:(id)arg1;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setShowsPeoplePickerCancelButton:(BOOL)arg1;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)shareContact:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareContactFromButtonItem:(id)arg1;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (BOOL)shouldAnimateDatePicker;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)shouldShowAddToExistingContact;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUI;
- (void)showImageMenu;
- (BOOL)showsPeoplePickerCancelButton;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (id)styleProvider;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)unknownPersonViewDelegate;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)updateEditButton;
- (void)updateLinkBarButtonItem;
- (void)updateRecord;
- (id)vCardFileName;
- (id)viewController;
- (id)viewControllerToPresentModal;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)viewForActionSheet;
- (id)viewToRepresentPopover:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
