/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString;

@interface WebUIAlert : NSObject {
    id _actionHandler;
    NSString *_bodyText;
    id _context;
    int _defaultAction;
    int _hideAction;
    int _indexOfSelectedTableItem;
    int _otherAction;
    int _tableAction;
    NSMutableArray *_tableItems;
    NSString *_title;
    int _type;
}

@property(copy) id actionHandler;

- (void).cxx_destruct;
- (id)_buttonTitleForAction:(int)arg1;
- (int)actionForButtonTag:(int)arg1;
- (id)actionHandler;
- (id)bodyText;
- (id)buttonTitles;
- (id)context;
- (int)defaultAction;
- (int)hideAction;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4;
- (id)selectedTableItem;
- (void)setActionHandler:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHideAction:(int)arg1;
- (void)setSelectedTableItemIndex:(int)arg1;
- (void)setTableItems:(id)arg1 withTitles:(id)arg2;
- (int)tableAction;
- (id)tableItems;
- (id)title;
- (int)type;

@end
