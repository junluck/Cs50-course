#include <cs50.h>
#include <stdio.h>



void meow(void){

    printf("meow.\n");
}

int main(void)

{
    int mw= get_int("How many meows do you want? /n");
    for(int i=0; i<mw;i++){
        meow();
    }


}