#include <cs50.h>
#include <stdio.h>

int main (void)
{
 char c = get_char("Do you agree? (y/n)\n");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
// || is the logical OR
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    else
        {
        printf("type 'y' for yes and 'n' for no\n");
        }
}



