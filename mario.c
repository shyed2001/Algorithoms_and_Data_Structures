#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

void print(char x, int h); // data and function prptotype
int main(void)
{
    int h;
    do
    {
        h = get_int("Height? :  "); //get hight input from user.  
    }
    while (1 > h || h > 8); //ask for right value.
   
    for (int j = 0; j < h; j++)   // main loop
    {
        print(' ', h - 1 - j);  // starting spaces.
        print('#', j + 1);  // 1st pyramid bricks.
        print(' ', 2); //middle.
        print('#', j + 1);  // 2 nd pyramid. 

        printf("\n");  // new line. 
    }

}

void print(char x, int h)
{
    for (int j = 0; j < h; j++)
    {
        printf("%c", x);
    }
 

}
