#include<stdio.h>

int maxnumber(int *num1,int *num2){  //pass by reference
    if (*num1 > *num2){
        printf("num 1 is max = %d\n",*num1);
    }
    else {
        printf("num 2 is max =%d",*num2);
    }
}

int  swapnumber(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2 ;
    *num2 = temp ;

    return 1;
}
   
        

int main()
{
    int n1,n2;
    printf("enter num1 = ");
    scanf("%d", &n1);
    printf("enter num2 = ");
    scanf("%d",&n2);

   

    

    printf("Before : %d %d\n" , n1 , n2);
    int max = maxnumber( &n1, &n2);
    int swap = swapnumber(&n1,&n2);
    
    printf("\nafter : %d %d", n1 , n2);
}