#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people [2];

    people[0].name = "Maciej";
    people[0].number = "1321231";

    string name = get_string("Name ");
    for (int i = 0; i < 1; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        else
        {
            printf("Not found\n");
            return 1;
        }

    }

}