#include <stdio.h>
#include <string.h>

#include "thing.h"
#include "misc.h"
#include "noun.h"

void look(const char *noun)
{
    if (noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("You are in %s.\n", player->location->description);
        listObjectsAtLocation(player->location);
    }
    else
    {
        printf("I don't understand what you want to see.\n");
    }
}
void go(const char *noun)
{
    THING *obj = getVisible("where you want to go", noun);
    if (obj->location == NULL && obj != player->location)
    {
        printf("OK.\n");
        player->location = obj;
        look("around");
    }
    else
    {
        printf("You can't get much closer than this.\n");
    }
}