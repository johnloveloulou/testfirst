#include <rapidjson/reader.h>
#include <iostream>
using namespace std;

static const std::string template_json =
"{\
    \"field_1\": \"1\", \
    \"field_2\": 2, \
    \"field_3\": { \
        \"field_3_1\": \"3.1\" \
    }, \
    \"field_4\": [ \
        \"field_4_1\", \
        \"field_4_2\" \
    ] \
}"

struct MessageParser: public BaseReaderHandler<UTF8<>, MessageParser> {

public:
    MessageParser(const std::string & json):
        json_(json), f1_(""), f2_(0), f3("") {}

    bool String(const char* str, SizeType length, bool) {
        
    }

public:
    std::string f1_;
    int f2_;
    std::string f3_;
    std::vector<std::string> f4_;
};


int main() {

    return 0;
}
