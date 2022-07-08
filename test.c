#include <cs50.h>
#include <stdio.h>



int main(){


int count=0;

int num=get_long("enter your number: ");


while(num!=0){
    num/=10;
    ++count;}
if(count==14){
    printf("congrats the digits is a visa card");
}

else {printf("Its a other type of card");};




}