#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main (void){

// An array of strings
string strings[] = { "cow", "bus", "boy", "good", "a", "b", "abc", "lemon", "xenith", "anya", "me", "you", "your", "yours" };

// Search for string

string s = get_string ("string you wanna check ?  ");
for (int i = 0 ; i < 14 ; i++)
{

    if (strcmp(strings[i], s)== 0)



{

    printf("found\n");

     return 0;

      }
}
return 1;


}



















