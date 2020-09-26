#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "parse.h"
#include "version.h"

static char input[100] = "look around";

static bool getInput(void)
{
    printf("\n--> ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main(int argc, char *argv[])
{
    if (argc > 0 && strcmp(argv[1], "version") == 0)
    {
        printf("%s\n", VERSION);
        return 0;
    }
    printf("Hey! It's about time you showed up...\n");
    while (parseAndExecute(input) && getInput());
    printf("\nPfft.\n");
    return 0;
}
