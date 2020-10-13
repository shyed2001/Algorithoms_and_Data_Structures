#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Hello, world, and \n"); //print function or action or a verb.

    string name = get_string("What's your name?\n"); // Take input from users.
    printf("Hello, %s\n", name); // Use user input in a function.
}

