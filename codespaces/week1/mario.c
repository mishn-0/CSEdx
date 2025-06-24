#include <stdio.h>
void print_row(int n);

int main(void)
{
    for (int i = 0; i<4; i++)
    {
        printf("?");
    }
    printf("\n\n");
    for (int j = 0; j < 3; j++)
        {
        for (int k = 0; k < 3; k++)
            {
                printf("#");
            }
            printf("\n");
        }


}

void print_row(int n)
{
    for (int i = 0; i<n; i++)
        {
            printf("#")
        }
        printf("\n");
}
