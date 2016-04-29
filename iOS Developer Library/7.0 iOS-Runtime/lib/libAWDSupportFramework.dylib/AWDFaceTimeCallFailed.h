/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallFailed : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int backCameraCaptureDuration : 1; 
        unsigned int callDuration : 1; 
        unsigned int conferenceMiscError : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int dataRate : 1; 
        unsigned int diagnosticPingAvg : 1; 
        unsigned int diagnosticPingMax : 1; 
        unsigned int diagnosticPingMin : 1; 
        unsigned int diagnosticPingPacketLoss : 1; 
        unsigned int endedReason : 1; 
        unsigned int frontCameraCaptureDuration : 1; 
        unsigned int gameKitError : 1; 
        unsigned int genericError : 1; 
        unsigned int gksError : 1; 
        unsigned int gksReturnCode : 1; 
        unsigned int invitationServiceError : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isCallUpgrade : 1; 
        unsigned int isInitiator : 1; 
        unsigned int isNetworkActive : 1; 
        unsigned int isNetworkEnabled : 1; 
        unsigned int isNetworkReachable : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int messageDeliveryError : 1; 
        unsigned int networkCheckResult : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int registrationError : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int relayError : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
        unsigned int viceroyError : 1; 
    unsigned int _backCameraCaptureDuration;
    unsigned int _callDuration;
    unsigned int _conferenceMiscError;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    unsigned int _dataRate;
    unsigned int _diagnosticPingAvg;
    unsigned int _diagnosticPingMax;
    unsigned int _diagnosticPingMin;
    unsigned int _diagnosticPingPacketLoss;
    unsigned int _endedReason;
    unsigned int _frontCameraCaptureDuration;
    unsigned int _gameKitError;
    int _genericError;
    int _gksError;
    int _gksReturnCode;
    NSString *_guid;
    } _has;
    unsigned int _invitationServiceError;
    unsigned int _isAudioInterrupted;
    unsigned int _isCallUpgrade;
    unsigned int _isInitiator;
    unsigned int _isNetworkActive;
    unsigned int _isNetworkEnabled;
    unsigned int _isNetworkReachable;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _localNetworkConnection;
    unsigned int _messageDeliveryError;
    unsigned int _networkCheckResult;
    unsigned int _onLockScreen;
    unsigned int _registrationError;
    unsigned int _relayConnectDuration;
    unsigned int _relayError;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned long long _timestamp;
    unsigned int _usesRelay;
    unsigned int _viceroyError;
}

@property unsigned int backCameraCaptureDuration;
@property unsigned int callDuration;
@property unsigned int conferenceMiscError;
@property unsigned int connectDuration;
@property unsigned int connectionType;
@property unsigned int currentNatType;
@property unsigned int dataRate;
@property unsigned int diagnosticPingAvg;
@property unsigned int diagnosticPingMax;
@property unsigned int diagnosticPingMin;
@property unsigned int diagnosticPingPacketLoss;
@property unsigned int endedReason;
@property unsigned int frontCameraCaptureDuration;
@property unsigned int gameKitError;
@property int genericError;
@property int gksError;
@property int gksReturnCode;
@property(retain) NSString * guid;
@property BOOL hasBackCameraCaptureDuration;
@property BOOL hasCallDuration;
@property BOOL hasConferenceMiscError;
@property BOOL hasConnectDuration;
@property BOOL hasConnectionType;
@property BOOL hasCurrentNatType;
@property BOOL hasDataRate;
@property BOOL hasDiagnosticPingAvg;
@property BOOL hasDiagnosticPingMax;
@property BOOL hasDiagnosticPingMin;
@property BOOL hasDiagnosticPingPacketLoss;
@property BOOL hasEndedReason;
@property BOOL hasFrontCameraCaptureDuration;
@property BOOL hasGameKitError;
@property BOOL hasGenericError;
@property BOOL hasGksError;
@property BOOL hasGksReturnCode;
@property(readonly) BOOL hasGuid;
@property BOOL hasInvitationServiceError;
@property BOOL hasIsAudioInterrupted;
@property BOOL hasIsCallUpgrade;
@property BOOL hasIsInitiator;
@property BOOL hasIsNetworkActive;
@property BOOL hasIsNetworkEnabled;
@property BOOL hasIsNetworkReachable;
@property BOOL hasIsVideo;
@property BOOL hasIsVideoInterrupted;
@property BOOL hasLinkQuality;
@property BOOL hasLocalNetworkConnection;
@property BOOL hasMessageDeliveryError;
@property BOOL hasNetworkCheckResult;
@property BOOL hasOnLockScreen;
@property BOOL hasRegistrationError;
@property BOOL hasRelayConnectDuration;
@property BOOL hasRelayError;
@property BOOL hasRemoteNatType;
@property BOOL hasRemoteNetworkConnection;
@property BOOL hasTimestamp;
@property BOOL hasUsesRelay;
@property BOOL hasViceroyError;
@property unsigned int invitationServiceError;
@property unsigned int isAudioInterrupted;
@property unsigned int isCallUpgrade;
@property unsigned int isInitiator;
@property unsigned int isNetworkActive;
@property unsigned int isNetworkEnabled;
@property unsigned int isNetworkReachable;
@property unsigned int isVideo;
@property unsigned int isVideoInterrupted;
@property int linkQuality;
@property unsigned int localNetworkConnection;
@property unsigned int messageDeliveryError;
@property unsigned int networkCheckResult;
@property unsigned int onLockScreen;
@property unsigned int registrationError;
@property unsigned int relayConnectDuration;
@property unsigned int relayError;
@property unsigned int remoteNatType;
@property unsigned int remoteNetworkConnection;
@property unsigned long long timestamp;
@property unsigned int usesRelay;
@property unsigned int viceroyError;

