////
//// Created by weixu on 2020/3/30.
////
//

//
// Created by weixu on 2020/3/30.
//

#include "string_encode.h"
namespace WX_Json {

    std::string ToString(const bool b) {
        return b ? "true" : "false";
    }

    std::string ToString(const char* const s) {
        return std::string(s);
    }
    std::string ToString(const std::string s) {
        return s;
    }

    std::string ToString(const short s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%hd", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const unsigned short s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%hu", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%d", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const unsigned int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%u", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const long int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%ld", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const unsigned long int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%lu", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const long long int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%lld", s);
        return std::string(&buf[0], len);
    }
    std::string ToString(const unsigned long long int s) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%llu", s);
        return std::string(&buf[0], len);
    }

    std::string ToString(const double d) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%g", d);
        return std::string(&buf[0], len);
    }

    std::string ToString(const long double d) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%Lg", d);
        return std::string(&buf[0], len);
    }

    std::string ToString(const void* const p) {
        char buf[32];
        const int len = std::snprintf(&buf[0], arraysize(buf), "%p", p);
        return std::string(&buf[0], len);
    }

    bool FromString(const std::string& s, bool* b) {
        if (s == "false") {
            *b = false;
            return true;
        }
        if (s == "true") {
            *b = true;
            return true;
        }
        return false;
    }
}

//std::string  ToString(bool b){
//    return b ? "true" : "false";
//}
//
//std::string  ToString(const char* s) {
//    return std::string(s);
//}
//
//std::string  ToString(std::string t) {
//    return t;
//}
//
//std::string  ToString(short s) {
//    char buf[32];
//    const int len = std::snprintf(&buf[0], arraysize(buf), "%hd", s);
//    return std::string(&buf[0], len);
//}
//
//std::string  ToString(unsigned short s) {
//    char buf[32];
//    const int len = std::snprintf(&buf[0], arraysize(buf), "%hu", s);
//    return std::string(&buf[0], len);
//}
//
//std::string  ToString(int s) {
//    char buf[32];
//    const int len = std::snprintf(&buf[0], arraysize(buf), "%d", s);
//    return std::string(&buf[0], len);
//}
//
//std::string  ToString(unsigned int s) {
//
//}
//
//std::string  ToString(long int s) {
//
//}
//
//std::string  ToString(unsigned long int s) {
//
//}
//
//std::string  ToString(long long int s) {
//
//}
//
//std::string  ToString(unsigned long long int s) {
//
//}
//
//std::string  ToString(double t) {
//
//}
//
//std::string  ToString(long double t) {
//
//}
//
//std::string  ToString(const void* p) {
//
//}