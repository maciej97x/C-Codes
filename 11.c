#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <string.h>


int main(void)
{
string phrase = get_string("What your secret phrase? ");
string password = ("Mala ");

if (strcmp(phrase, password) == 0)
{
    printf("Correct ");
}

else if (strcmp(phrase, password) == 1)

{
    printf("Not correct ");
}

}