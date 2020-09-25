#include <stdio.h>
#include <stdbool.h>

#include "inc/parse.h"

static char input[100] = "look around";

static bool getInput(void)
{
    printf("\n--> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
    printf("Hey! It's about time you showed up...\n");
    while (parseAndExecute(input) && getInput());
    printf("\nPfft.\n");
    return 0;
}
