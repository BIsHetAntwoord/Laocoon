#include "laocoon/interceptor.hpp"

namespace laocoon {
    Interceptor::~Interceptor() {}

    void Interceptor::onMsg(Message* msg) {
        uint8_t* ptr_orig = msg->data;
        callback(msg);

        if(msg->data != ptr_orig) {
            delete[] ptr_orig;
        }
    }
}