/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSArray, NSURL, UIImageView, UIMoviePlayerController, YTSearchRequest, YTVideo;

@interface YTMovieView : UIView {
    UIImageView *_bugView;
    BOOL _canAutoPlay;
    BOOL _controlsShown;
    id _delegate;
    UIImageView *_gradientView;
    UIMoviePlayerController *_moviePlayer;
    double _seekTime;
    BOOL _shownFromExternalURL;
    BOOL _switchingVideos;
    BOOL _useSmallLogo;
    YTVideo *_video;
    YTSearchRequest *_videoInfoRequest;
    NSArray *_videoList;
    NSURL *_youTubeURL;
}

- (BOOL)_canBookmark;
- (BOOL)_canShare;
- (void)_cancelVideoInfoRequest;
- (void)_destroyMoviePlayer;
- (void)_hideBug;
- (void)_hideOverlay;
- (void)_loadVideoFromURL:(BOOL)arg1;
- (void)_loadVideoInfoWithID:(id)arg1;
- (void)_presentAlertForError:(id)arg1 reasonCode:(id)arg2;
- (void)_setupBackground;
- (void)_switchToVideo:(id)arg1;
- (BOOL)canContinuePlayingWhenLocked;
- (void)dealloc;
- (void)didHide;
- (void)didShow;
- (void)forceControlsVisible:(BOOL)arg1;
- (id)fullscreenView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPlaying;
- (BOOL)moviePlayer:(id)arg1 validateAction:(SEL)arg2;
- (id)moviePlayer;
- (BOOL)moviePlayerAddBookmarkButtonPressed:(id)arg1;
- (BOOL)moviePlayerBackwardButtonPressed:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerDidExitFullscreen:(id)arg1;
- (void)moviePlayerDidHideOverlay:(id)arg1;
- (void)moviePlayerDidShowOverlay:(id)arg1;
- (BOOL)moviePlayerEmailButtonPressed:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(NSInteger)arg2;
- (BOOL)moviePlayerForwardButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlayerFrameAfterFullscreenExit:(id)arg1;
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(NSUInteger)arg2;
- (void)moviePlayerWillEnterFullscreen:(id)arg1;
- (void)moviePlayerWillExitFullscreen:(id)arg1;
- (void)moviePlayerWillHideOverlay:(id)arg1;
- (void)moviePlayerWillShowOverlay:(id)arg1;
- (NSInteger)orientation;
- (void)pause;
- (void)play;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (void)setCanAutoPlay:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFullscreen:(BOOL)arg1;
- (void)setSeekTime:(double)arg1;
- (void)shareSheetDidHide;
- (void)useSmallLogo:(BOOL)arg1;
- (id)video;
- (void)willHide;
- (void)willShowAlert;
- (void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3;

@end
