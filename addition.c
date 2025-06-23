#include<stdio.h>               //include standard input-output library

int main(){                   //execution starts from here

    int n1,n2,sum;              // Declare three integer variables

    printf("Enter number n1 and n2 = ");  //enter two numbers

    scanf(" %d %d " , &n1 , &n2);           //Read two integer inputs

    sum = n1 + n2;                  //sum of n1 and n2

    printf("%d\n",sum);        //Print the sum

    return 0;
}