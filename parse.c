#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool parseAndExecute(char *input)
{
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");
    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return false;
        }
        else if (strcmp(verb, "look") == 0)
        {
            printf("A dark screen sits before you.\n");
        }
        else if (strcmp(verb, "go") == 0)
        {
            printf("Sit. You have work to do.\n");
        }
        else 
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
}