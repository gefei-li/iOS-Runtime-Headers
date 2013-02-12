/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipientAtom, NSArray, NSMutableArray, NSMutableDictionary, NSTimer, UIImage, UIPushButton, UITextField;

@interface _MFComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientAtomDelegate> {
    UIPushButton *_addButton;
    NSMutableDictionary *_atoms;
    UIImage *_buttonImage;
    NSTimer *_delayTimer;
    BOOL _editable;
    double _inputDelay;
    NSInteger _maxRecipients;
    BOOL _parentIsClosing;
    BOOL _picking;
    UIImage *_pressedImage;
    NSArray *_properties;
    NSMutableArray *_recipients;
    MFComposeRecipientAtom *_selectedAtom;
    UITextField *_textField;
}

+ (void)_initializeSafeCategory;

- (BOOL)_addable;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)arg1;
- (void)_deleteSelectedAtom;
- (void)_deselectAtom;
- (void)_dismissPicker:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)addButton;
- (id)addButton;
- (void)addButtonClicked:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)addRecord:(void*)arg1 identifier:(NSInteger)arg2;
- (void)addRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)addresses;
- (BOOL)becomeFirstResponder;
- (void)clearText;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)dealloc;
- (BOOL)editable;
- (BOOL)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (NSInteger)maxRecipients;
- (NSInteger)numberOfRowsOfTextInField;
- (float)offsetForRowWithTextField;
- (void)parentDidClose;
- (void)parentWillClose;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)recipientWasUpdated:(id)arg1;
- (id)recipients;
- (void)reflow;
- (void)removeAddressAtIndex:(NSInteger)arg1;
- (void)removeAddresses;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setInputDelay:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(NSInteger)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(NSInteger)arg1;
- (BOOL)shouldShowCardForPerson:(void*)arg1;
- (void)showAtoms;
- (id)text;
- (void)textChanged:(id)arg1;
- (id)textField;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (float)textFieldOffsetForNumberOfRowsToScroll:(NSUInteger)arg1 numberOfRowsAboveField:(NSInteger)arg2;
- (BOOL)textFieldShouldBecomeFirstResponder:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)windowDidResignKey:(id)arg1;

@end
