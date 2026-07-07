#include <string.h>

void reverseString(char str[]){
    int i=0;
    int j= strlen(str)-1;
    char t;
    while(i<j){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
}
#include "functions.h"

int reverseNumber(int n)
{
    int reversed = 0;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return reversed * sign;
}

int lcm(int a , int b){
    int max , min , x;
    if (a==0 || b==0)
    return 0;
    if (a>b){
        max = a;
        min = b ; 
            }
    else {
        max = b;
        min = a;
         }
x=max ;
while (1){
    if (max % min ==0){
        return max ;
    }
max +=x;
}
}
