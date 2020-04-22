//
// Created by weixu on 2020/3/30.
//

#ifndef JSONCPP_STRING_ENCODE_H
#define JSONCPP_STRING_ENCODE_H

#include <string>
#include "json/arraysize.h"

namespace WX_Json {
    std::string ToString(bool b);

    std::string ToString(const char* s);
    std::string ToString(std::string t);

    std::string ToString(short s);
    std::string ToString(unsigned short s);
    std::string ToString(int s);
    std::string ToString(unsigned int s);
    std::string ToString(long int s);
    std::string ToString(unsigned long int s);
    std::string ToString(long long int s);
    std::string ToString(unsigned long long int s);

    std::string ToString(double t);
    std::string ToString(long double t);

    std::string ToString(const void* p);
};
//
//class StringEncode {
//    template <typename T, size_t N>
//    char (&ArraySizeHelper(T (&array)[N]))[N];
//
//#define arraysize(array) (sizeof(ArraySizeHelper(array)))
//public:
//    std::string ToString(bool b);
//
//    std::string ToString(const char* s);
//    std::string ToString(std::string t);
//
//    std::string ToString(short s);
//    std::string ToString(unsigned short s);
//    std::string ToString(int s);
//    std::string ToString(unsigned int s);
//    std::string ToString(long int s);
//    std::string ToString(unsigned long int s);
//    std::string ToString(long long int s);
//    std::string ToString(unsigned long long int s);
//
//    std::string ToString(double t);
//    std::string ToString(long double t);
//
//    std::string ToString(const void* p);
//};


#endif //JSONCPP_STRING_ENCODE_H
