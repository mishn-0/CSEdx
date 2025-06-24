#include <stdio.h>
#include <cs50.h>

// VOID tells C that a function called meow exists that takes NO INPUT, and has NO OUTPUT
void meow(void);

int get_positive_int(void); // it has an output of type INT but NO INPUT as shown due to the void

int main(void)
{
    int n = get_int("How many meows do you want?\n");

    if (n==1)
        {
            printf("meow..");
            goto end;
        }

    int m = n-2;

        while (m > 0)
        {

            printf("meow,");
            m--;
        }

        while (m < 1)
        {
            meow();
            m++;
        }

        int start_m = m;    // so I won't alter the value of m
        //1 meow... at the end, the first one is on the same line as above
        for (m = start_m; m < 2; m++) // always need to explicitly set the initial value of the loop variable m = 0 would've worked as well
        {
            printf("meow..");

        }

        end:
            printf(".\n");
}

//creating a MEOW function instead
void meow(void)
{
    printf("\nmeow, \n");
}
