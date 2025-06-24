#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declare an integer and ask it to the user
    int x = get_int("What is X? ");
    int y = get_int("What is y? ");


    if (x < y)
    {
        printf("x is less than y\n");
    }

    else if (x > y)
        printf("x is more than y\n");

    else  //we don't need to compare for this case, it would add too much extra steps
        {
        printf("x is equal to y\n");
        }
}
