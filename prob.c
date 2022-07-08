#include <stdio.h>
#include <cs50.h>

int main(void){

    int answer = get_int("Pick a number from 1-10. \n");

    const int num = 5;

    if(answer<num){
        printf("Your number is less then 5. \n");
    }
    else if (answer>num){
        printf("your number is higher then 5. \n")
    ;}

    else

    {printf("please do not enter in a word");
    }

}