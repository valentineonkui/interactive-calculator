/*
     project: interactive calculator
     author: valentine
     date: 29th October 2021
     compiler: GCC
     language: C99
     license: MIT

     INPUTS -> -2,-11,1,3
     OUTPUTS -> -2,22,21,7


*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int num1,num2,num3,num4,add,diff,mult,div


    num1=-2;
    num2=-11;
    num3=1;
    num4=3;


    //capture input
    printf("design an interactive calculator!\n");
    printf("enter the values -2,-11,1,3: ");

    //computation
     add = num1 + num4;
     diff = num4 - num3;
     mult = num2 * num1;
     div = (float) num1 / num2;


     //output

     // add: result
     // 3 + 5 = 8
     printf("%d + %d = %d\n",num1,num4,add);
     printf("%d - %d = %d\n",num4,num3,diff);
     printf("%d * %d = %d\n",num2,num1,mult);
     printf("%d / %d = %d\n",num1,num2,div);


    return 0;
}
