#pragma once

#include <zmk/pointing.h>

static const struct zmk_pointing_config zmk_pointing_defaults = {
    .move = {
        .speed = 1800, 
        .acceleration = 2.2,
    },
    .scroll = {
        .speed = 35,
    },
};
#