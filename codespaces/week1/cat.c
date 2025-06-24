#include <stdio.h>
#include <cs50.h>


int get_positive_int(void); // it has an output of type INT but NO INPUT as shown due to the void
void meow(int n);   // it actually takes an input now


int main(void)
{
    int times = get_positive_int();
    meow(times);
}

// VARIABLES ONLY EXIST WITHIN THE CURLY BRACES IN WHICH THEY WERE DEFINED
// You must first create it OUTSIDE and then INITIALIZE it INSIDE BRACES when you need to use it!

int get_positive_int(void) // has no input but gives back an INTEGER
{
    int n;
    do
    {
        n = get_int("How many meows do you want?\n");   // gotta get rid of the INT so as to not declare it twice
    }
    while(n<1);
    return n;    // return the value so it can be used in MAIN
}


void meow(int n)    // this n only exists in the scope of the function meow, so you can use it again here
{
    for (int i = 0; i < n; i++)
        {
            if (n==1)
            printf("meow...\n");
            else
            printf("meow,\n");
        }
}

