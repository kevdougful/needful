#include <stdio.h>

#include "thing.h"

void moveThing(THING *thg, THING *to)
{
    if (to == NULL)
    {
        printf("There is nobody here to give that to.\n");
    }
    else if (thg->location == NULL)
    {
        printf("That is way to heavy man.\n");
    }
    else
    {
        if (to == player->location)
        {
            printf("You drop %s.\n", thg->description);
        }
        else if (to != player)
        {
            printf(to->type == BEING ? "You give %s to %s.\n"
                                     : "You put %s in %s.\n",
                   thg->description, to->description);
        }
        else if (thg->location == player->location)
        {
            printf("You pick up %s.\n", thg->description);
        }
        else
        {
            printf("You get %s from %s.\n", thg->description, thg->location->description);
        }
        thg->location = to;        
    }
    
}