#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "location.h"
#include "inventory.h"

bool parseAndExecute(char *input)
{
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");
    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0) return false;
        else if (strcmp(verb, "look") == 0)     look(noun);
        else if (strcmp(verb, "go") == 0)       go(noun);
        else if (strcmp(verb, "get") == 0)      get(noun);
        else if (strcmp(verb, "drop") == 0)     drop(noun);
        else if (strcmp(verb, "give") == 0)     give(noun);
        else if (strcmp(verb, "ask") == 0)      ask(noun);
        else if (strcmp(verb, "inv") == 0)      inv(noun);
        else 
        {
            printf("I don't know how to '%s'.\n", verb);
            exit(0);
        }
    }
    return true;
}
