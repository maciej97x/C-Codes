#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string strings [] = {"ma", "pu", "tu", "ku"};

    string s = get_string("Word ");
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(strings[i], s) == 0)
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