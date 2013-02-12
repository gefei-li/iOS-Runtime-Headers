/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTableViewDataSourceDelegate>, <ABStyleProvider>, ABActionsController, ABMultiCellContentView, ABPersonCellLayoutManager, ABPersonModelController, ABPersonTableActionDataSource, ABPersonTableFooterView, ABPersonTableHeaderView, ABPersonTableTinyActionCell, ABRingtoneManager, AccountsManager, NSIndexPath, NSMutableArray, UIDatePicker, UILabel, UIResponder, UITableView, UITableViewCell, UIView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, UIActionSheetDelegate, ABPersonTableHeaderViewDelegate, ABPersonTableTinyActionDelegate, ABPickerViewControllerDelegate, ABDatePickerViewControllerDismissDelegate, ABDatePickerPresentationDelegate, ABTabOrderDelegate, ABMultiCellContentViewUpdateDelegate, ABPersonTableActionDelegate, ABPersonCellLayoutManagerDelegate, ABPersonImageDataDelegate> {
    AccountsManager *_accountsManager;
    ABPersonTableActionDataSource *_actionDataSource;
    NSInteger _actionSheetType;
    ABActionsController *_actionsController;
    struct __CFSet { } *_addNewValueProperties;
    struct __CFSet { } *_addNewValuePropertiesStore;
    NSMutableArray *_additionalLabels;
    struct __CFArray { } *_additionalProperties;
    BOOL _allowsActions;
    BOOL _allowsAddToFavorites;
    BOOL _allowsConferencing;
    BOOL _allowsDeletion;
    BOOL _allowsEditing;
    BOOL _allowsRingtone;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSharing;
    BOOL _attemptDelayedBecomeFirstResponder;
    ABPersonCellLayoutManager *_cellLayoutManager;
    struct __CFDictionary { } *_currentImageData;
    UIView *_currentTableFooterView;
    UIView *_currentTableHeaderView;
    UIView *_customPersonTableHeaderView;
    UIDatePicker *_datePicker;
    <ABPersonTableViewDataSourceDelegate> *_delegate;
    BOOL _didChangePreferredPersonForImage;
    struct __CFArray { } *_displayedProperties;
    NSMutableArray *_editablePropertyGroups;
    ABPersonTableFooterView *_footerView;
    BOOL _hasImageChanges;
    ABPersonTableHeaderView *_headerView;
    NSInteger _highlightedValueIdentifier;
    BOOL _highlightedValueIsImportant;
    void *_highlightedValuePerson;
    NSInteger _highlightedValueProperty;
    id _insertionLabel;
    NSInteger _insertionProperty;
    id _insertionValue;
    BOOL _isEndingEditingTransactions;
    BOOL _isPinningLocked;
    BOOL _isSettingFirstResponder;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    float _lastAdjustment;
    NSMutableArray *_linkedCardInfos;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    UILabel *_noValueLabel;
    UIView *_notesHeaderView;
    struct __CFArray { } *_optionalProperties;
    UITableViewCell *_partiallySelectedCell;
    void *_personForImageData;
    ABPersonModelController *_personModelController;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    NSInteger _primaryProperty;
    NSMutableArray *_propertyGroups;
    ABRingtoneManager *_ringtoneManager;
    BOOL _shouldShowAddLinkedContactCell;
    BOOL _shouldShowContactSourcesStringAsMessage;
    BOOL _shouldShowLinkingUI;
    <ABStyleProvider> *_styleProvider;
    UIView *_tableHeaderViewContainer;
    BOOL _tableHeaderViewScrolls;
    UITableView *_tableView;
    ABPersonTableTinyActionCell *_tinyActionCell;
    BOOL _updateShouldShowAddLinkedContactCell;
}

