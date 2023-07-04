#include <cs50.h>
#include <stdio.h>

void half_pyramid(int n);
int height;

int main(void)
{
    do
    {
        height = get_int("Enter the height: \n");
    }
    while (height < 1 || height > 8);
    half_pyramid(height);
}

void half_pyramid(int n)
{
    // this will add a new line
    for (int i = 0; i < height; i++)
    {
        // This loop will add the spaces
        for (int s = height - i; s > 1; s--)
        {
            printf(" ");
        }
        // Left hashies (h)
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        // Adding the gaps
        printf("  ");
        // Right hashies (h)
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
