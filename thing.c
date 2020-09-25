#include <stdio.h>

#include "thing.h"

THING objs[] = {
    // Locations
    {"cubicle",         NULL,       "your cubicle",},
    {"breakroom",       NULL,       "a tiny breakroom"},
    {"bossoffice",      NULL,       "your boss's office"},
    {"josecube",        NULL,       "José's cubicle"},
    // Beings
    {"me",              cubicle,    "yourself"},
    {"boss",            bossoffice, "your asshole boss"},
    {"jose",            josecube,
        "José, your friend and hilarious but lazy coworker"},
    // Items
    {"token",           cubicle,    "your security token"},
    {"usb",             cubicle,    "a beatup USB drive"},
    {"phone",           cubicle,
        "Your trusty smartphone. The screen is cracked and it can be a pain to charge, but it works."}
};
