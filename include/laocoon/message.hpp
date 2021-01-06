#ifndef _LAOCOON_LAOCOON_MESSAGE_HPP
#define _LAOCOON_LAOCOON_MESSAGE_HPP

#include <cstdint>
#include <cstddef>

namespace laocoon {
    struct Message {
        uint8_t* data;
        size_t data_size;
    };
}

#endif
