#include <stdio.h>
#include <cs50.h>

int main(void)

{
int number = 5;

int guess = get_int("Whats your number? ");

if (guess != number)
{
    printf("Wrong guess ");
}

if (guess == number)

{
    printf("Correct ");
}

}