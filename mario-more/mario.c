#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l < i; l++)
        {
            printf("#");
        }
        printf("\n");

    }



}