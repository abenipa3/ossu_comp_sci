#include <cs50.h>
#include <stdio.h>

// Assignment completed in the Harvard CS50 codespace

int main(void)
{
    string name = get_string("What is your name? ");
    // This will print a greeting with my name :)
    printf("hello, %s\n", name);
    // printf("hello, world\n");
}