#include <stdio.h>

#include "thing.h"

THING thgs[] = {
    // Locations
    {"cubicle",         LOCATION,     NULL,       "your cubicle",},
    {"breakroom",       LOCATION,     NULL,       "a tiny breakroom"},
    {"bossoffice",      LOCATION,     NULL,       "your boss's office"},
    {"josecube",        LOCATION,     NULL,       "José's cubicle"},
    // Beings
    {"me",              BEING,        cubicle,    "yourself"},
    {"boss",            BEING,        bossoffice, "your asshole boss"},
    {"jose",            BEING,        josecube,
        "José, your friend and hilarious but lazy coworker"},
    // Items
    {"token",           ITEM,         cubicle,    "your security token"},
    {"usb",             ITEM,         cubicle,    "a beatup USB drive"},
    {"phone",           ITEM,         cubicle,
        "Your trusty smartphone. The screen is cracked and it can be a pain to charge, but it works."}
};
