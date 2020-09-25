#include <stdio.h>

#include "thing.h"

THING *actorHere(void)
{
    THING *thg;
    for (thg = thgs; thg < endOfThgs; thg++)
    {
        if (thg->location == player->location && thg->type == BEING)
        {
            return thg;
        }
    }
    return NULL;
}

int listObjectsAtLocation(THING *location)
{
    int count = 0;
    THING *thg;
    char *msg = location == player ? "You have:" : "You see:";
    for (thg = thgs; thg < endOfThgs; thg++)
    {
        if (thg != player && thg->location == location)
        {
            if (count++ == 0)
            {
                printf("%s\n", msg);
            }
            printf("%s\n", thg->description);
        }
    }
    return count;
}
