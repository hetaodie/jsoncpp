# jsoncpp

- 此工程时基于jsoncpp进行封装,原代码地址:https://github.com/open-source-parsers/jsoncpp
- 在封装时参考了webrtc内部使用的规则.
- 通过运行cmake,可以生成相应的静态库
- 使用时把.a库和include中的头文件copy到相应的工程即可

  使用示例:

```c++
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
```

