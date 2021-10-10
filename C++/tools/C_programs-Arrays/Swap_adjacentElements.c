#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX],n,i;
    int temp;
    
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    
    //Value of n must be even
    if(n%2!=0){
        printf("Total number of elements should be even");
        return 1;
    }
    //Taking input
    else{
        printf("Enter array elements:\n");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
         }
    }
    //Swapping
    for(i=0;i<n;i+=2){
         temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
    }
    printf("\nArray elements afterswapping adjacent elements:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}