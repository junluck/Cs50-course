#include <cs50.h>
#include<math.h>
#include <stdio.h>

int main(void){

    float amount= get_float("dollar amount: ");
    int pennies = round(amount *100);
    printf("Number of pennies %i \n",pennies);



}