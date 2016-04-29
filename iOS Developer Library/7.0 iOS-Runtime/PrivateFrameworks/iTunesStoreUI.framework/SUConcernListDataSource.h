/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource {
    NSArray *_concerns;
    int _selectedConcernIndex;
    SUTextViewCell *_textViewCell;
}

@property(retain) NSArray * concerns;
@property int selectedConcernIndex;
@property(readonly) SUTextViewCell * textViewCell;

- (id)_titleCellForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)concerns;
- (void)dealloc;
- (id)init;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (int)selectedConcernIndex;
- (void)setConcerns:(id)arg1;
- (void)setSelectedConcernIndex:(int)arg1;
- (int)tableViewStyle;
- (id)textViewCell;

@end
