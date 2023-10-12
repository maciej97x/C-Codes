#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What is your name? ");
    string second = get_string("Where do you live? ");

    printf("Hello, %s, from %s! " ,first, second );

}