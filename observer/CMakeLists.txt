set(SOURCES

    ${CMAKE_CURRENT_SOURCE_DIR}/article.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/fan.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/newsPaper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reader.cpp
)

add_library(observerLib ${SOURCES})

target_include_directories(observerLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})