#[[https://github.com/mbed-ce/mbed-os/wiki/MbedOS-configuration#libraries-in-your-application]]

#[[ Set name of library in lowcase]]
set(INTERNAL_LIBRARY_NAME "librarytemplate")

#[[ Here fill all .cpp files]]
add_library(${INTERNAL_LIBRARY_NAME} STATIC LibraryTemplate.cpp)

#[[ Include .h files]]
target_include_directories(${INTERNAL_LIBRARY_NAME}
    INTERFACE
        .
)

#[[Link library to mbed-core-flags but if the library needs to use RTOS
 features, then comment out first option and uncoment the second option below]]
target_link_libraries(${INTERNAL_LIBRARY_NAME} PUBLIC mbed-core-flags)
#target_link_libraries(${INTERNAL_LIBRARY_NAME} PUBLIC mbed-core-flags mbed-rtos-flags)
