#include<stdio.h> 

int main() { 

    int  i , j , n ,t,ord;
    int ar[25];

   printf("\n Enter the total number of elements of array");
   scanf("%d",&n);

   printf("\n Enter the elements of the array");
   for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
   }

   printf("\n Enter either the elements are to be sorted as assending-'0' or decending-'1'");
   scanf("%d",&ord);

    if(ord == 0) {

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            
                if(ar[i]>ar[j]){
                    t = ar[j];
                    ar[j] = ar[i];
                    ar[i] = t;
                }
            }
        }   

    }
    else if(ord == 1)
    {
        for(i=n-1;i>=0;i--){
            for(j=i-1;j>=0;j--){

                if(ar[i]>ar[j]){
                    t = ar[i];
                    ar[i] = ar[j];
                    ar[j] = t;
                }
            }
        }
    }
    
    printf("\n The bubble sorted elements are:" );
    for(i=0;i<n;i++) { printf("\n %d" , ar[i]); }

    return 0;

}