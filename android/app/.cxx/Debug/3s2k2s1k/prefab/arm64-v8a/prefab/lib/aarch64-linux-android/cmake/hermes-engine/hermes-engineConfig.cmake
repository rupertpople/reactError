if(NOT TARGET hermes-engine::libhermes)
add_library(hermes-engine::libhermes SHARED IMPORTED)
set_target_properties(hermes-engine::libhermes PROPERTIES
    IMPORTED_LOCATION "C:/Users/pople/.gradle/caches/8.10.2/transforms/3d92b9053931f893c8ba89788232e1d2/transformed/hermes-android-0.78.0-debug/prefab/modules/libhermes/libs/android.arm64-v8a/libhermes.so"
    INTERFACE_INCLUDE_DIRECTORIES "C:/Users/pople/.gradle/caches/8.10.2/transforms/3d92b9053931f893c8ba89788232e1d2/transformed/hermes-android-0.78.0-debug/prefab/modules/libhermes/include"
    INTERFACE_LINK_LIBRARIES ""
)
endif()

