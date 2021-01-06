#ifndef _LAOCOON_LAOCOON_TCP_TCPINTERCEPTOR_HPP
#define _LAOCOON_LAOCOON_TCP_TCPINTERCEPTOR_HPP

#include "laocoon/interceptor.hpp"

#include <atomic>

namespace laocoon {
    class TCPInterceptor : public Interceptor {
        private:
            std::atomic<bool> active;
        public:
            TCPInterceptor();
            ~TCPInterceptor();

            void addIP(const char* addr, uint16_t port);
            void listen();
            void stop();
    };
}

#endif
