/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class <MCBrowserViewControllerDelegate>, MCNearbyServiceBrowser, MCPeerID, MCSession, NSBundle, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UINavigationBar, UITableView;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate> {
    MCNearbyServiceBrowser *_browser;
    UIBarButtonItem *_cancelButton;
    unsigned int _declinedPeersCount;
    <MCBrowserViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButton;
    NSMutableArray *_foundPeers;
    NSBundle *_frameworkBundle;
    NSMutableArray *_invitedPeersSection;
    NSMutableDictionary *_invitedPeersState;
    unsigned int _maximumNumberOfPeers;
    unsigned int _minimumNumberOfPeers;
    MCPeerID *_myPeerID;
    UINavigationBar *_navigationBar;
    NSMutableArray *_nearbyPeersSection;
    MCSession *_session;
    UITableView *_tableView;
}

@property(retain) MCNearbyServiceBrowser * browser;
@property(retain) UIBarButtonItem * cancelButton;
@property(copy,readonly) NSString * debugDescription;
@property unsigned int declinedPeersCount;
@property <MCBrowserViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIBarButtonItem * doneButton;
@property(retain) NSMutableArray * foundPeers;
@property(retain) NSBundle * frameworkBundle;
@property(readonly) unsigned int hash;
@property(retain) NSMutableArray * invitedPeersSection;
@property(retain) NSMutableDictionary * invitedPeersState;
@property unsigned int maximumNumberOfPeers;
@property(readonly) BOOL maximumNumberOfPeersReached;
@property unsigned int minimumNumberOfPeers;
@property(readonly) BOOL minimumNumberOfPeersReached;
@property(copy) MCPeerID * myPeerID;
@property(retain) UINavigationBar * navigationBar;
@property(retain) NSMutableArray * nearbyPeersSection;
@property(retain) MCSession * session;
@property(readonly) Class superclass;
@property(retain) UITableView * tableView;

- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (id)browser;
- (id)cancelButton;
- (void)cancelTapped:(id)arg1;
- (void)dealloc;
- (unsigned int)declinedPeersCount;
- (id)delegate;
- (id)description;
- (id)detailStringForPeerState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (id)doneButton;
- (void)doneTapped:(id)arg1;
- (id)foundPeers;
- (id)frameworkBundle;
- (id)init;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (id)invitedPeersSection;
- (id)invitedPeersState;
- (unsigned int)maximumNumberOfPeers;
- (BOOL)maximumNumberOfPeersReached;
- (unsigned int)minimumNumberOfPeers;
- (BOOL)minimumNumberOfPeersReached;
- (id)myPeerID;
- (id)navigationBar;
- (id)nearbyPeersSection;
- (id)nearbySectionTitle;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)peerJoinedSession;
- (int)positionForBar:(id)arg1;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 propagate:(BOOL*)arg4;
- (id)session;
- (void)setBrowser:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDeclinedPeersCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFoundPeers:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setInvitedPeersSection:(id)arg1;
- (void)setInvitedPeersState:(id)arg1;
- (void)setMaximumNumberOfPeers:(unsigned int)arg1;
- (void)setMinimumNumberOfPeers:(unsigned int)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNearbyPeersSection:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
