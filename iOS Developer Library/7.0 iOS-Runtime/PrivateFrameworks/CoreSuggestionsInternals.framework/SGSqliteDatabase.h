/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSCache, NSString;

@interface SGSqliteDatabase : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct sqlite3 { } *_db;
    BOOL _enabled;
    NSString *_filename;
    } _lock;
    NSCache *_queryCache;
    int _transactionDepth;
}

@property(readonly) struct sqlite3 { }* handle;

+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)disableDb;
- (void)enableDb;
- (id)errorMessage:(int)arg1;
- (struct sqlite3 { }*)handle;
- (id)initWithFilename:(id)arg1 error:(id*)arg2;
- (BOOL)isEnabled;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(id)arg2 onRow:(id)arg3 onError:(id)arg4;
- (void)prepQuery:(id)arg1 onPrep:(id)arg2 onError:(id)arg3;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id)arg2 onError:(id)arg3;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id)arg2;
- (void)transaction:(id)arg1;

@end
