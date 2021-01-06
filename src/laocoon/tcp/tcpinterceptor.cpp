#include "laocoon/tcp/tcpinterceptor.hpp"

namespace laocoon {
    TCPInterceptor::TCPInterceptor() {
        //Socket opzetten
    }

    TCPInterceptor::~TCPInterceptor() {
        //Socket removen
    }

    void TCPInterceptor::addIP(const char* addr, uint16_t port) {
        //TODO: hier binden
    }

    void TCPInterceptor::listen() {
        this->active = true;

        while(this->active) {

        }
    }

    void TCPInterceptor::stop() {
        this->active = false;

        //TODO: break the socket in some way
    }
}