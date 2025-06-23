#include <stdio.h>

// sum of array
void arraydisplay(int elements[],int number){
   int i; 
   int sum=0;
    printf("Array is: ");
   for(int i=0; i<number; i++){
    printf("%d\t",elements[i]);
    
   sum += elements[i];

   }
printf("\nTotal sum is: %d",sum);
}

// bubble sorting array

void bubblesort(int n,int elements[]){
    int temp,j,i;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n - i - 1 ; j++){

            if (elements[j] > elements[j+1]){

                temp = elements[j];

                elements[j] = elements[j+1];

                elements[j+1] = temp ;
            }


        }
    }

    printf("\nsorted array:");
    for(int i=0;i<n;i++)
    printf("%d\t",elements[i]);
}

// max value of an array


void maxvalue(int n,int elements[]){
    int max = elements[0];
    for ( int i = 0; i < n ; i++)
    {
        if (elements[i]> max)
        max =elements[i];
    }
    
    
    printf("\nmax value of an array: ");
    printf("%d",max);
}
void occurrences(int n,int elements[],int x){
    int i,counts=0;
    
    for(i=0;i<n;i++){
        if (elements[i] == x)
            counts++;

    }
    printf("\nthe occurrences of the value %d is %d",x ,counts);
}
int main() {

    int elements[]= {4,5,3,2,5,1,56,7,7};
    int n =sizeof(elements)/sizeof(elements[0]);

    arraydisplay(elements,n);
    bubblesort(n,elements);
    maxvalue(n,elements);
    occurrences(n,elements,5);
    
    return 0;

}
