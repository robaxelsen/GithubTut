#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

string thief_name();
string security_man();
string the_son();
string the_father();

int main(void)
{
    const char *arr[4];

    arr[0] = thief_name();
    arr[1] = security_man();
    arr[2] = the_son();
    arr[3] = the_father();

    int arr_length = sizeof(arr)/sizeof(arr[0]);
    if (arr_length < 4 )
    {
        printf("Error, add more people\n");
        return 1;
    }
    else
    {
        srand(time(NULL));
        printf("OOPS %s Just got killed \n", arr[rand() % (arr_length)]);
    }
    return 0;
}

// asks for a name of the Thief
string thief_name()
{
    string thief = get_string("Thief Name: ");
    return thief;
}

// asks for a name of the Security Guy
string security_man()
{
    string security_man = get_string("Security name: ");
    return security_man;
}

// asks for a name of the Son
string the_son()
{
   string ask = get_string("Son name: ");
   return ask;
}

// asks for a name of the father
string the_father()
{
    string father = get_string("Father: ");
    return father;
}

