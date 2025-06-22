#include<stdio.h>


int getsum(int num){
    int i,sum=0;
    for(i = 1; i <= num ; i++)
    sum+=i;
    
    return sum;
}
int getmul(int num){
    int i,mul=1;
    for(i = 1; i <= num ; i++)
    mul*=i;
   
    return mul;
}
int main(){
    int ans = getsum(5);         // calling getsum function   
    int ans1 = getmul(5);       // calling getmul function
    printf("\n%d",ans);        // print hte ans from getsum function
    printf("\n%d",ans1);      // print hte ans from getmul function
}
   
    
    
