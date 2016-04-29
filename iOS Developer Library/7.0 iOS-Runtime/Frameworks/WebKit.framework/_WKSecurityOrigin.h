/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _WKSecurityOrigin : NSObject {
    struct RefPtr<WebCore::SecurityOrigin> { 
        struct SecurityOrigin {} *m_ptr; 
     /* Encoded args for previous method: @12@0:4r^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}8 */
    } _origin;
}

@property(copy,readonly) NSString * host;
@property(readonly) unsigned short port;
@property(copy,readonly) NSString * protocol;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithSecurityOrigin:(const struct SecurityOrigin { struct atomic<int> { /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*x_1_1_1; int x_1_1_2; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; unsigned short x6; boolx7; boolx8; boolx9; boolx10; int x11; boolx12; boolx13; }*)arg1;
- (id)host;
- (unsigned short)port;
- (id)protocol;

@end
