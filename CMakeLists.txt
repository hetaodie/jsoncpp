cmake_minimum_required(VERSION 3.5)
project(jsoncpp)

#set(CMAKE_CXX_STANDARD 14)
#-------------------------------add json lib---------------------
#include_directories(source/include)
#include_directories(source/lib_json)
set(JSON_USE_EXCEPTION 0)
set(JSON_USE_NULLREF 0)
#
#file(GLOB SOURCE source/lib_json/* source/include/json/*)
#
#add_library(jsoncpp STATIC ${SOURCE})


add_library(jsoncpp STATIC
        source/include/json/json_decode.h
        source/lib_json/json_decode.cc
        source/include/json/version.h
        source/include/json/assertions.h
        source/include/json/autolink.h
        source/include/json/config.h
        source/include/json/features.h
        source/include/json/forwards.h
        source/include/json/json.h
        source/include/json/reader.h
        source/include/json/value.h
        source/include/json/writer.h
        source/lib_json/json_reader.cpp
        source/lib_json/json_tool.h
        source/lib_json/json_value.cpp
        source/lib_json/json_writer.cpp
        source/lib_json/string_encode.cpp
        source/lib_json/string_encode.h
        )
target_include_directories(jsoncpp PUBLIC ${PROJECT_SOURCE_DIR}/source/include)

#--------------------------json demo-----------------

#project(jsoncppDemo)
#include_directories(
#        ${CMAKE_CURRENT_SOURCE_DIR}/source/include/
#)
#link_directories(
#        ${CMAKE_CURRENT_SOURCE_DIR}/libs/libjsoncpp.a
#)
#add_executable(jsonDemo main.cpp)
#target_link_directories(jsonDemo PRIVATE ${PROJECT_SOURCE_DIR}/source/include/)
#target_link_libraries(jsonDemo PRIVATE ${PROJECT_SOURCE_DIR}/libs/libjsoncpp.a)