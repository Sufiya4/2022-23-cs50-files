#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    //prompt user for height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //for each row
    for (int i = 0; i < n; i++)
    {
        //(printing spaces)
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }
        //for each column
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}