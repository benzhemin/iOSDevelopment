/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}

+ (id)findOrCreateWorld:(struct DOMWrapperWorld { unsigned int x1; struct HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > > { struct HashTable<void *, WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<void *>, WTF::HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >::KeyValuePairTraits, WTF::HashTraits<void *> > { struct KeyValuePair<void *, JSC::Weak<JSC::JSObject> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::CSSValue *, void *, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashTraits<WebCore::CSSValue *>, WTF::HashTraits<void *> > { struct HashTable<WebCore::CSSValue *, WTF::KeyValuePair<WebCore::CSSValue *, void *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::CSSValue *, void *> >, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashMap<WebCore::CSSValue *, void *, WTF::PtrHash<WebCore::CSSValue *>, WTF::HashTraits<WebCore::CSSValue *>, WTF::HashTraits<void *> >::KeyValuePairTraits, WTF::HashTraits<WebCore::CSSValue *> > { struct KeyValuePair<WebCore::CSSValue *, void *> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct VM {} *x4; struct HashSet<WebCore::ScriptController *, WTF::PtrHash<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *> > { struct HashTable<WebCore::ScriptController *, WebCore::ScriptController *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *>, WTF::HashTraits<WebCore::ScriptController *> > { struct ScriptController {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; boolx6; }*)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)standardWorld;
+ (id)world;

- (void)dealloc;
- (id)init;
- (id)initWithWorld:(struct PassRefPtr<WebCore::DOMWrapperWorld> { struct DOMWrapperWorld {} *x1; })arg1;
- (void)unregisterWorld;

@end
