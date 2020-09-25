#include <stdio.h>

#include "thing.h"

int listObjectsAtLocation(THING *location)
{
    int count = 0;
    THING *obj;
    for (obj = objs; obj < endOfObjs; obj++)
    {
        if (obj != player && obj->location == location)
        {
            if (count++ == 0)
            {
                printf("You see:\n");
            }
            printf("%s\n", obj->description);
        }
    }
    return count;
}
