#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string answer = get_string("Ask ");
    string password = get_string("mama");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool checkLower = false;


    for (int i = 0; i < strlen(password); i++)
    {
        if(islower(password[i]))
        {
            checkLower = true;
        }
    }
}