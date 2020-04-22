#include <iostream>
#include "json/json_decode.h"
int main() {


    std::cout << "begin read json example" << std::endl;
    std::string message = "{\"name\":\"weixu\"}";
    Json::Reader reader;
    Json::Value jmessage;
    if (!reader.parse(message, jmessage)) {
        return 0;
    }

    std::string data;
    rtc::GetStringFromJsonObject(jmessage, "name",
                                 &data);
    std::cout <<"name:" << data<<std::endl;

    std::cout << "begin write json example" << std::endl;

    Json::StyledWriter writer;
    Json::Value wmessage;


    wmessage["name"] = "黎明";
    wmessage["age"] = "44";
    std::string result =  writer.write(wmessage);
    std::cout <<"result:" << result<<std::endl;

    return 0;
}