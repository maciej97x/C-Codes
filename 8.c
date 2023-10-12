#include <stdio.h>
#include <cs50.h>

int main(void)

{

int n = get_int("Write number of calls ");

if (n < 1)

    {
    printf("Call more often!\n ");
    }

else if (n >= 1)

    {
    printf("We have such a good contact!\n ");
    }


