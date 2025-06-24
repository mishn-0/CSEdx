#include <cs50.h>
#include <stdio.h>

int main(void)
{   //a FUN way to do it, but not recommended

    printf("The result of a sum is %i\n", get_int("x: ") + get_int("y: "));

    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("If you multiply them, the result is %i \n",x*y);

    int dollars = get_int("How many dollars do you want to start with?");

    while(true)
    {
    char c = get_char("Here's $%i Double it and give it to the next person?", dollars);
        if (c == 'y' || c == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
        printf("Here you go, you now have $%i\n", dollars );
        }

        char people = get_int("How many people will share the $%i?", dollars);

        // to avoid TRUNCATION (getting rid of all decimals) you need to tell it to treat it as a FLOAT and HOW MANY to use
        printf("%.50f\n", (float) dollars/people);
}