- (unsigned int)backCameraCaptureDuration;
- (unsigned int)callDuration;
- (unsigned int)conferenceMiscError;
- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (unsigned int)dataRate;
- (void)dealloc;
- (id)description;
- (unsigned int)diagnosticPingAvg;
- (unsigned int)diagnosticPingMax;
- (unsigned int)diagnosticPingMin;
- (unsigned int)diagnosticPingPacketLoss;
- (id)dictionaryRepresentation;
- (unsigned int)endedReason;
- (unsigned int)frontCameraCaptureDuration;
- (unsigned int)gameKitError;
- (int)genericError;
- (int)gksError;
- (int)gksReturnCode;
- (id)guid;
- (BOOL)hasBackCameraCaptureDuration;
- (BOOL)hasCallDuration;
- (BOOL)hasConferenceMiscError;
- (BOOL)hasConnectDuration;
- (BOOL)hasConnectionType;
- (BOOL)hasCurrentNatType;
- (BOOL)hasDataRate;
- (BOOL)hasDiagnosticPingAvg;
- (BOOL)hasDiagnosticPingMax;
- (BOOL)hasDiagnosticPingMin;
- (BOOL)hasDiagnosticPingPacketLoss;
- (BOOL)hasEndedReason;
- (BOOL)hasFrontCameraCaptureDuration;
- (BOOL)hasGameKitError;
- (BOOL)hasGenericError;
- (BOOL)hasGksError;
- (BOOL)hasGksReturnCode;
- (BOOL)hasGuid;
- (BOOL)hasInvitationServiceError;
- (BOOL)hasIsAudioInterrupted;
- (BOOL)hasIsCallUpgrade;
- (BOOL)hasIsInitiator;
- (BOOL)hasIsNetworkActive;
- (BOOL)hasIsNetworkEnabled;
- (BOOL)hasIsNetworkReachable;
- (BOOL)hasIsVideo;
- (BOOL)hasIsVideoInterrupted;
- (BOOL)hasLinkQuality;
- (BOOL)hasLocalNetworkConnection;
- (BOOL)hasMessageDeliveryError;
- (BOOL)hasNetworkCheckResult;
- (BOOL)hasOnLockScreen;
- (BOOL)hasRegistrationError;
- (BOOL)hasRelayConnectDuration;
- (BOOL)hasRelayError;
- (BOOL)hasRemoteNatType;
- (BOOL)hasRemoteNetworkConnection;
- (BOOL)hasTimestamp;
- (BOOL)hasUsesRelay;
- (BOOL)hasViceroyError;
- (unsigned int)hash;
- (unsigned int)invitationServiceError;
- (unsigned int)isAudioInterrupted;
- (unsigned int)isCallUpgrade;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isInitiator;
- (unsigned int)isNetworkActive;
- (unsigned int)isNetworkEnabled;
- (unsigned int)isNetworkReachable;
- (unsigned int)isVideo;
- (unsigned int)isVideoInterrupted;
- (int)linkQuality;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageDeliveryError;
- (unsigned int)networkCheckResult;
- (unsigned int)onLockScreen;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)registrationError;
- (unsigned int)relayConnectDuration;
- (unsigned int)relayError;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setBackCameraCaptureDuration:(unsigned int)arg1;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setConferenceMiscError:(unsigned int)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setDataRate:(unsigned int)arg1;
- (void)setDiagnosticPingAvg:(unsigned int)arg1;
- (void)setDiagnosticPingMax:(unsigned int)arg1;
- (void)setDiagnosticPingMin:(unsigned int)arg1;
- (void)setDiagnosticPingPacketLoss:(unsigned int)arg1;
- (void)setEndedReason:(unsigned int)arg1;
- (void)setFrontCameraCaptureDuration:(unsigned int)arg1;
- (void)setGameKitError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGksError:(int)arg1;
- (void)setGksReturnCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasBackCameraCaptureDuration:(BOOL)arg1;
- (void)setHasCallDuration:(BOOL)arg1;
- (void)setHasConferenceMiscError:(BOOL)arg1;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasCurrentNatType:(BOOL)arg1;
- (void)setHasDataRate:(BOOL)arg1;
- (void)setHasDiagnosticPingAvg:(BOOL)arg1;
- (void)setHasDiagnosticPingMax:(BOOL)arg1;
- (void)setHasDiagnosticPingMin:(BOOL)arg1;
- (void)setHasDiagnosticPingPacketLoss:(BOOL)arg1;
- (void)setHasEndedReason:(BOOL)arg1;
- (void)setHasFrontCameraCaptureDuration:(BOOL)arg1;
- (void)setHasGameKitError:(BOOL)arg1;
- (void)setHasGenericError:(BOOL)arg1;
- (void)setHasGksError:(BOOL)arg1;
- (void)setHasGksReturnCode:(BOOL)arg1;
- (void)setHasInvitationServiceError:(BOOL)arg1;
- (void)setHasIsAudioInterrupted:(BOOL)arg1;
- (void)setHasIsCallUpgrade:(BOOL)arg1;
- (void)setHasIsInitiator:(BOOL)arg1;
- (void)setHasIsNetworkActive:(BOOL)arg1;
- (void)setHasIsNetworkEnabled:(BOOL)arg1;
- (void)setHasIsNetworkReachable:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasIsVideoInterrupted:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasLocalNetworkConnection:(BOOL)arg1;
- (void)setHasMessageDeliveryError:(BOOL)arg1;
- (void)setHasNetworkCheckResult:(BOOL)arg1;
- (void)setHasOnLockScreen:(BOOL)arg1;
- (void)setHasRegistrationError:(BOOL)arg1;
- (void)setHasRelayConnectDuration:(BOOL)arg1;
- (void)setHasRelayError:(BOOL)arg1;
- (void)setHasRemoteNatType:(BOOL)arg1;
- (void)setHasRemoteNetworkConnection:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUsesRelay:(BOOL)arg1;
- (void)setHasViceroyError:(BOOL)arg1;
- (void)setInvitationServiceError:(unsigned int)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (void)setIsCallUpgrade:(unsigned int)arg1;
- (void)setIsInitiator:(unsigned int)arg1;
- (void)setIsNetworkActive:(unsigned int)arg1;
- (void)setIsNetworkEnabled:(unsigned int)arg1;
- (void)setIsNetworkReachable:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setMessageDeliveryError:(unsigned int)arg1;
- (void)setNetworkCheckResult:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setRegistrationError:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRelayError:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (void)setViceroyError:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
- (unsigned int)viceroyError;
- (void)writeTo:(id)arg1;

@end
