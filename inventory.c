#include <stdio.h>

#include "thing.h"
#include "misc.h"
#include "noun.h"
#include "move.h"

void get(const char *noun)
{
    THING *thg = getVisible("what you want to get", noun);
    if (thg == player)
    {
        printf("Umm...");
    }
    else if (thg->location == player)
    {
        printf("You already have that.");
    }
    else if (thg->location->type == BEING)
    {
        printf("Try asking nicely");
    }
    else
    {
        moveThing(thg, player);
    }        
}

void drop(const char *noun)
{
    moveThing(getPossession(player, "drop", noun), player->location);
}

void ask(const char *noun)
{
   moveThing(getPossession(actorHere(), "ask", noun), player);
}
void give(const char *noun)
{
   moveThing(getPossession(player, "give", noun), actorHere());
}
void inv(void)
{
   if (listObjectsAtLocation(player) == 0)
   {
      printf("You are empty-handed.\n");
   }
}
