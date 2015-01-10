#ifndef __dhcp_fp_h
#define __dhcp_fp_h

#include <stdint.h>

struct dhcp_fp {
    const uint16_t  class_id;
    const uint8_t  *class_name;
    const uint16_t  device_id;
    const uint8_t  *device_name;
};

#endif
