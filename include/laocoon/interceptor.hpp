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
            virtual ~Interceptor() = 0;

            template <typename T>
            void onCallback(T callback) {
                this->callback = callback;
            }
    };
}
#endif
