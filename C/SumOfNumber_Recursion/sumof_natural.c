#include<stdio.h>
int sum(int n);

int main() {
    int number,result;
    printf("Entet a positive integer: ");
    scanf("%d",&number);
    result=sum(number);
    
    printf("sum=%d",result);
    return 0;
}

int sum(int n){
    if(n!=0)
    return n+sum(n-1);
    else 
    return n;
}
