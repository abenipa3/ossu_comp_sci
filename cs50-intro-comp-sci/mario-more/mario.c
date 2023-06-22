#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height;
    do
    {
        height = get_int("Enter the height: \n");
        printf("Height: %i\n", height);
    }
    while (height > 1 && height < 8);
}