/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegWizardControllerDelegate>;

@interface CNFRegWizardController : PSSetupController {
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    } _wizardFlags;
}

@property <CNFRegWizardControllerDelegate> *firstRunDelegate;
@property BOOL canShowSplashScreen;
@property BOOL canStartNested;

+ (NSInteger)_firstRunState;
+ (BOOL)popToFirstRunControllerForStack:(id)arg1 withParent:(id)arg2 andSpecifier:(id)arg3 withCompletionControllerClass:(Class)arg4 depth:(NSUInteger)arg5;
+ (BOOL)shouldShowFirstRunController:(BOOL)arg1;
+ (BOOL)shouldShowFirstRunController;

- (BOOL)canShowSplashScreen;
- (BOOL)canStartNested;
- (id)controllerToShow:(BOOL)arg1;
- (id)controllerToShow;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllersToShow;
- (void)dealloc;
- (void)dismiss:(BOOL)arg1 aliased:(BOOL)arg2;
- (void)dismissWithState:(NSUInteger)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(NSUInteger)arg2;
- (id)firstRunDelegate;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setupController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
