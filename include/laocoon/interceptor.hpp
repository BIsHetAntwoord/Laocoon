#ifndef _LAOCOON_LAOCOON_INTERCEPTOR_HPP
#define _LAOCOON_LAOCOON_INTERCEPTOR_HPP

#include "laocoon/message.hpp"

#include <functional>

namespace laocoon {
    class Interceptor {
        private:
            std::function<void(Message*)> callback;
        protected:
            void onMsg(Message*);
        public:
            template <typename T>
            Interceptor(T callback) : callback(callback) {}

            virtual ~Interceptor() = 0;
    };
}
#endif
