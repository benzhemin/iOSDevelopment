/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSString, VKAnimation, VKPolylineOverlay, VKRouteLine, VKStyleManager, VKTileKeyList;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {
    struct unordered_map<GEOTransportType, vk::TransportTypeInfo, std::__1::hash<GEOTransportType>, std::__1::equal_to<GEOTransportType>, std::__1::allocator<std::__1::pair<const GEOTransportType, vk::TransportTypeInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::__unordered_map_hasher<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::hash<GEOTransportType>, true>, std::__1::__unordered_map_equal<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::equal_to<GEOTransportType>, true>, std::__1::allocator<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::hash<GEOTransportType>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::equal_to<GEOTransportType>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct shared_ptr<ggl::Tile::ViewUniformData> { 
        struct ViewUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > { 
        struct __compressed_pair<vk::TrafficManager *, std::__1::default_delete<vk::TrafficManager> > { 
            struct TrafficManager {} *__first_; 
        } __ptr_; 
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > { 
        struct __compressed_pair<vk::TrafficLayer *, std::__1::default_delete<vk::TrafficLayer> > { 
            struct TrafficLayer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager> > { 
        struct __compressed_pair<vk::RouteLineArrowManager *, std::__1::default_delete<vk::RouteLineArrowManager> > { 
            struct RouteLineArrowManager {} *__first_; 
        } __ptr_; 
    struct vector<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> >, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > > { 
        struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__begin_; 
        struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__end_; 
        struct __compressed_pair<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > *, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > > { 
            struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__first_; 
        } __end_cap_; 
    struct unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager> > { 
        struct __compressed_pair<vk::RouteLineManager *, std::__1::default_delete<vk::RouteLineManager> > { 
            struct RouteLineManager {} *__first_; 
        } __ptr_; 
    struct unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer> > { 
        struct __compressed_pair<vk::RouteLineLayer *, std::__1::default_delete<vk::RouteLineLayer> > { 
            struct RouteLineLayer {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
            struct FragmentedPool<ggl::Debug::Shader::Setup> {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::BaseMesh> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > > { 
            struct FragmentedPool<ggl::Debug::BaseMesh> {} *__first_; 
        } __ptr_; 
    struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> > { 
        struct __hash_table<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> > { 
            struct unique_ptr<std::__1::__hash_node<GEOComposedRouteSection *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<GEOComposedRouteSection *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > > { 
                    struct __hash_node<GEOComposedRouteSection *, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEOComposedRouteSection *, void *> *>, std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> { 
                    struct __hash_node<GEOComposedRouteSection *, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<GEOComposedRouteSection *> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<GEOComposedRouteSection *> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct { 
        double v[4][4]; 
    struct shared_ptr<md::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    float _alphaScale;
    float _arrowAlphaScale;
    VKAnimation *_arrowCrossFadeAnimation;
    VKAnimation *_arrowFadeAnimation;
    } _arrowLayers;
    } _arrowManager;
    float _contentScale;
    float _crossfadingDisplayStep;
    } _debugLineRenderState;
    } _debugRenderItems;
    } _debugRenderState;
    } _debugShaderSetups;
    } _debugUnmatchedRouteLineMeshes;
    VKAnimation *_fadeAnimation;
    BOOL _forceRoutelineUpdate;
    VKStyleManager *_lastQueriedStyleManager;
    } _matrix;
    VKTileKeyList *_previousKeysInView;
    NSSet *_previousTilesInView;
    double _previousViewUnitsPerPoint;
    VKRouteLine *_routeLine;
    double _routeLineHalfWidthRealistic;
    } _routeLineLayer;
    } _routeLineManager;
    double _routeLineWidthScaleRegular;
    VKPolylineOverlay *_routeOverlay;
    BOOL _selected;
    } _selectedSections;
    BOOL _showArrows;
    BOOL _showTraffic;
    double _simplificationEpsilon;
    int _stencilValue;
    int _styleZ;
    unsigned int _targetDisplayStep;
    } _trafficLayer;
    } _trafficManager;
    } _trafficStyle;
    } _transportTypeMap;
    } _viewUniforms;
    BOOL _wasInRealisticMode;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) VKPolylineOverlay * polyline;
@property(retain) VKPolylineOverlay * routeOverlay;
@property BOOL selected;
@property BOOL showTraffic;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning;
- (BOOL)_shouldShowTraffic;
- (void)_updateZoomDependentStyleProperties;
- (float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(struct CGSize { float x1; float x2; })arg2;
- (void)dealloc;
- (void)flushPools;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg2 tiles:(id)arg3 layer:(unsigned char)arg4;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg2 tiles:(id)arg3;
- (id)initWithOverlay:(id)arg1;
- (void)layoutDebugUnmatchedRouteLine:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg2;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (id)polyline;
- (void)prepareDebugLines;
- (void)prepareToDrawWithCanvas:(id)arg1;
- (id)routeOverlay;
- (BOOL)selected;
- (void)setContainerModel:(id)arg1;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setRouteOverlay:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowTraffic:(BOOL)arg1;
- (BOOL)showTraffic;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)updateRouteLineStencilValue:(int)arg1;

@end
