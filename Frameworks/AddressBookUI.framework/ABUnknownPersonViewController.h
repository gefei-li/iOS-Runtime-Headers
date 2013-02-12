/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABUnknownPersonViewControllerDelegate>;

@interface ABUnknownPersonViewController : UIViewController {
    id _helper;
    id _reserved;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
}

@property void *addressBook;
@property(copy) NSString *alternateName;
@property(copy) NSString *attribution;
@property void *displayedPerson;
@property(copy) NSString *message;
@property(retain) UIView *personHeaderView;
@property(retain) <ABStyleProvider> *styleProvider;
@property <ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsConferencing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property BOOL savesNewContactOnSuspend;

+ (id)defaultLabelsForProperty:(NSInteger)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)_addToExistingContacts;
- (void)_addUnmergedRecords;
- (id)_alertSheet;
- (BOOL)_allowsAutorotation;
- (void)_createNewContacts;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (id)_forwarder;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)_mf_initWithEmailAddress:(id)arg1;
- (void)_showCardViewerForIndex:(NSInteger)arg1;
- (void)_showUnmergedContactsAlert;
- (id)_unmergedAlertSheet;
- (id)_unmergedRecords;
- (void)_unselectTable;
- (id)_vCardProperties;
- (id)_vCardTable;
- (id)_vCards;
- (id)_viewControllerForCardAtIndex:(NSInteger)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(NSInteger)arg4 withActionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsConferencing;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (id)alternateName;
- (void)applicationDidResume;
- (id)attribution;
- (id)customHeaderView;
- (id)customMessageView;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void*)displayedPerson;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithVCardData:(id)arg1;
- (void)loadView;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (BOOL)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setPrimaryProperty:(NSInteger)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(NSInteger)arg4 withActionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (id)unknownPersonViewDelegate;
- (void)updateNavigationButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
