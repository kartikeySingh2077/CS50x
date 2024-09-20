#include<stdio.h>
#include<cs50.h>
int main (void)
{

//an array of numbers
int number[] = { 20 , 30 , 60 , 56 , 45 , 69 , 96 , 84 , 89 , 1 , 2 ,3 , 10020 , 208};

//search for a number from that array
int n = get_int("Number?  ");
for (int i = 0 ; i < 14 ; i++)
   {
    if (number[i] == n)
   {


    printf("found\n");
    return 0;
    }

   }


return 1;



}
