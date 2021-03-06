#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "thing.h"

static bool objectHasTag(THING *obj, const char *noun)
{
    return noun != NULL && *noun != '\0' && strcmp(noun, obj->tag) == 0;
}

static THING *getObject(const char *noun)
{
    THING *thg, *res = NULL;
    for (thg = thgs; thg < endOfThgs; thg++)
    {
        if (objectHasTag(thg, noun))
        {
            res = thg;
        }
    }
    return res;
}

THING *getVisible(const char *intention, const char *noun)
{
    THING *obj = getObject(noun);
    if (obj == NULL)
    {
        printf("I don't understand %s.\n", intention);
    }
    else if (!(obj == player ||
               obj == player->location ||
               obj->location == player ||
               obj->location == player->location ||
               obj->location == NULL ||
               obj->location->location == player ||
               obj->location->location == player->location))
    {
        printf("You don't see any %s here.\n", noun);
        obj = NULL;
    }
    return obj;
}

THING *getPossession(THING *from, const char *verb, const char *noun)
{
    THING *thg = NULL;
    if (from == NULL)
    {
        printf("I don't understand who you want to %s.\n", verb);
    }
    else if ((thg = getObject(noun)) == NULL)
    {
        printf("I don't understand what you want to %s.\n", verb);
    }
    else if (thg == from)
    {
        printf("You should not be doing that to %s.\n", thg->description);
        thg = NULL;
    }
    else if (thg->location != from)
    {
        if (from == player)
        {
            printf("You are not holding any %s.\n", noun);
        }
        else
        {
            printf("There appears to be no %s you can get from %s.\n",
                   noun, from->description);
        }
        thg = NULL;
    }
    return thg;
}
