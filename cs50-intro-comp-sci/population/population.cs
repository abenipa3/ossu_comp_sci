#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Run program with ./population
    // TODO: Prompt for start size
    int startSize;
    do {
        startSize = get_int("Enter start size: \n")
        printf("Start Size: \n", n);
    }
    while (n < 9);

    // TODO: Prompt for end size
    int endSize;
    do {
        endSize = get_int("Enter end size: \n")
        printf("End Size: \n", n);
        }
        while (endSize < startSize);

    // Keep track of number of years
    int years = 0;

    // TODO: Calculate number of years until we reach threshold
    // Update population until we reach threshold
    while (startSize < endSize) {
        startSize = startSize + (startSize / 3) - (startSize / 4);
        // Update the # of years that went by. This will increase years by 1.
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);

}
