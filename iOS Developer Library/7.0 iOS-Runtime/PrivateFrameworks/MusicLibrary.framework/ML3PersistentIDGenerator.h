/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {
    ML3DatabaseConnection *_connection;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}

- (void).cxx_destruct;
- (void)_calculateNewRun;
- (id)initWithDatabaseConnection:(id)arg1;
- (long long)nextPersistentID;

@end
