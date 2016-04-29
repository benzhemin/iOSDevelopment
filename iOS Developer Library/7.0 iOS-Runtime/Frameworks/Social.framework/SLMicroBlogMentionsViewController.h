/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSArray, NSObject<SLMicroBlogMentionsDelegate>, NSObject<SLMicroBlogSheetDelegate>, NSString, UITableView;

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSObject<SLMicroBlogMentionsDelegate> *_delegate;
    NSArray *_mentions;
    NSString *_searchString;
    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;
    UITableView *_tableView;
}

@property(copy,readonly) NSString * debugDescription;
@property NSObject<SLMicroBlogMentionsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_blankSurrogateProfileImage;

- (void).cxx_destruct;
- (void)chooseRow:(int)arg1;
- (void)completeWithSelectedMention:(id)arg1;
- (id)delegate;
- (id)initWithSheetDelegate:(id)arg1;
- (void)loadView;
- (id)mentions;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMentions:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateMentions;

@end
