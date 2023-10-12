#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers [] = {3, 5, 11, 52,111};

    int n = get_int("Number ");
    for (int i = 0; i < 5; i++)
    {
        if (numbers [i] == n)
        {
            printf("Git\n");
            return 0;
        }
        else
        {
            printf("Słabo\n");
            return 1;
        }

    }

}