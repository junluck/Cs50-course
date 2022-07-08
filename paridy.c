#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompt user agreement
    char c = get_char("Do you agree?");
    //check wether user agreed
    if(c=='y' || c=='Y')
    {
        printf("Agreed.\n");
    }

    else if( c == 'n' || c=='N'){

        printf("Not agreed.\n");

    }



}
