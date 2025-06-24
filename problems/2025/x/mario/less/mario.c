#include <stdio.h>
#include <cs50.h>

void print_row(int n);
void print_space(int n);

int main(void)
{
    int i = get_int("How high is the pyramid? ");

    if (i <= 0)
    {
        printf("Print a number that is positive and higher than 0 ");
    }
    int j = i;
    for (j = 0; j < i+1; j++)
        {
            print_space(i-j);
            print_row(j);
            printf("\n");

        }

}

void print_row(int n)
{
    for (int i = 0; i<n; i++)
        {
            printf("#");
        }

}

void print_space(int n)
{
for (int i = 0; i<n; i++)
        {
            printf(" ");
        }
}
