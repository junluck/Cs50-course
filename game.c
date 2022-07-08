#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int geuss=get_int("Please pick any random number");
    if(geuss<10){
        for(int i=0;i<geuss;i++){
            printf(" \n");
        printf("this number is less then 10");
        }

        }
    else if(geuss>10)
    {
        for(int i=0;i<geuss;i++){
            printf(" \n");
        printf("this number is greator then 10");
        }
    }



}