@property(readonly) void *addressBook;
@property(copy) NSString *alternateName;
@property(readonly) NSString *attribution;
@property(retain) UIView *currentTableFooterView;
@property(retain) UIView *currentTableHeaderView;
@property(retain) UIView *customMessageView;
@property(retain) UIView *customPersonTableHeaderView;
@property <ABPersonTableViewDataSourceDelegate> *delegate;
@property __CFArray *displayedProperties;
@property void *highlightedValuePerson;
@property(retain) ABMultiCellContentView *lastActiveMultiCellContentView;
@property(retain) NSIndexPath *lastActiveMultiCellIndexPath;
@property(copy) NSString *message;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIFont *messageFont;
@property(retain) ABMultiCellContentView *multiCellContentViewForWillEndEditing;
@property(retain) UITableViewCell *partiallySelectedCell;
@property(readonly) NSArray *people;
@property(retain) UIView *personHeaderView;
@property(readonly) ABPersonImageView *personImageView;
@property(retain) ABPersonModelController *personModelController;
@property(retain) ABMultiCellContentView *pinningMultiCellContentViewAlternate;
@property(retain) NSIndexPath *pinningMultiCellIndexPath;
@property(retain) NSIndexPath *pinningMultiCellRelativeIndexPath;
@property(retain) UIResponder *pinningResponder;
@property(retain) <ABStyleProvider> *styleProvider;
@property(readonly) ABPersonTableHeaderView *tableHeaderView;
@property(retain) UITableView *tableView;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsEditing;
@property BOOL allowsRingtone;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(readonly) BOOL canSave;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasNameChanges;
@property NSInteger highlightedValueIdentifier;
@property BOOL highlightedValueIsImportant;
@property NSInteger highlightedValueProperty;
@property(readonly) id insertionLabel;
@property(readonly) NSInteger insertionProperty;
@property(readonly) id insertionValue;
@property(readonly) BOOL isPinning;
@property(readonly) NSInteger primaryProperty;
@property BOOL shouldShowContactSourcesStringAsMessage;
@property BOOL shouldShowLinkingUI;
@property BOOL tableHeaderViewScrolls;

- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)_conferenceHistoryChanged:(id)arg1;
- (id)_contactSourcesString;
- (void)_endTableViewUpdatesWithoutScroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_footerViewFrame;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (void)_getPropertyGroup:(id*)arg1 index:(NSInteger*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4;
- (id)_headerView;
- (id)_indexPathForHeaderViewRow:(NSUInteger)arg1;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(NSInteger)arg2 editableFlag:(BOOL)arg3;
- (BOOL)_isFavoriteOfType:(NSInteger)arg1 inPropertyGroup:(id)arg2 atIndex:(NSInteger)arg3;
- (BOOL)_isReadonlyAtIndexPath:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedRingtone:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedService:(id)arg2;
- (id)_notesHeaderView;
- (void)_resetAddNewValueCells;
- (BOOL)_shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (BOOL)_shouldShowAddLinkedContactCell;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(NSInteger)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (BOOL)abTableView:(id)arg1 isValidIndexPath:(id)arg2;
- (id)accountsManager;
- (void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(NSInteger)arg3 inPropertyGroup:(id)arg4;
- (NSInteger)actionCountForBottomGroupingExcludingProperty:(NSInteger)arg1;
- (NSInteger)actionCountForGrouping:(NSInteger)arg1 inSection:(NSInteger)arg2 excludingProperty:(NSInteger)arg3 outExcludedIndexPaths:(id*)arg4;
- (NSInteger)actionCountForTopGroupingInSection:(NSInteger)arg1 excludingProperty:(NSInteger)arg2 outExcludedIndexPaths:(id*)arg3;
- (NSInteger)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)actionsController;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(NSInteger)arg4 target:(id)arg5 selector:(SEL)arg6 property:(NSInteger)arg7 actionGrouping:(NSInteger)arg8 ordering:(NSInteger)arg9;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 actionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)addFieldCellSelected:(id)arg1;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)addToFavoritesButtonClicked:(id)arg1;
- (struct __CFArray { }*)additionalProperties;
- (void*)addressBook;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsEditing;
- (BOOL)allowsFaceTimeFavorite;
- (BOOL)allowsRingtone;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (BOOL)allowsVoiceFavorite;
- (id)alternateName;
- (id)attribution;
- (void)beginPinning;
- (BOOL)canSave;
- (BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)cancelPinning;
- (id)capitalizedTitleForContentView:(id)arg1;
- (id)cellForTableView:(id)arg1 ofClass:(Class)arg2 withReuseIdentifier:(id)arg3 allowDequeing:(BOOL)arg4;
- (id)cellLayoutManager;
- (void)conference:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)containerView:(id)arg1 setContentView:(id)arg2 animated:(BOOL)arg3;
- (id)controllerMainView;
- (struct __CFDictionary { }*)currentImageData;
- (id)currentTableFooterView;
- (id)currentTableHeaderView;
- (id)customMessageView;
- (id)customPersonTableHeaderView;
- (void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2;
- (BOOL)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2;
- (id)datePickerForDateField:(id)arg1;
- (void)datePickerViewControllerWillDisappear:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteButtonClicked:(id)arg1;
- (BOOL)didChangePreferredPersonForImage;
- (struct __CFArray { }*)displayedProperties;
- (NSInteger)editingSectionForNonEditingSection:(NSInteger)arg1;
- (void)endEditingTransactions;
- (void)endPinning;
- (id)footerView;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6 outActions:(id*)arg7 outIndex:(NSInteger*)arg8;
- (BOOL)hasChanges;
- (BOOL)hasImageChanges;
- (BOOL)hasImageDataForPerson:(void*)arg1;
- (BOOL)hasNameChanges;
- (BOOL)hasPhoneValue;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (NSInteger)highlightedValueIdentifier;
- (BOOL)highlightedValueIsImportant;
- (void*)highlightedValuePerson;
- (NSInteger)highlightedValueProperty;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(NSInteger*)arg6;
- (id)imageDataWithFormat:(NSInteger)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3 isRemoved:(BOOL*)arg4;
- (id)imageDataWithFormat:(NSInteger)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3;
- (void)indexOfFirstPropertyGroupSection:(NSInteger*)arg1 lastPropertyGroupSection:(NSInteger*)arg2 addFieldSection:(NSInteger*)arg3 linkingUISection:(NSInteger*)arg4 primaryPropertyActionsSection:(NSInteger*)arg5 topGroupingActionSection:(NSInteger*)arg6 bottomGroupingActionSection:(NSInteger*)arg7 cardActionsSection:(NSInteger*)arg8 cardActionsSectionCount:(NSInteger*)arg9 totalSectionCount:(NSInteger*)arg10 whenEditing:(BOOL)arg11;
- (NSInteger)indexOfLinkingUISectionWhenEditing:(BOOL)arg1;
- (void)informDelegateOfImageDataChange;
- (id)init;
- (id)insertionLabel;
- (NSInteger)insertionProperty;
- (id)insertionValue;
- (void)invalidateAdditionalProperties;
- (void)invalidateAllPropertyGroups;
- (void)invalidateLinkedCardInfos;
- (void)invalidatePropertyGroupsForEditing:(BOOL)arg1;
- (BOOL)isAttributionEnabled;
- (BOOL)isEditing;
- (BOOL)isInFullEditingMode;
- (BOOL)isPinning;
- (BOOL)isPropertyDisplayed:(NSInteger)arg1;
- (BOOL)isPropertyOptional:(NSInteger)arg1;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (BOOL)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (id)lastActiveMultiCellContentView;
- (id)lastActiveMultiCellIndexPath;
- (id)linkedCardInfos;
- (float)marginForTableView:(id)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(void*)arg2;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
- (void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2;
- (BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg1;
- (id)multiCellContentViewForWillEndEditing;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
- (id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 index:(NSInteger)arg3 editableFlag:(BOOL)arg4;
- (struct __CFArray { }*)newAdditionalProperties;
- (id)newFooterView;
- (id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1;
- (id)noValueLabel;
- (void)notifyHeaderViewHeightDidChange;
- (NSInteger)numberOfRowsInSection:(NSInteger)arg1 whenEditing:(BOOL)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (NSInteger)numberOfSectionsWhenEditing:(BOOL)arg1;
- (id)partiallySelectedCell;
- (id)people;
- (void)performPersonTableActionWithSection:(NSInteger)arg1 row:(NSInteger)arg2;
- (BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (void*)personForImageData;
- (void*)personForImageDataExcludingPeople:(id)arg1;
- (id)personHeaderView;
- (id)personImageView;
- (id)personModelController;
- (void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2;
- (BOOL)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2;
- (BOOL)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (BOOL)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (id)pinningMultiCellContentViewAlternate;
- (id)pinningMultiCellIndexPath;
- (id)pinningMultiCellRelativeIndexPath;
- (id)pinningResponder;
- (void*)policyForPerson:(void*)arg1;
- (void)prepareView;
- (void)presentDifferentiationSheetForAction:(id)arg1;
- (void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2;
- (NSInteger)primaryProperty;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(NSInteger)arg3 whenEditing:(BOOL)arg4;
- (id)propertyGroupForProperty:(NSInteger)arg1;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (void)refreshImageData;
- (void)refreshImageDataAndInformDelegate:(BOOL)arg1;
- (void)reloadBottomActionCellAnimated:(BOOL)arg1;
- (void)reloadBottomActionDataForFavorites:(BOOL)arg1 texting:(BOOL)arg2 sharing:(BOOL)arg3 conferencing:(BOOL)arg4;
- (void)reloadBottomActions;
- (void)reloadData;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1;
- (void)reloadImageData;
- (void)reloadLinkingUISection;
- (void)reloadNameData;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)reloadNoValueLabelAnimated:(BOOL)arg1;
- (void)reloadPrimaryPropertyActionsSection;
- (void)reloadPropertyGroups;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(NSInteger)arg3 actionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5 animate:(BOOL)arg6;
- (void)removeImageDataForPerson:(void*)arg1;
- (void)resetImageData;
- (id)ringtoneManager;
- (void)ringtonePicker:(id)arg1 selectedRingtoneWithIdentifier:(id)arg2;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)sectionAnimationsDictionaryForEditing:(BOOL)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (NSUInteger)sectionForAction:(id)arg1;
- (NSInteger)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(NSUInteger)arg2 forCell:(id)arg3;
- (void)selectLabelPartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectWholePartForCell:(id)arg1;
- (void)sendTextMessage:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsRingtone:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setCurrentImageData:(struct __CFDictionary { }*)arg1;
- (void)setCurrentTableFooterView:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentTableFooterView:(id)arg1;
- (void)setCurrentTableHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentTableHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(BOOL)arg2;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedValueIdentifier:(NSInteger)arg1;
- (void)setHighlightedValueIsImportant:(BOOL)arg1;
- (void)setHighlightedValuePerson:(void*)arg1;
- (void)setHighlightedValueProperty:(NSInteger)arg1;
- (void)setImageData:(id)arg1 withFormat:(NSInteger)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(void*)arg4;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionProperty:(NSInteger)arg1 value:(id)arg2 label:(id)arg3;
- (void)setInsertionValue:(id)arg1;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (void)setPartiallySelectedCell:(id)arg1;
- (void)setPersonForImageData:(void*)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonModelController:(id)arg1;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (void)setPinningResponder:(id)arg1;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(NSInteger)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setTableHeaderViewScrolls:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (void)shareContactButtonClicked:(id)arg1;
- (BOOL)shouldShowAction:(id)arg1 excludingProperty:(NSInteger)arg2;
- (BOOL)shouldShowActionForProperty:(NSInteger)arg1;
- (BOOL)shouldShowAddToFavoritesAction;
- (BOOL)shouldShowContactSourcesStringAsMessage;
- (BOOL)shouldShowLinkingUI;
- (BOOL)shouldShowRingtoneCellWhenEditing:(BOOL)arg1;
- (BOOL)shouldUseAddNewValueCellForProperty:(NSInteger)arg1;
- (void)showLinkedCardAtRow:(NSInteger)arg1;
- (void)sizeToFit;
- (id)styleProvider;
- (void)swapAddNewValueCellForProperty:(NSInteger)arg1 atIndexPath:(id)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (id)tableHeaderView;
- (BOOL)tableHeaderViewScrolls;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(NSInteger*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(NSInteger)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(NSInteger*)arg6;
- (NSInteger)tableViewRowAnimationForUpdateAction:(NSUInteger)arg1 isFirstRow:(BOOL)arg2;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(NSInteger)arg1 inPropertyGroup:(id)arg2 entryType:(NSInteger)arg3;
- (void)tellDelegateTableViewDataSourceDidSetupCell:(id)arg1 forRowAtIndexPath:(id)arg2 property:(NSInteger)arg3;
- (id)tinyActionCell;
- (id)titleForNoValueWithProperty:(NSInteger)arg1;
- (void)unselectAllCellParts;
- (void)updateByAddingFieldForProperty:(NSInteger)arg1 whenEditing:(BOOL)arg2;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void)updateContactSourcesStringIfNeeded;
- (void)updateForConferencingAvailabilityChange;
- (void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateRecord;
- (void)updateRecordImages;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1;
- (void)updateTableFooterView;
- (void)updateTableFooterViewAnimated:(BOOL)arg1;
- (void)updateTableHeaderView;
- (BOOL)usesAddNewValueCellForProperty:(NSInteger)arg1;
- (void)valueAtIndex:(NSInteger)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)writablePeople;

@end
